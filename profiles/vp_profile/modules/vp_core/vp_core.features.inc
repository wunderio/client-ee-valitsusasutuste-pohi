<?php
/**
 * @file
 * vp_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
