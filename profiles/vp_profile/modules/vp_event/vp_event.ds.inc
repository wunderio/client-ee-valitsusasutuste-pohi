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
      'weight' => '6',
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
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_event_ct_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_event_ct_end_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => ' - ',
        ),
      ),
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
        3 => 'field_event_ct_end_time',
        4 => 'field_event_ct_location',
        5 => 'body',
        6 => 'node_link',
        7 => 'field_event_ct_type_tag',
        8 => 'language',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_event_ct_date' => 'ds_content',
      'field_event_ct_time' => 'ds_content',
      'field_event_ct_end_time' => 'ds_content',
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
        1 => 'group_start_end_time',
        2 => 'field_event_ct_time',
        3 => 'field_event_ct_end_time',
        4 => 'field_event_ct_location',
      ),
      'left' => array(
        5 => 'body',
      ),
      'footer' => array(
        6 => 'group_ct_event_ad_info_wrapper',
        7 => 'group_ct_event_ad_info_left',
        8 => 'group_ct_event_ad_info_right',
        9 => 'field_event_ct_additional_info',
        10 => 'field_ct_event_attachements',
      ),
    ),
    'fields' => array(
      'field_event_ct_date' => 'header',
      'group_start_end_time' => 'header',
      'field_event_ct_time' => 'header',
      'field_event_ct_end_time' => 'header',
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
        1 => 'group_start_end_time',
        2 => 'field_event_ct_time',
        3 => 'field_event_ct_end_time',
      ),
      'right' => array(
        4 => 'title',
        5 => 'field_event_ct_location',
      ),
    ),
    'fields' => array(
      'field_event_ct_date' => 'left',
      'group_start_end_time' => 'left',
      'field_event_ct_time' => 'left',
      'field_event_ct_end_time' => 'left',
      'title' => 'right',
      'field_event_ct_location' => 'right',
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