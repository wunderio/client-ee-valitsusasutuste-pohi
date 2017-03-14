<?php
/**
 * @file
 * vp_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kalender';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_event_ct_type_tag_tid_i18n' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_event_ct_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['pager_position'] = 'both';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['sorts']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  /* Contextual filter: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['arguments']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['granularity'] = 'week';
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
    'ct_event' => 'ct_event',
  );
  /* Filter criterion: Content: Event type (field_event_ct_type_tag) (translated) */
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['id'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['field'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator_id'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['label'] = 'Sündmuse tüüp';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['identifier'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['vocabulary'] = 'event_type_tax';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['hierarchy'] = 1;
  /* Filter criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['filters']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['filters']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['operator_id'] = 'field_event_ct_date_value_op';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['label'] = 'Week';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['operator'] = 'field_event_ct_date_value_op';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['identifier'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_date_value']['form_type'] = 'date_popup';

  /* Display: Calendar feed */
  $handler = $view->new_display('feed', 'Calendar feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'rss';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['arguments']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['granularity'] = 'week';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_event' => 'ct_event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['path'] = 'events-feed';

  /* Display: Block Last 5 events */
  $handler = $view->new_display('block', 'Block Last 5 events', 'block_calendar');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_ct_date',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['content'] = '<a href="calendar/week"><?php print t("Show all events"); ?></a>';
  $handler->display->display_options['footer']['area_1']['format'] = 'php_code';
  $handler->display->display_options['footer']['area_1']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_type_tax' => 'event_type_tax',
    'department' => 0,
    'news_types' => 0,
    'newsletter' => 0,
    'news_subjects' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_ct_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[nothing]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_event' => 'ct_event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['filters']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['filters']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_ct_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Taxonomy term: Show on frontpage (field_show_on_frontpage_block) */
  $handler->display->display_options['filters']['field_show_on_frontpage_block_value']['id'] = 'field_show_on_frontpage_block_value';
  $handler->display->display_options['filters']['field_show_on_frontpage_block_value']['table'] = 'field_data_field_show_on_frontpage_block';
  $handler->display->display_options['filters']['field_show_on_frontpage_block_value']['field'] = 'field_show_on_frontpage_block_value';
  $handler->display->display_options['filters']['field_show_on_frontpage_block_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_show_on_frontpage_block_value']['value'] = array(
    1 => '1',
  );

  /* Display: Calendar iCal feed */
  $handler = $view->new_display('feed', 'Calendar iCal feed', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'first_available';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'field_event_ct_location';
  $handler->display->display_options['row_options']['location_field'] = 'field_event_ct_location';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_location']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'ical-feed/%';

  /* Display: Fields block for full view */
  $handler = $view->new_display('block', 'Fields block for full view', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_event_ct_time']['id'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['table'] = 'field_data_field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['field'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['label'] = 'Aeg';
  $handler->display->display_options['fields']['field_event_ct_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_time']['hide_empty'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = 'Asukoht';
  $handler->display->display_options['fields']['field_event_ct_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_location']['hide_empty'] = TRUE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = 'Sündmuse tüüp';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_event' => 'ct_event',
  );
  $handler->display->display_options['block_description'] = 'CT Event detailed fieelds';

  /* Display: Fields block for full view */
  $handler = $view->new_display('block', 'Fields block for full view', 'block_ct_events_attach');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'node';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_event_ct_attachments']['id'] = 'field_event_ct_attachments';
  $handler->display->display_options['fields']['field_event_ct_attachments']['table'] = 'field_data_field_event_ct_attachments';
  $handler->display->display_options['fields']['field_event_ct_attachments']['field'] = 'field_event_ct_attachments';
  $handler->display->display_options['fields']['field_event_ct_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_event' => 'ct_event',
  );
  $handler->display->display_options['block_description'] = 'CT Event detailed fieelds files';
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'vp_calendar_default';
  $view->description = 'Week\'s actual view is composed here. Month and year have separate view modes but have to be listed here to generate tabs.';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'VP Calendar Default by module v3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['sorts']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  /* Sort criterion: Content: Time (field_event_ct_time) */
  $handler->display->display_options['sorts']['field_event_ct_time_value']['id'] = 'field_event_ct_time_value';
  $handler->display->display_options['sorts']['field_event_ct_time_value']['table'] = 'field_data_field_event_ct_time';
  $handler->display->display_options['sorts']['field_event_ct_time_value']['field'] = 'field_event_ct_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_week_view');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_ct_date|field_event_ct_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_event_ct_time']['id'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['table'] = 'field_data_field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['field'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_time']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'calendar_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_location']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: 2 columns (rewrite all fields) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '2 columns (rewrite all fields)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-left">
<div class="views-field views-field-field-event-ct-date"> [field_event_ct_date] [field_event_ct_time]</div>
</div>
<div class="col-right">
<div class="views-field views-field-title"><h2 class="field-content">[title]</h2></div>
<div class="views-field views-field-field-event-ct-location">[field_event_ct_location]</div>
<div class="views-field views-field-body"> [body]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Event type (field_event_ct_type_tag) (translated) */
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['id'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['field'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator_id'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['identifier'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['vocabulary'] = 'event_type_tax';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['hierarchy'] = 1;
  /* Filter criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['filters']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['filters']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_ct_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['operator_id'] = 'field_event_ct_date_value_op';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['label'] = 'Week';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['operator'] = 'field_event_ct_date_value_op';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['identifier'] = 'field_event_ct_date_value';
  $handler->display->display_options['filters']['field_event_ct_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'calendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_ct_date|field_event_ct_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'vp_calendar_pager_for_month:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = 'Asukoht';
  $handler->display->display_options['fields']['field_event_ct_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_location']['type'] = 'text_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '60',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'ignore',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: 2 columns (rewrite all fields) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '2 columns (rewrite all fields)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-left">
<div class="views-field views-field-field-event-ct-date"> [field_event_ct_date] [field_event_ct_time]</div>
</div>
<div class="col-right">
<div class="views-field views-field-title"><h2 class="field-content">[title]</h2></div>
<div class="views-field views-field-field-event-ct-location">[field_event_ct_location]</div>
<div class="views-field views-field-body"> [body]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  $handler->display->display_options['path'] = 'calendar/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_ct_date|field_event_ct_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'vp_calendar_pager:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = 'Asukoht';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '60',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-3:+10';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  $handler->display->display_options['path'] = 'calendar/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-event-ct-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_ct_date.field_event_ct_date_value' => 'field_data_field_event_ct_date.field_event_ct_date_value',
  );
  $export['vp_calendar_default'] = $view;

  $view = new view();
  $view->name = 'vp_calendar_pager';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VP Calendar Pager for year';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VP Calendar Pager';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Täpsemad valikud',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_event_ct_type_tag_tid_i18n' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Kirjeid lehel';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kõik -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Nihe';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_ct_date|field_event_ct_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_event_ct_time']['id'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['table'] = 'field_data_field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['field'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_time']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'calendar_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_location']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Field: 2 columns (rewrite all fields) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '2 columns (rewrite all fields)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field views-field-title"><h2 class="field-content">[title]</h2></div>
<div class="col-left">
  <div class="views-field views-field-field-event-ct-date"> [field_event_ct_date] [field_event_ct_time]</div>
  <div class="views-field views-field-field-event-ct-type-tag">[field_event_ct_type_tag]</div>
  <div class="views-field views-field-field-event-ct-location">[field_event_ct_location]</div>
</div>
<div class="views-field views-field-body"> [body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['sorts']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  /* Contextual filter: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['arguments']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_options']['code'] = '$a = arg();
if( isset( $a[2] ) ){
return $a[2];
}else{
return date("Y");
}';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['year_range'] = '-3:+10';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['granularity_reset'] = 0;
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
    'ct_event' => 'ct_event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Event type (field_event_ct_type_tag) (translated) */
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['id'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['field'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator_id'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['label'] = 'Sündmuse tüüp';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['identifier'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['vocabulary'] = 'event_type_tax';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['hierarchy'] = 1;
  $export['vp_calendar_pager'] = $view;

  $view = new view();
  $view->name = 'vp_calendar_pager_for_month';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VP Calendar Pager for month';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VP Calendar Pager';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Kirjeid lehel';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kõik -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Nihe';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_ct_date|field_event_ct_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Time */
  $handler->display->display_options['fields']['field_event_ct_time']['id'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['table'] = 'field_data_field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['field'] = 'field_event_ct_time';
  $handler->display->display_options['fields']['field_event_ct_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_time']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_ct_date']['id'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['field'] = 'field_event_ct_date';
  $handler->display->display_options['fields']['field_event_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['settings'] = array(
    'format_type' => 'calendar_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_ct_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_date']['delta_offset'] = '0';
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_event_ct_type_tag']['id'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['field'] = 'field_event_ct_type_tag';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_type_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_type_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_ct_location']['id'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['table'] = 'field_data_field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['field'] = 'field_event_ct_location';
  $handler->display->display_options['fields']['field_event_ct_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_ct_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_ct_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ct_location']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '60',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Field: 2 columns (rewrite all fields) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '2 columns (rewrite all fields)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-field views-field-title"><h2 class="field-content">[title]</h2></div>
<div class="col-left">
  <div class="views-field views-field-field-event-ct-date"> [field_event_ct_date] [field_event_ct_time]</div>
  <div class="views-field views-field-field-event-ct-type-tag">[field_event_ct_type_tag]</div>
  <div class="views-field views-field-field-event-ct-location">[field_event_ct_location]</div>
</div>
<div class="views-field views-field-body"> [body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['sorts']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['sorts']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  /* Contextual filter: Content: Date -  start date (field_event_ct_date) */
  $handler->display->display_options['arguments']['field_event_ct_date_value']['id'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['table'] = 'field_data_field_event_ct_date';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['field'] = 'field_event_ct_date_value';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['default_argument_options']['code'] = '$a = arg();
if( isset( $a[2] ) ){
return $a[2];
}else{
return date("Y")."-".date("m");
}';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_ct_date_value']['granularity_reset'] = 0;
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
    'ct_event' => 'ct_event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Event type (field_event_ct_type_tag) (translated) */
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['id'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['table'] = 'field_data_field_event_ct_type_tag';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['field'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator_id'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['label'] = 'Sündmuse tüüp';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['operator'] = 'field_event_ct_type_tag_tid_i18n_op';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['identifier'] = 'field_event_ct_type_tag_tid_i18n';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['vocabulary'] = 'event_type_tax';
  $handler->display->display_options['filters']['field_event_ct_type_tag_tid_i18n']['hierarchy'] = 1;
  $export['vp_calendar_pager_for_month'] = $view;

  return $export;
}
