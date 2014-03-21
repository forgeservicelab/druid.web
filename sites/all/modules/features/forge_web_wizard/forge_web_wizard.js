/**
 * @file forge_web_wizard.js
 *
 * Handles the calculated fields on webform.
 */

(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    //code starts
    console.log($("#edit-submitted-other-contract-information-the-value-of-development-project"));
    $("#edit-submitted-other-contract-information-the-value-of-development-project").blur(function() {
      val = parseInt($("#edit-submitted-other-contract-information-the-value-of-development-project").val());
      console.log(val);
      calculated_value = val*0.05;
      $("#edit-submitted-other-contract-information-digile-service-fee").val(calculated_value);
    });
    //code ends
  }
};
})(jQuery);