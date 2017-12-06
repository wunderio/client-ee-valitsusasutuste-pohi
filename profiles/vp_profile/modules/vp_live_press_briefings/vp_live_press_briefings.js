(function($){$().ready(function(){
  $('a.import-video-youtube-live').click(function(e){
    e.preventDefault();
    $('body').append('<div id="import-video-stream-youtube"><iframe width="600" height="332" src="//www.youtube.com/embed/' + Drupal.settings.vp_live_press_briefing + '" allowfullscreen></iframe></div>');
    $('#import-video-stream-youtube').dialog({
      height: 407,
      scrolling: false,
      width: 640,
      position: { my: "center", at: "center", of: window },
      close: function() {
        $(this).remove();
      }
    });
  });
});})(jQuery);
