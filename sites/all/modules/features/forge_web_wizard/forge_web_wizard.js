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
    $("input[name$='submitted[role]']").click(function() {
      val = $(this).val();
      if(val == 'subcontractor' || val == 'several_of_these') {
        $(".form-submit").attr("disabled", "disabled");  
      }
      else {
        $(".form-submit").removeAttr("disabled");
      }
    });
  }
};
})(jQuery);