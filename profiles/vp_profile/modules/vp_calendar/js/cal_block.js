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

            var language = Drupal.settings.vp_calendar.language;
            var href = $("body").find(".view-display-id-block_calendar .view-footer a").attr("href");
            href = language+"/"+href;
            $("body").find(".view-display-id-block_calendar .view-footer a").attr("href", href);

            // Create block where titles will be contained.
            $("body").find(".view-display-id-block_calendar").prepend("<div class='block-titles'></div>");

            // This flag will set to false after first iteration.
            var first = true;
            // Find all titles(date), create needed DOM structure + insert dates to correct block.
            $("body").find(".view-display-id-block_calendar h3" ).each(function( index ) {

                var add_class = "";
                if(first === true){
                    add_class = "class='show'";
                    $(this).find("span.date-display-single").addClass("show");;
                    first = false;
                }

                if($(this).find(".field-item span").hasClass("date-display-single")) {
                    var event_date = $(this).find(".date-display-single").text();
                    var event_date_arr = event_date.split(" ");
                    event_date_arr[0] = "<span class='day'>"+event_date_arr[0]+"</span>";
                    event_date_arr[1] = "<span class='month'>"+event_date_arr[1]+"</span>";
                    var new_text = event_date_arr[0] + event_date_arr[1];
                    $(this).find(".date-display-single").html(new_text);
                    $("body").find(".view-display-id-block_calendar .block-titles").append("<h3 day='"+event_date+"'>" + $(this).html() + "</h3>");
                }
            });

            // Event that will happen after user will click on date title in the
            $("body").find(".view-display-id-block_calendar h3 span.date-display-single").click(function(){

                $(".view-display-id-block_calendar .show").removeClass("show");

                $(this).addClass("show");
                $(".view-display-id-block_calendar .view-content .views-row[day='"+$(this).parent().parent().parent().parent().attr("day")+"']").addClass("show");
                api.reinitialise();
            });

            // Every row will have attribute with event date.
            $(".view-display-id-block_calendar .view-content .views-row").each(function( index ) {
                var day = $(this).find(".views-field-field-event-ct-date span.date-display-single").text();
                $(this).attr("day",day);
            });

            //array with dates
            var days = [];
            var first_event = true;
            /*
            * This part will delete all date repeats + will add show class to the first event,
            */
            $("body .block-titles h3").each(function( index ) {
                var ev_date = $(this).attr("day");

                if(first_event==true){
                    $(this).parent().parent().find(".view-content > div[day='"+ev_date+"']").addClass("show");
                    first_event = false;
                }

                if(!days[ev_date]){
                    days[ev_date] = ev_date;
                }
                else {
                    $(this).remove();
                }
            });

            // Remove date field as a title from view.
            $(".view-content .field-name-field-event-ct-date").parent().remove();

            $(".view-content").wrapInner('<div class="view-content-inner" style="height: 100%;"></div>')

            var settings = {
              showArrows: true,
              autoReinitialise: true
            };
            var pane = $('.block-calendar-block-calendar .view-content-inner');
            pane.jScrollPane(settings);
            pane.jScrollPane(settings);
            var api = pane.data('jsp');
        }
    }
})(jQuery);
