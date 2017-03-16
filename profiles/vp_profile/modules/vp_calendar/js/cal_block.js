/**
 * @file
 *
 */
(function($) {
    Drupal.behaviors.customShsBehaviors = {
        /*
         * This function will create none option and labels in resellers view.
         */
        attach: function (context, settings) {

            $("body").find(".view-display-id-block_calendar .view-content > h3").remove();//TODO where does this ome from at all? remove with php
            $("body").find(".view-display-id-block_calendar .views-field-field-event-ct-date" ).each(function( index ) {
                if($(this).find(".field-item span").hasClass("date-display-single")) {
                    var event_date = $(this).find(".date-display-single").text();
                    var event_date_arr = event_date.split(" ");
                    var date = event_date_arr[1];
                    var month = event_date_arr[2];
                    //Remove dot
                    date = date.substring(0, date.length - 1);
                    //Add zero into one digit dates
                    if (date.length < 2) {
                        date = "0" + date;
                    }
                    var new_text = "<span class='day'>"+ date +"</span><span class='month'>"+month+"</span>";
                    $(this).find(".date-display-single").html(new_text);
                }
            });
        }
    }
})(jQuery);
