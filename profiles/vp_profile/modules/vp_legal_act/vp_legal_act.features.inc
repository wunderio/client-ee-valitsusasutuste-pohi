<?php
/**
 * @file
 * vp_legal_act.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_legal_act_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vp_legal_act_node_info() {
  $items = array(
    'legal_act' => array(
      'name' => t('Legal act'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
