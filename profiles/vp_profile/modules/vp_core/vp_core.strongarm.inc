<?php
/**
 * @file
 * vp_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 1;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ft-default';
  $strongarm->value = 'theme_field';
  $export['ft-default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'full_html' => 'full_html',
    'full_html_without_link_meta' => 'full_html_without_link_meta',
    'plain_text' => 'plain_text',
    'filtered_html' => 0,
    'php_code' => 0,
    'ds_code' => 0,
    'plain_html' => 0,
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  return $export;
}
