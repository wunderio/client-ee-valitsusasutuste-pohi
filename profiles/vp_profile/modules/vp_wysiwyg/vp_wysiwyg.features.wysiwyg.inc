<?php
/**
 * @file
 * vp_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function vp_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Source' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Maximize' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'overwrite_default_table_options' => array(
          'overwrite_default_table_options_button' => 1,
        ),
        'vp_static_75_25_2columns' => array(
          'vp_static_75_25_2columns_button' => 1,
        ),
        'vp_hr' => array(
          'vp_hr_button' => 1,
        ),
        'vp_static_module_2' => array(
          'vp_static_module_2_button' => 1,
        ),
        'vp_static_simple_2columns' => array(
          'vp_static_simple_2columns_button' => 1,
        ),
        'vp_template_custom_gallery' => array(
          'vp_template_custom_gallery_button' => 1,
        ),
        'vp_template_custom_infoblock_with_icon' => array(
          'vp_template_custom_gallery_button' => 1,
        ),
        'vp_template_custom_infoblock_with_icon_wrapper' => array(
          'vp_template_custom_gallery_button' => 1,
        ),
        'templates' => array(
          'Templates' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%bsites/all/themes/omega/alpha/css/alpha-reset.css, %bprofiles/vp_profile/themes/vp_theme/css/editor.css, %b%t/css/editor.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 1,
      'ckeditor_styles' => array(
        'stylesheetparser' => 0,
      ),
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html_without_link_meta
  $profiles['full_html_without_link_meta'] = array(
    'format' => 'full_html_without_link_meta',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'add_to_summaries' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Source' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'ShowBlocks' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Maximize' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
        'overwrite_default_table_options' => array(
          'overwrite_default_table_options_button' => 1,
        ),
        'templates' => array(
          'Templates' => 1,
        ),
        'drupal' => array(
          'break' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '%bsites/all/themes/omega/alpha/css/alpha-reset.css, %bprofiles/vp_profile/themes/vp_theme/css/editor.css, %b%t/css/editor.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 1,
      'ckeditor_styles' => array(
        'stylesheetparser' => 0,
      ),
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
