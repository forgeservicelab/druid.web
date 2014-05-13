/**
 * @file forge_web_tutorial.js
 *
 * tutorial needed js.
 */

(function ($) {
  Drupal.behaviors.forgeWebTotorial = {
    attach: function (context, settings) {
      var active = $("#block-menu-menu-tutorial-menu").find(".active-trail");
      $(active).prev('li').addClass('next-from-active');
      $(active).next('li').addClass('next-from-active');
      $(active).prev('li').prev('li').addClass('last-from-active');
      $(active).next('li').next('li').addClass('last-from-active');
    }
  };
})(jQuery);
