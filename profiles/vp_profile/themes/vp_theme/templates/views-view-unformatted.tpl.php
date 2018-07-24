<?php

/**
 * @file
 * Simple view template to display a list of rows.
 *
 * This will also remove the views row div if "Add views row classes" and
 * "Add striping (odd/even), first/last row classes" are disabled.
 * https://drupal.stackexchange.com/questions/29677/how-can-i-remove-the-default-generated-div-tags-in-views-result#answer-192311
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php if ($classes_array[$id]) : ?><div class="<?php print $classes_array[$id]; ?>"><?php endif; ?>
    <?php print $row; ?>
  <?php if ($classes_array[$id]) : ?></div><?php endif; ?>
<?php endforeach; ?>
