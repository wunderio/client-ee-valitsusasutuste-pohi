<?php
/**
 * @file
 * vp_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vp_news_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_first_news_thumbnail.
  $styles['frontpage_first_news_thumbnail'] = array(
    'label' => 'frontpage_first_news_thumbnail',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 308,
          'height' => 212,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_detail_cover_image.
  $styles['news_detail_cover_image'] = array(
    'label' => 'news_detail_cover_image',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_list_thumbnail.
  $styles['news_list_thumbnail'] = array(
    'label' => 'news_list_thumbnail',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter_thumbnail.
  $styles['newsletter_thumbnail'] = array(
    'label' => 'Newsletter thumbnail',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subject_related_news_thumbnail.
  $styles['subject_related_news_thumbnail'] = array(
    'label' => 'subject_related_news_thumbnail',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 235,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function vp_news_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Standard content type, for creating simple content pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A single newsitem. Can appear at the frontpage news section, as a related newsitem with another News node or with an Article node, in the general news list at /news, or as an independent node page. Can be used as a newsletter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'newsletter_news' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('Both a single newsletter newsitem or a newsletter combined of multiple nodes of different content types, ie. News, Weekly Schedule, Newsletter itself etc. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
