<?php
/**
 * @file
 * vp_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}