/**
 * @file forge_web_wizard.js
 *
 * Handles js stuff on wizard.
 */

(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
    $("#edit-submitted-other-contract-information-the-value-of-development-project").blur(function() {
      val = parseInt($("#edit-submitted-other-contract-information-the-value-of-development-project").val());
      calculated_value = Math.round(val*0.05);
      $("#edit-submitted-other-contract-information-digile-service-fee").val(calculated_value);
    });
    // get url parameter
    var sPageURL = window.location.search.substring(1);
    var sURLVariables = sPageURL.split('&');
    for (var i = 0; i < sURLVariables.length; i++) {
      var sParameterName = sURLVariables[i].split('=');
      if (sParameterName[0] == 'role') {
        var role = sParameterName[1];
        $("input[name='submitted[role]'][value=" + role + "]").attr('checked', 'checked');
        var idVal = $("input[name='submitted[role]'][value=" + role + "]").attr("id");
        var label = $("label[for='"+idVal+"']").text();
        var _href = $("span:contains('"+$.trim(label)+"')").parent().parent().find('.learn-more-link').attr('href');
        $("span:contains('"+$.trim(label)+"')").parent().parent().find('.learn-more-link').attr("href", _href + '&role=' + role);
      }
    }
    
    $("input[name$='submitted[role]']").click(function() {
      var val = $(this).val();
      if(val == 'subcontractor' || val == 'several_of_these') {
        $(".form-submit").hide();  
      }
      else {
        $(".form-submit").show();
        var _href = $(this).parent().next('fieldset').find('.learn-more-link').attr('href');
        $(this).parent().next('fieldset').find('.learn-more-link').attr("href", _href + '&role=' + val);
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