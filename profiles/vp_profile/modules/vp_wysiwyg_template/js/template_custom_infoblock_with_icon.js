/**
 * Template Custom - Read More width icon.
 *
 * Add read more if there are more than 1 paragraphs.
 */

(function($) {
  $('DIV.template-custom-infoblock-with-icon__content-content').each(function() {
    var $this = $(this),
        $children = $this.find('> *');

    if ($children.length > 1) {
      $children.hide().css('margin-bottom', 0);
      $children.eq(0).show();
      $children.eq(0).append(' <a class="template-custom-infoblock-with-icon__icon_read-more" href="#">' + Drupal.t('Read more') + '</a>');
    }

    $('A.template-custom-infoblock-with-icon__icon_read-more').click(function(e) {
      e.preventDefault();
      var $this = $(this);
      $this.parent().attr('style', '');
      $this.parent().siblings().show().attr('style', '');
      $this.remove();
    });
  });
})(jQuery);
