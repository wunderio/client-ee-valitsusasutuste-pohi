<?php
/**
 * @file
 * vp_alternative_frontpage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function vp_alternative_frontpage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.ap_news_frontpage_news.disabled"] = TRUE;

 return $overrides;
}
