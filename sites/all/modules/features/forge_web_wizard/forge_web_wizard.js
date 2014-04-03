/**
 * @file forge_web_wizard.js
 *
 * Handles the calculated fields on webform.
 */

(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    $("#edit-submitted-other-contract-information-the-value-of-development-project").blur(function() {
      val = parseInt($("#edit-submitted-other-contract-information-the-value-of-development-project").val());
      calculated_value = Math.round(val*0.05);
      $("#edit-submitted-other-contract-information-digile-service-fee").val(calculated_value);
    });
  }
};
})(jQuery);