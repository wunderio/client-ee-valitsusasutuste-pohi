<?php
/**
 * @file
 * vp_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vp_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_event_ad_info_left|node|ct_event|full';
  $field_group->group_name = 'group_ct_event_ad_info_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_event';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_ct_event_ad_info_wrapper';
  $field_group->data = array(
    'label' => 'Additional info left',
    'weight' => '19',
    'children' => array(
      0 => 'field_event_ct_additional_info',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Additional info left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'event-bottom-left field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_ct_event_ad_info_left|node|ct_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_event_ad_info_right|node|ct_event|full';
  $field_group->group_name = 'group_ct_event_ad_info_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_event';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_ct_event_ad_info_wrapper';
  $field_group->data = array(
    'label' => 'Additional info right',
    'weight' => '20',
    'children' => array(
      0 => 'field_ct_event_attachements',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Additional info right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'event-bottom-right field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_ct_event_ad_info_right|node|ct_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_event_ad_info_wrapper|node|ct_event|full';
  $field_group->group_name = 'group_ct_event_ad_info_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'group_ct_event_ad_info_left',
      1 => 'group_ct_event_ad_info_right',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'event-bottom-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_ct_event_ad_info_wrapper|node|ct_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start_end_time|node|ct_event|full';
  $field_group->group_name = 'group_start_end_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Time wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_ct_time',
      1 => 'field_event_ct_end_time',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-start-end-time field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_start_end_time|node|ct_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start_end_time|node|ct_event|teaser';
  $field_group->group_name = 'group_start_end_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Time wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_ct_end_time',
      1 => 'field_event_ct_time',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-start-end-time field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_start_end_time|node|ct_event|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional info left');
  t('Additional info right');
  t('Time wrapper');

  return $field_groups;
}
