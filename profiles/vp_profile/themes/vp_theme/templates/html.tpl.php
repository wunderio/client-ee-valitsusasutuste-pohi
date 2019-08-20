<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" vocab="http://www.w3.org/2011/rdfa-context/rdfa-1.1">
<?php print $namespaces; ?>
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php print l(t('Accessibility Help'), drupal_get_normal_path('accessibility', 'en'), array('attributes' => array('class' => array('element-invisible', 'element-focusable')))); ?>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
