<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; ?> class="ds-1col" style="border: 0; padding: 0 0 25px 0; overflow: hidden;">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>


  <?php
    // Add image styles.
    $ds_content = str_replace(' src', ' style="float: right; margin: 7px 0 0 15px;" src', $ds_content);
    // Add subject styles.
    $ds_content = str_replace(' property="dc:subject"', ' style="background: gray; border-radius: 10px; color: #fff; display: inline-block; padding: 0 10px; margin: 4px 5px 0 0; font-size: 11px;" property="dc:subject"', $ds_content);
    // Print.
    print strip_tags($ds_content, '<a><strong><ul><ol><li><img><div><span><h2>');
  ?>
</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
