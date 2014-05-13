(function($) {
  Drupal.behaviors.forgeCheckedCheckboxesBehavior = {
    attach: function (context, settings) {
      
      // Add checked class for input labels.
      $('div#block-views-feed-block').find('input:checked').siblings('label').addClass("checked");
      $('form#views-exposed-form-feed-page').find('input:checked').siblings('label').addClass("checked");
    }
  };
})(jQuery);
