<?php
/**
 * @file
 * Template for a VP alternative frontpage.
 */
?>

<div class="panel-display vap-alternative-frontpage clearfix" <?php if (!empty($css_id)) {print "id=\"$css_id\"";} ?>>
  <div class="vap-alternative-frontpage__top">
    <div class="vap-alternative-frontpage__top-main">
      <div class="vap-alternative-frontpage__top-main-top">
        <?php print $content['top_main_top']; ?>
      </div>
      <div class="vap-alternative-frontpage__top-main-bottom">
        kiirelt kätte, kalender

        <?php print $content['top_main_bottom']; ?>
      </div>
    </div>
    <div class="vap-alternative-frontpage__top-sidebar">
      <?php print $content['top_sidebar']; ?>
    </div>
  </div>

  <div class="vap-alternative-frontpage__bottom">
    social media
    <?php print $content['bottom']; ?>
  </div>
</div>
