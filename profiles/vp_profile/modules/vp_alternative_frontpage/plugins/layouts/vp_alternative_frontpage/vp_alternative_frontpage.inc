<?php

/**
 * @file
 * Plugin definition.
 */

$plugin = array(
  'title' => t('VP alternative frontpage'),
  'category' => t('VP'),
  'icon' => 'vp_alternative_frontpage.png',
  'theme' => 'panels_vp_alternative_frontpage',
  'css' => 'vp_alternative_frontpage.css',
  'regions' => array(
    'top_main_top' => t('Top main top'),
    'top_main_bottom' => t('Top main bottom'),
    'top_sidebar' => t('Top sidebar'),
    'bottom' => t('Bottom'),
  ),
);
