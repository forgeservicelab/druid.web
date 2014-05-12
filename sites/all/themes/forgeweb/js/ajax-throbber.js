(function($) {
  // Ajax loader.
  Drupal.behaviors.forgeAjaxThrobber = {
    attach: function (context, settings) {
      $('div.view-content').once('spinner', function(){

        var $content = $(this);
        var $loader = $('<div class="forge-throbber"><div class="forge-throbber-inner"></div></div>');
        var $overlay = $('<div class="form-overlay"></div>');
        var $submit = $('input.ctools-auto-submit-click');

        $content.append($overlay);
        $content.append($loader);

        $submit.click(function(){
          $loader.addClass('visible');
          $overlay.addClass('visible');
        });
      });
    }
  };
})(jQuery);