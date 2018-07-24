<?php
/**
 * @file
 * vp_legal_act.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_legal_act_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'legal_acts';
  $view->description = '';
  $view->tag = 'VP';
  $view->base_table = 'node';
  $view->human_name = 'Legal Acts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Õigusaktid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Otsing';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Tühista';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Täpsemad valikud',
      'secondary_collapse_override' => '0',
    ),
    'field_la_legal_act_group_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_la_legal_act_type_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Kirjeid lehel';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kõik -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Nihe';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'legal_act' => 'legal_act',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Legal act group (field_la_legal_act_group) */
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['id'] = 'field_la_legal_act_group_tid';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['table'] = 'field_data_field_la_legal_act_group';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['field'] = 'field_la_legal_act_group_tid';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['expose']['operator_id'] = 'field_la_legal_act_group_tid_op';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['expose']['label'] = 'Legal act group';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['expose']['operator'] = 'field_la_legal_act_group_tid_op';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['expose']['identifier'] = 'field_la_legal_act_group_tid';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['group_info']['label'] = 'Legal act group (field_la_legal_act_group)';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['group_info']['identifier'] = 'field_la_legal_act_group_tid';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_la_legal_act_group_tid']['vocabulary'] = 'legal_act_group';
  /* Filter criterion: Content: Legal act type (field_la_legal_act_type) */
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['id'] = 'field_la_legal_act_type_tid';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['table'] = 'field_data_field_la_legal_act_type';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['field'] = 'field_la_legal_act_type_tid';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['operator_id'] = 'field_la_legal_act_type_tid_op';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['label'] = 'Õigusakti liik';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['operator'] = 'field_la_legal_act_type_tid_op';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['identifier'] = 'field_la_legal_act_type_tid';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['vocabulary'] = 'legal_act_type';
  $handler->display->display_options['filters']['field_la_legal_act_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;

  /* Display: Legal Acts Page */
  $handler = $view->new_display('page', 'Legal Acts Page', 'legal_acts_page');
  $handler->display->display_options['path'] = 'legal-acts';
  $export['legal_acts'] = $view;

  return $export;
}
