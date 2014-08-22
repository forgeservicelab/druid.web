(function($) {
  // Help region toggler
  Drupal.behaviors.forgeHelpToggle = {
    attach: function (context, settings) {
      $('.toggle-help').click(function() {
        $(this).parent().toggleClass('open');
      });
    }
  };
})(jQuery);

