<?php
/**
 * @file
 * vp_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function vp_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ct_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ct_event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ct_event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function vp_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_event_ct_date',
        2 => 'field_event_ct_time',
        3 => 'field_event_ct_location',
        4 => 'body',
        5 => 'node_link',
        6 => 'field_event_ct_type_tag',
        7 => 'language',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_event_ct_date' => 'ds_content',
      'field_event_ct_time' => 'ds_content',
      'field_event_ct_location' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
      'field_event_ct_type_tag' => 'ds_content',
      'language' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ct_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_event_ct_date',
        1 => 'field_event_ct_time',
        2 => 'field_event_ct_location',
      ),
      'left' => array(
        3 => 'body',
      ),
      'footer' => array(
        4 => 'group_ct_event_ad_info_wrapper',
        5 => 'group_ct_event_ad_info_left',
        6 => 'group_ct_event_ad_info_right',
        7 => 'field_event_ct_additional_info',
        8 => 'field_ct_event_attachements',
      ),
    ),
    'fields' => array(
      'field_event_ct_date' => 'header',
      'field_event_ct_time' => 'header',
      'field_event_ct_location' => 'header',
      'body' => 'left',
      'group_ct_event_ad_info_wrapper' => 'footer',
      'group_ct_event_ad_info_left' => 'footer',
      'group_ct_event_ad_info_right' => 'footer',
      'field_event_ct_additional_info' => 'footer',
      'field_ct_event_attachements' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|ct_event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ct_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ct_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_ct_date',
        1 => 'field_event_ct_time',
      ),
      'right' => array(
        2 => 'title',
        3 => 'field_event_ct_location',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_event_ct_date' => 'left',
      'field_event_ct_time' => 'left',
      'title' => 'right',
      'field_event_ct_location' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|ct_event|teaser'] = $ds_layout;

  return $export;
}
