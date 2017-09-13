<?php
/**
 * @file
 * vp_alternative_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function vp_alternative_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vap_alternative_frontpage';
  $page->task = 'page';
  $page->admin_title = 'VAP alternative frontpage';
  $page->admin_description = 'Alternative VAP frontpage created for the subordinate institutions.';
  $page->path = 'alternative-frontpage';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vap_alternative_frontpage__panel_context_a0870533-a35c-4d6b-808e-632b19b63a5c';
  $handler->task = 'page';
  $handler->subtask = 'vap_alternative_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'vp_alternative_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_main_bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top_main_top' => NULL,
      'top_sidebar' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'VAP alternative frontpage';
  $display->uuid = '58b14826-79b0-4bfe-b17a-14e9693fc3ff';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_vap_alternative_frontpage__panel_context_a0870533-a35c-4d6b-808e-632b19b63a5c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9588bb8e-e4c1-4206-810b-8c056bd2eab1';
  $pane->panel = 'top_main_bottom';
  $pane->type = 'block';
  $pane->subtype = 'vp_alternative_frontpage-vp_alt_frontp_direct_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9588bb8e-e4c1-4206-810b-8c056bd2eab1';
  $display->content['new-9588bb8e-e4c1-4206-810b-8c056bd2eab1'] = $pane;
  $display->panels['top_main_bottom'][0] = 'new-9588bb8e-e4c1-4206-810b-8c056bd2eab1';
  $pane = new stdClass();
  $pane->pid = 'new-60d66f41-b16b-4577-b236-95c7662e8b38';
  $pane->panel = 'top_main_bottom';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>aktuaalsed eelnõud</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '60d66f41-b16b-4577-b236-95c7662e8b38';
  $display->content['new-60d66f41-b16b-4577-b236-95c7662e8b38'] = $pane;
  $display->panels['top_main_bottom'][1] = 'new-60d66f41-b16b-4577-b236-95c7662e8b38';
  $pane = new stdClass();
  $pane->pid = 'new-881a13f4-3a4a-4e77-8e5e-4258707f8746';
  $pane->panel = 'top_main_bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-calendar-block_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '881a13f4-3a4a-4e77-8e5e-4258707f8746';
  $display->content['new-881a13f4-3a4a-4e77-8e5e-4258707f8746'] = $pane;
  $display->panels['top_main_bottom'][2] = 'new-881a13f4-3a4a-4e77-8e5e-4258707f8746';
  $pane = new stdClass();
  $pane->pid = 'new-8e240ee2-2cce-49b8-906c-0184db880bb2';
  $pane->panel = 'top_main_top';
  $pane->type = 'block';
  $pane->subtype = 'vp_alternative_frontpage-vp_alt_frontp_important_topics';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e240ee2-2cce-49b8-906c-0184db880bb2';
  $display->content['new-8e240ee2-2cce-49b8-906c-0184db880bb2'] = $pane;
  $display->panels['top_main_top'][0] = 'new-8e240ee2-2cce-49b8-906c-0184db880bb2';
  $pane = new stdClass();
  $pane->pid = 'new-00d4a021-a00c-4515-a59c-875482b4e714';
  $pane->panel = 'top_sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views-f5b4c47d1aa020f49a6db3eda8bc632d';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-views-alternative-frontpage-news',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00d4a021-a00c-4515-a59c-875482b4e714';
  $display->content['new-00d4a021-a00c-4515-a59c-875482b4e714'] = $pane;
  $display->panels['top_sidebar'][0] = 'new-00d4a021-a00c-4515-a59c-875482b4e714';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-60d66f41-b16b-4577-b236-95c7662e8b38';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vap_alternative_frontpage'] = $page;

  return $pages;

}
