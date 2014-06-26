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
      var val = $(this).val();
      if(val == 'subcontractor' || val == 'several_of_these') {
        $(".form-submit").hide();  
      }
      else {
        $(".form-submit").show();
      }
    });
    // move info elements inside radiobutton selection
    $("input[name$='submitted[role]']").each(function() {
      var idVal = $(this).attr("id");
      // use label text to search roght DOM element
      var label = $("label[for='"+idVal+"']").text();
      $(this).parent().after(($("span:contains('"+$.trim(label)+"')").parent().parent()));
    });
  }
};
})(jQuery);