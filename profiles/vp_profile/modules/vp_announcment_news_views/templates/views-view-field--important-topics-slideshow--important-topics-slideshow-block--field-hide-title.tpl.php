<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * We use this to create css that hides title if the option is set from node.
 */
?>
<?php if (isset($row->field_field_hide_title[0]['raw']['value']) && $row->field_field_hide_title[0]['raw']['value'] == 1): ?>
<style>.view-important-topics-slideshow__title-<?php print $row->nid; ?> { display: none; }</style>
<?php endif; ?>
