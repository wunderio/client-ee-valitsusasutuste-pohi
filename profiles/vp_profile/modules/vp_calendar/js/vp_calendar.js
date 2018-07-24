/**
 * @file
 * Custom behaviors for Simple hierarchical select.
 */
(function($) {
    Drupal.behaviors.customShsBehaviors = {
        /*
         * This function will create none option and labels in resellers view.
         */
        attach: function(context, settings) {

            function find_week_and_change(){
                $("body").find(".ui-datepicker-week-col" ).each(function( index ) {
                    // If text in selected cell is equal to search value.
                    if($( this ).text() == Drupal.settings.vp_calendar.selected_week ){
                        var title_year = $(".ui-datepicker-calendar").parent().find(".ui-datepicker-header .ui-datepicker-year").text();
                        if(title_year == Drupal.settings.vp_calendar.selected_year) {
                            $(this).parent().addClass("activeweek");
                        }else if(Drupal.settings.vp_calendar.selected_week == 1){
                            var next_title_y = parseInt(title_year) + 1;
                            var prev_title_y = parseInt(title_year) - 1;
                            if(prev_title_y == Drupal.settings.vp_calendar.selected_year){
                                $(this).parent().addClass("activeweek");
                            }
                            if(next_title_y == Drupal.settings.vp_calendar.selected_year){
                                $(this).parent().addClass("activeweek");
                            }
                        } // If this is last week of the year, highlight it on different calendar page on next year.
                        else if(title_year != Drupal.settings.vp_calendar.selected_year && Drupal.settings.vp_calendar.selected_week == Drupal.settings.vp_calendar.last_week) {
                            $(this).parent().addClass("activeweek");
                        }
                    }
                });
            }

            ///**
            // * Get the ISO week date week number
            // */
            //Date.prototype.getWeek = function () {
            //  /*  // Create a copy of this date object
            //    var target  = new Date(this.valueOf());
            //
            //    // ISO week date weeks start on monday
            //    // so correct the day number
            //    var dayNr   = (this.getDay() + 6) % 7;
            //
            //    // ISO 8601 states that week 1 is the week
            //    // with the first thursday of that year.
            //    // Set the target date to the thursday in the target week
            //    target.setDate(target.getDate() - dayNr + 1);
            //
            ////    console.log(target);
            //
            //    // Store the millisecond value of the target date
            //    var firstThursday = target.valueOf();
            //
            //    // Set the target to the first thursday of the year
            //    // First set the target to january first
            //    target.setMonth(0, 1);
            //    // Not a thursday? Correct the date to the next thursday
            //    if (target.getDay() != 4) {
            //        target.setMonth(0, 1 + ((4 - target.getDay()) + 7) % 7);
            //    }
            //
            //    // The weeknumber is the number of weeks between the
            //    // first thursday of the year and the thursday in the target week
            //    return 1 + Math.ceil((firstThursday - target) / 604800000); // 604800000 = 7 * 24 * 3600 * 1000*/
            //}

            ///**
            // * Get the ISO week date year number
            // */
            //Date.prototype.getWeekYear = function ()
            //{
            //    // Create a new date object for the thursday of this week
            //    var target	= new Date(this.valueOf());
            //    target.setDate(target.getDate() - ((this.getDay() + 6) % 7) + 3);
            //
            //    return target.getFullYear();
            //}

            // Can be deleted.
            function getWeekNumber(d) {
                return new Date(+d).format('W');
            }



            ///**
            // * Get the ISO week date year number
            // */
            //Date.prototype.getWeekYear = function ()
            //{
            //    // Create a new date object for the thursday of this week
            //    var target	= new Date(this.valueOf());
            //    target.setDate(target.getDate() - ((this.getDay() + 6) % 7) + 3);
            //
            //  //  return target.getFullYear();
            //}

            /**
             * Get the ISO week date week number
             */
           /* Date.prototype.getWeek = function () {
                // Create a copy of this date object
                var target  = new Date(this.valueOf());

                // ISO week date weeks start on monday
                // so correct the day number
                var dayNr   = (this.getDay() + 6) % 7;

                // ISO 8601 states that week 1 is the week
                // with the first thursday of that year.
                // Set the target date to the thursday in the target week
                target.setDate(target.getDate() - dayNr + 3);

                // Store the millisecond value of the target date
                var firstThursday = target.valueOf();

                // Set the target to the first thursday of the year
                // First set the target to january first
                target.setMonth(0, 1);
                // Not a thursday? Correct the date to the next thursday
                if (target.getDay() != 4) {
                    target.setMonth(0, 1 + ((4 - target.getDay()) + 7) % 7);
                }

                // The weeknumber is the number of weeks between the
                // first thursday of the year and the thursday in the target week
              //  return 1 + Math.ceil((firstThursday - target) / 604800000); // 604800000 = 7 * 24 * 3600 * 1000
            }*/





            function mydiff(date1,date2,interval) {
                var second=1000, minute=second*60, hour=minute*60, day=hour*24, week=day*7;
                date1 = new Date(date1);
                date2 = new Date(date2);
                var timediff = date2 - date1;
                if (isNaN(timediff)) return NaN;
                switch (interval) {
                    case "years": return date2.getFullYear() - date1.getFullYear();
                    case "months": return (
                    ( date2.getFullYear() * 12 + date2.getMonth() )
                    -
                    ( date1.getFullYear() * 12 + date1.getMonth() )
                    );
                    case "weeks"  : return Math.floor(timediff / week);
                    case "days"   : return Math.floor(timediff / day);
                    case "hours"  : return Math.floor(timediff / hour);
                    case "minutes": return Math.floor(timediff / minute);
                    case "seconds": return Math.floor(timediff / second);
                    default: return undefined;
                }
            }

            var pattern = /(\d{2})\.(\d{2})\.(\d{4})/;

            if(Drupal.settings.vp_calendar.selected_date != null) {

                $("#edit-field-event-ct-date-value-value-datepicker-popup-0").val(Drupal.settings.vp_calendar.selected_date);

                var date1 = new Date();
                //console.log(Drupal.settings.vp_calendar.selected_date);
                var date2 = new Date(Drupal.settings.vp_calendar.selected_date.replace(pattern, '$3-$2-$1'));
                var diffDays = mydiff(date1, date2, "days");
            }
            else{
                var diffDays = 0;
            }

            $("#edit-field-event-ct-date-value-value-datepicker-popup-0").click(function(){
                find_week_and_change();
            });

            $(document).on('click','.ui-datepicker-next',function(){
                find_week_and_change();
            });

            $(document).on('click','.ui-datepicker-prev',function(){
                find_week_and_change();
            });


            $("#edit-field-event-ct-date-value-value-datepicker-popup-0").datepicker({
                    showWeek: true,
                    dateFormat: 'dd.mm.yy',
                    calculateWeek: getWeekNumber,
                    defaultDate: diffDays
                }
            );

            console.log(window);
        }
    }
})(jQuery);