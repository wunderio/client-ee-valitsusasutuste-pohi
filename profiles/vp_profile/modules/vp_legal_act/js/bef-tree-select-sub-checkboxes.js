/**
 * Select sub checkboxes in view filter.
 */

(function($) {
  $('UL.bef-tree').each(function() {
    var level1Checkbox = $(this).find('> ul > li > div input');

    console.log(level1Checkbox.length);

    level1Checkbox.change(function() {
      var $checkbox = $(this);
      if ($checkbox.is(':checked') === true) {
        $checkbox.parent().parent().find('.bef-tree-child input').prop('checked', true);
      }
      else {
        $checkbox.parent().parent().find('.bef-tree-child input').prop('checked', false);
      }
    })
  });
})(jQuery);
