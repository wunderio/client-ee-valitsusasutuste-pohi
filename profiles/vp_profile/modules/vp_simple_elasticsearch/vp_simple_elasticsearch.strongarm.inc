<?php
/**
 * @file
 * vp_simple_elasticsearch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_simple_elasticsearch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_doc_type_name';
  $strongarm->value = 'simple_elasticsearch_content_index';
  $export['simple_elasticsearch_doc_type_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_elastic_server';
  $strongarm->value = 'http://127.0.0.1:9200';
  $export['simple_elasticsearch_elastic_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_fields_articleoptions';
  $strongarm->value = array(
    'field_files' => 0,
    'field_links' => 0,
    'field_gallery' => 0,
    'field_subject' => 0,
    'field_content_type' => 0,
    'field_ria_show_web_form' => 0,
  );
  $export['simple_elasticsearch_fields_articleoptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_fields_contactoptions';
  $strongarm->value = array(
    'field_department' => 'field_department',
    'field_position' => 'field_position',
    'field_contact_e_mail' => 'field_contact_e_mail',
    'field_contact_phone_nr' => 'field_contact_phone_nr',
    'field_position_in_english' => 'field_position_in_english',
    'field_skype' => 0,
    'field_the_functions' => 0,
    'field_educational_institution' => 0,
    'field_specialty' => 0,
    'field_degree' => 0,
    'field_profile_photo' => 0,
    'field_other' => 0,
    'field_position_in_russian' => 0,
    'field_field_lock' => 0,
    'field_status' => 0,
    'field_postition_description' => 0,
  );
  $export['simple_elasticsearch_fields_contactoptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_fields_ct_eventoptions';
  $strongarm->value = array(
    'field_event_ct_additional_info' => 'field_event_ct_additional_info',
    'field_event_ct_event_type' => 'field_event_ct_event_type',
    'field_event_ct_location' => 'field_event_ct_location',
    'field_ct_event_attachements' => 0,
    'field_event_ct_date' => 0,
    'field_event_ct_end_time' => 0,
    'field_event_ct_rel_gal' => 0,
    'field_event_ct_time' => 0,
  );
  $export['simple_elasticsearch_fields_ct_eventoptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_fields_newsoptions';
  $strongarm->value = array(
    'field_news_subject' => 'field_news_subject',
    'field_news_type' => 0,
    'field_cover_image' => 0,
    'field_author_picture' => 0,
    'field_name' => 0,
    'field_occupaction' => 0,
    'field_division' => 0,
    'field_phone' => 0,
    'field_e_mail' => 0,
    'field_links' => 0,
    'field_files' => 0,
    'field_gallery' => 0,
    'field_content_type' => 0,
    'field_simplenews_term' => 0,
    'field_related_event' => 0,
  );
  $export['simple_elasticsearch_fields_newsoptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_fields_vp_job_offeroptions';
  $strongarm->value = array(
    'field_adv_exp_date' => 0,
    'field_job_advertisement_link' => 0,
  );
  $export['simple_elasticsearch_fields_vp_job_offeroptions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_index_name';
  $strongarm->value = 'simple_elasticsearch';
  $export['simple_elasticsearch_index_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_number_of_results';
  $strongarm->value = 1;
  $export['simple_elasticsearch_number_of_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_page_size';
  $strongarm->value = '10';
  $export['simple_elasticsearch_page_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_select_contenttype';
  $strongarm->value = array(
    'article' => 'article',
    'contact' => 'contact',
    'ct_event' => 'ct_event',
    'news' => 'news',
    'announcements' => 0,
    'background_image' => 0,
    'gallery' => 0,
    'history' => 0,
    'important_announcements' => 0,
    'newsletter_news' => 0,
    'vp_job_offer' => 0,
    'vp_menu_dropdown_box' => 0,
    'webform' => 0,
    'weekly_schedule_day' => 0,
    'youtube_video' => 0,
  );
  $export['simple_elasticsearch_select_contenttype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_use_proxy';
  $strongarm->value = 0;
  $export['simple_elasticsearch_use_proxy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_elasticsearch_use_proxy_addr';
  $strongarm->value = '';
  $export['simple_elasticsearch_use_proxy_addr'] = $strongarm;

  return $export;
}
