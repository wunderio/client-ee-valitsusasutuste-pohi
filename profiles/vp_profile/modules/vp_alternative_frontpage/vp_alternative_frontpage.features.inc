<?php
/**
 * @file
 * vp_alternative_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_alternative_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_alternative_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function vp_alternative_frontpage_context_default_contexts_alter(&$data) {
  if (isset($data['ap_news_frontpage_news'])) {
    $data['ap_news_frontpage_news']->disabled = TRUE; /* WAS: FALSE */
  }
}
