(function($) {
  Drupal.behaviors.forgeEqualHeightsBehavior = {
    attach: function (context, settings) {

      $(document).ready(function(){
        $('.l-listing').each(function(){
          var highestElement = 0;
          $('.views-row', this).each(function(){
            if($(this).height() > highestElement) {
              highestElement = $(this).height();
            }
          });

          $('.views-row',this).height(highestElement);
        });
      });

    }
  };
})(jQuery);
