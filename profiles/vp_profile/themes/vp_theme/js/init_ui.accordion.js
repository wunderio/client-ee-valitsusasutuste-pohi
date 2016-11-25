/**
 * Accordion like module.
 */

(function($) {
  $().ready(function() {
    var $accordion = $('DIV.template-custom-accordion'),
        $accordionContents = $accordion.find('.ui-accordion-content'),
        $accordionHeaders = $accordion.find('.ui-accordion-header');

    // Default state - first open.
    $accordionContents.hide();
    $accordionContents.first().show();
    $accordionHeaders.first().addClass('ui-accordion-header-active');

    $accordionHeaders.click(function() {
      var $next = $(this).next();
      $next.toggle();
      if ($next.is(':visible')) {
        $(this).addClass('ui-accordion-header-active');
      }
      else {
        $(this).removeClass('ui-accordion-header-active');
      }
    });
  });
})(jQuery);
