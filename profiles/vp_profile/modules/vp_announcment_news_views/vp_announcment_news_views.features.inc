<?php
/**
 * @file
 * vp_announcment_news_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_announcment_news_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_announcment_news_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vp_announcment_news_views_node_info() {
  $items = array(
    'important_announcements' => array(
      'name' => t('Important Topics'),
      'base' => 'node_content',
      'description' => t('A box of text with a custom background. Important Topics are shown on the frontpage as a carousel.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
