<?php

class SimpleElasticsearch {
  private $simple_elastic_server;
  private $simple_elastic_index;
  private $simple_elastic_doc;
  private $client;

  public function __construct() {
    // @tood: should these be parameters of construct? Would this be more OOP?
    $this->simple_elastic_server = variable_get('simple_elasticsearch_elastic_server', SIMPLE_ELASTICSEARCH_ELASTIC_SERVER);
    $this->simple_elastic_index = variable_get('simple_elasticsearch_index_name', SIMPLE_ELASTICSEARCH_INDEX);
    $this->simple_elastic_doc = variable_get('simple_elasticsearch_doc_type_name', SIMPLE_ELASTICSEARCH_TYPE);

    if (class_exists('\Elasticsearch\ClientBuilder')) {
      $hosts = [
        $this->simple_elastic_server,
      ];

      $this->client = \Elasticsearch\ClientBuilder::create()
        ->setHosts($hosts)
        ->build();
    }
  }

  /**
   * Will return status of connection to elastic_search server.
   *
   * @return bool
   *   TRUE if connection is established, FALSE if not.
   */
  public function connection_status() {
    $url = $this->simple_elastic_server;
    $ch = curl_init($url);
    curl_setopt($ch, CURLOPT_NOBODY, TRUE);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, TRUE);
    curl_setopt($ch, CURLOPT_CONNECTTIMEOUT, 2);
    curl_setopt($ch, CURLOPT_TIMEOUT, 2);
    curl_exec($ch);
    $retcode = curl_getinfo($ch, CURLINFO_HTTP_CODE);
    curl_close($ch);
    if (200 == $retcode) {
      return TRUE;
    }
    return FALSE;
  }

  /**
   * Index a document in Elasticsearch.
   *
   * Uses elasticsearch-php library if it exists and falls back to simple curl if
   * it doesn't. It's strongly encouraged to install elasticsearch-php as it could
   * index 30% faster in our tests and it's the offical library.
   *
   * @param $id
   *   Document id, node id in our case.
   * @param $body
   *   Data fields to be indexed.
   */
  public function index($id, $body) {
    if (class_exists('\Elasticsearch\ClientBuilder')) {
      $params = [
        'index' => $this->simple_elastic_index,
        'type' => $this->simple_elastic_doc,
        'id' => $id,
        'body' => $body,
      ];

      $response = $this->client->index($params);
    }
    else {
      $body_json = json_encode($body);
      $put_query = 'curl -XPUT \'' . $this->simple_elastic_server . '/' . $this->simple_elastic_index . '/' . $this->simple_elastic_doc . '/' . $id . '\' -i -H "Content-Type: application/json" -d \'
            ' . $body_json . '
            \'';
      print_r($put_query);
      exec($put_query);
    }

    // Set node as indexed in Drupal.
    $exists = db_query('SELECT 1 FROM {simple_elasticsearch_content_table} WHERE nid = :nid', array(':nid' => $id))->fetchField();
    if ($exists) {
      db_update('simple_elasticsearch_content_table')
        ->fields(array(
          'indexed' => 1,
        ))
        ->condition('nid', $id, '=')
        ->execute();
    }
    else {
      db_insert('simple_elasticsearch_content_table')
        ->fields(array(
          'nid' => $id,
          'indexed' => 1,
        ))
        ->execute();
    }
  }

  /**
   * Delete node from index.
   *
   * @param $nid
   *   Node id.
   */
  function delete_document($nid) {
    try {
      if (class_exists('\Elasticsearch\ClientBuilder')) {
        $params = [
          'index' => $this->simple_elastic_index,
          'type' => $this->simple_elastic_doc,
          'id' => $nid,
        ];

        $response = $this->client->delete($params);
      }
      else {
        $delete_query = "curl -XDELETE '$this->simple_elastic_server/$this->simple_elastic_index/$this->simple_elastic_doc/$nid'";
        exec($delete_query);
      }

      db_delete('simple_elasticsearch_content_table')
        ->condition('nid', $nid, '=')
        ->execute();
    } catch (Exception $e) {
      watchdog('simple_elasticsearch', $e->getMessage(), array(), WATCHDOG_ERROR);
    }
  }

  /**
   * Delete index.
   */
  function delete_index() {
    if (class_exists('\Elasticsearch\ClientBuilder')) {
      $deleteParams = [
        'index' => $this->simple_elastic_index,
      ];
      $response = $this->client->indices()->delete($deleteParams);
    }
    else {
      $delete_query = "curl -XDELETE '$this->simple_elastic_server/$this->simple_elastic_index?pretty'";
      exec($delete_query);
    }
  }
}
