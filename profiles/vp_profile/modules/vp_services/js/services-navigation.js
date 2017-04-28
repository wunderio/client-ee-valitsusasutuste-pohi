/**
 * @file
 * Services navigation helper.
 */

(function($) {
  var $servicesView = $('DIV.view-display-id-services_page'),
      $serviceTabs = $servicesView.find('.view-filters a'),
      $select = $('<select class="services-mobile-and-tablet-nav" name=""></select>'),
      foundSelected = false;

  // Build the list of tabs as <select>.
  $serviceTabs.each(function(i) {
    // Skip the first element which is "- All -".
    if (i > 0) {
      var selected = '';
      if ($(this).parent().hasClass('selected')) {
        selected = ' selected="selected"';
        foundSelected = true;
      }
      var $option = $('<option' + selected + '>' + $(this).text() + '</option>');
      $option.data('href', this.href);
      $option.appendTo($select);
    }
  });

  // Add empty option if no tabs are selected.
  // Just like in desktop there's no tab selected when you arrive at the page.
  if (!foundSelected) {
    $select.prepend('<option selected="selected"></option>');
  }

  // Append the new <select> to DOM.
  $select.appendTo($servicesView.find('.views-widget'));

  // Redirect to new url if <select> is changed.
  $select.change(function(e) {
    e.preventDefault();
    window.location.href = $(this).find(':selected').data('href');
    return false;
  })
})(jQuery);
