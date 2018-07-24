<?php
/**
 * @file
 * vp_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vp_contact_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|contact|default';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '6',
    'children' => array(
      0 => 'field_other',
      1 => 'field_postition_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'classes' => 'field-group-format group_other',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_contact_full_group_other',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|contact|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Other');

  return $field_groups;
}
