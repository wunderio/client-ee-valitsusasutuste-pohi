/**
 * @file
 * Js used by "Block Last 5 Events details" view to format date html.
 */

(function($) {
  var $blockCalendar = $('.view-display-id-block_calendar');
  if ($blockCalendar.length) {
    // @todo: Where does this come from at all? remove with php.
    $blockCalendar.find('.view-content').find('> h3').remove();
    $blockCalendar.find('.views-field-field-event-ct-date').each(function() {
      var $this = $(this);
      if ($this.find('.field-item span').hasClass('date-display-single')) {
        var eventDate = $(this).find('.date-display-single').text();
        var eventDateArr = eventDate.split(" ");
        var date = eventDateArr[1];
        var month = eventDateArr[2];
        // Remove dot.
        date = date.substring(0, date.length - 1);
        // Add zero into one digit dates.
        if (date.length < 2) {
          date = '0' + date;
        }
        var newText = "<span class='day'>" + date + "</span><span class='month'>" + month + "</span>";
        $this.find(".date-display-single").html(newText);
      }
    });
    // Show the content that was hidden with CSS because it looked too ugly.
    $blockCalendar.find(".view-content").css("display", "table");
  }
})(jQuery);
