(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.forgewebExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
   
  // Navigation functionality
  Drupal.behaviors.showSubNavigation = {
    attach: function (context, settings) {
      $('#block-menu-block-1 .responsive-menus:not(.responsified)  ul li').hoverIntent({
        over: startHover,
        out: endHover,
        timeout: 280
      });

      function startHover(e){
        $(this).find('> ul').slideDown('fast');
      }

      function endHover(e){
        $(this).find('> ul').slideUp('fast');
      }
    }
  }
  
  // Parnters & people block functionality
  /* Not used anymore
  Drupal.behaviors.partnersPeopleBlock = {
    attach: function (context, settings) {
      $('#block-quicktabs-partners-or-people .view-partners .short-desc').click(function() {
        $(this).siblings('.long-desc').fadeIn();
      });
      
      $('#block-quicktabs-partners-or-people .view-partners .long-desc').click(function() {
        $(this).fadeOut();
      });
    }
  }
  */
  
  // FAQ page scroll to clicked item
  Drupal.behaviors.scrollToFaqQuestion = {
    attach: function (context, settings) {
      $('#block-views-faq-block').once('scrollToFaqQuestion', function () {

        var $tabs = $(this).find('div.view-content');
        var scrollToTab = function(el, offset) {
          $('html, body').animate({
            scrollTop: el.offset().top - offset
          }, 500);
        };

        // Scroll to active tab on accordionchange event
        $tabs.bind('accordionchange', function(event, ui) {
          if (ui.newHeader.length > 0) {
            scrollToTab(ui.newHeader, 200);
          }
        });

      });
    }
  };

})(jQuery);
