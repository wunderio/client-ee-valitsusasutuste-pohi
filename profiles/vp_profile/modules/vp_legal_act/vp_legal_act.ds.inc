<?php
/**
 * @file
 * vp_legal_act.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function vp_legal_act_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|legal_act|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'legal_act';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'static-75-25-2columns__title',
      ),
    ),
  );
  $export['node|legal_act|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function vp_legal_act_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_act|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_act';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_la_body',
      ),
    ),
    'fields' => array(
      'field_la_body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'static-75-25-2columns__wrapper_has_border' => 'static-75-25-2columns__wrapper_has_border',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|legal_act|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|legal_act|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'legal_act';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_la_body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_la_body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'static-75-25-2columns__wrapper_has_border' => 'static-75-25-2columns__wrapper_has_border',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|legal_act|teaser'] = $ds_layout;

  return $export;
}
