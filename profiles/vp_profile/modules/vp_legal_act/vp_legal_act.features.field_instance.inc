<?php
/**
 * @file
 * vp_legal_act.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vp_legal_act_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-legal_act-field_la_body'.
  $field_instances['node-legal_act-field_la_body'] = array(
    'bundle' => 'legal_act',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="static static-75-25-2columns static-75-25-2columns_has-border static-75-25-2columns_has-separator">
	<div class="inner clearfix">
		<div class="col first">
			<p>Lorem ipsum</p>
		</div>

		<div class="col last">
			<p>Kontakt:</p>

			<div class="static static-infobox01 static-infobox01_no-padding">
				<ul>
					<li class="telephone">
						<h4>Lorem Ipsum</h4>
						Telefon: +372 51904968 <a href="mailto:lorem.ipsum@eesti.ee">lorem.ipsum@eesti.ee</a></li>
				</ul>
			</div>

			<p><a href="#">Lisalink</a><br>
				<a href="#">Lisalink 2</a></p>
		</div>
	</div>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'view_mode_facebook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_la_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-legal_act-field_la_legal_act_group'.
  $field_instances['node-legal_act-field_la_legal_act_group'] = array(
    'bundle' => 'legal_act',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_facebook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_la_legal_act_group',
    'label' => 'Legal act group',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-legal_act-field_la_legal_act_type'.
  $field_instances['node-legal_act-field_la_legal_act_type'] = array(
    'bundle' => 'legal_act',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'scs' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'view_mode_facebook' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_la_legal_act_type',
    'label' => 'Legal act type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Legal act group');
  t('Legal act type');

  return $field_instances;
}
