(function($){$().ready(function() {
  $("div.view-contact td.views-field-title a").each(function() {
    var $link = $(this);
    $link.click(function(e) {
      e.preventDefault();
      $(this).parent().parent().next().find("div.ui-dialog-content-contact")
        .clone()
        .dialog({
          position: { my: "center", at: "center", of: window },
          close: function() {
            $link.focus();
          }
        });
    });
  });
});})(jQuery);
