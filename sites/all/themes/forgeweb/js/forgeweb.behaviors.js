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
  };

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

  Drupal.behaviors.smoothScrolling = {
    attach: function (context, settings) {
      var scrollToTab = function(el, offset) {
        $('html, body').animate({
          scrollTop: Math.round(el.offset().top) - offset
        }, 500);
      };
      var hash = window.location.hash;
      var el = $(hash);
      if (hash !== '') {
        var ua = window.navigator.userAgent;
        var firefox = ua.indexOf("Firefox");
        var offset = -100;
        if (firefox > 0) {
          offset = 150;
        }
        scrollToTab(el, offset);
      }
      $(".l-navigation-wrapper .responsive-menus > ul > li > ul > li.active").removeClass("active");
      $(".l-navigation-wrapper .responsive-menus > ul > li > ul > li > a.active").removeClass("active");
      $('#block-menu-block-1 a[href*=#]:not([href=#])').click(function() {
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
          var target = $(this.hash);
          target = target.length ? target : $('[name=' + this.hash.slice(1) + ']');
          if (target.length) {
            scrollToTab(target, 100)
            return false;
          }
        }
      });
    }
  };

  // Groups form checkboxes, if their labels start with dashes.
  Drupal.behaviors.checkboxPrettify = {
    attach: function (context) {

      $(context).find('form.node-form div.form-checkboxes, #block-views-exp-offering-listing-block-1 .bef-checkboxes').once('checkboxPrettify', function() {
        var $this = $(this);
        var prevDepth;

        $this.find('div.form-item').each(function() {
          var $formItem = $(this);
          var $label = $formItem.find('label');
          var labelText = $label.text();

          // Count dashes from label start and do level wrapping based on the amount of dashes.
          for (var level = 0, strLength = labelText.length; level < strLength; level++) {
            if (labelText.charAt(level) !== '-') {
              if (level > 0) {
                // Remove dashes from title.
                $label.text($label.text().substring(level));

                if (prevDepth !== 'undefined') {
                  // This item will be higher in the tree than the last one.
                  if (prevDepth < level) {
                    var $lastCategory = $this.find('div.category.level-' + prevDepth).last();

                    // Since we moved higher, there shouldn't be an wrapper available yet.
                    $('<div class="category subcategory level-' + level + '"></div>')
                      .append($formItem)
                      .appendTo($lastCategory)
                      .prev()
                      // Add parent class to the "parent" element.
                      .addClass('expandable');
                  }
                  // This item is in the same level as the last one so just add the item after it.
                  else if (prevDepth === level) {
                    $this.find('div.category div.form-item').last().after($formItem);
                  }
                  // And finally the item will be lower in the tree than the last one.
                  else {
                    $this.find('div.category div.form-item').last().parents('div.category.level-' + level).append($formItem);
                  }
                }
              }
              // Main level wrapper.
              else {
                $formItem.append('<span class="toggle"></span>');

                $('<div class="category main level-0"></div>')
                  .append($formItem)
                  .appendTo($this);
              }

              $formItem.addClass('level-' + level);
              prevDepth = level;
              break;
            }
          }
        });
        // When you click the label or toggle button, open the following category container
        $this.delegate('label, span.toggle', 'click', function(){
          $(this).parent().toggleClass('expanded').next().toggleClass('open');
        });
        // Keep subcategories open that have been checked
        $this.find('div.form-item input:checked').each(function () {
          $(this).parents('.category').addClass('open');
        });
        // Add expanded class to terms that have subcategories checked
        $this.find('div.category.subcategory.open').prev().addClass('expanded');
      });
    }
  };

  Drupal.behaviors.openCommentTab = {
    attach: function (context, settings) {
      var hash = $(location).attr('hash');
      if(hash.search('comment') != -1) {
        $('div').find('div#quicktabs-service_offering_quicktab ul.ui-tabs-nav li').each(function () {
          $(this).removeClass('ui-tabs-selected');
          $(this).removeClass('ui-state-active');
        });
        $('div').find('ul.ui-tabs-nav li').last().addClass('ui-tabs-selected ui-state-active');
        $('div').find('div#qt-service_offering_quicktab-ui-tabs1').addClass('ui-tabs-hide');
        $('div').find('div#qt-service_offering_quicktab-ui-tabs4').removeClass('ui-tabs-hide');
      }
    }
  };

  Drupal.behaviors.mergeMobileNavigation = {
    attach: function (context) {
      $('div.l-region--navigation', context).once('merge-mobile-navigation', function() {
        var $this = $(this);
        var $mobileMenu = $this.find('div.responsive-menus-0-0-0');
        var mobileNavWidth = $mobileMenu.data('mediasize');
        var winWidth = $(window).width();

        if (winWidth <= mobileNavWidth) {
          $mobileMenu.find('ul.responsive-menus-simple')
            .append($this.find('div#block-locale-language-content ul li').addClass('language-switcher')
              .add($this.find('nav#block-menu-menu-log-in-menu ul li'))
              .add($this.find('form#views-exposed-form-search-page').clone()));
        }
      });
    }
  };

  Drupal.behaviors.pauseVideoWhenClickedNextPrevInflexslider = {
    attach: function (context, settings) {
      if ($.isFunction($.flexslider)) {
        $('.front .flexslider').flexslider({
          start: function(slider) {
            $('.flex-next, .flex-prev').click(function(event){
              event.preventDefault();
              $("#flexslider-1 iframe[src*=youtube]").each(function(index) {
                var video = $(this).attr("src");
                $(this).attr("src","");
                $(this).attr("src",video);
              });
            });
          }
        });
      }
    }
  };

  // Masonry configuration
  Drupal.behaviors.masonry = {
    attach: function (context) {
      $(window).load(function(){
        $('.masonry-wrapper').once('.masonry-wrapper', function(){
          var msnry = new Masonry( this, {
            columnWidth: '.masonry-item',
            itemSelector: '.masonry-item'
          });
        });
      });
    }
  };

  // Search toggle
  Drupal.behaviors.searchToggle = {
    attach: function (context) {
      $('div#block-views-exp-search-page', context).once('search-toggle', function() {
        var $this = $(this);
        var $form = $this.find('form');

        $form.click(function(event) {
          event.stopPropagation();
        });

        $this.click(function() {
          $this.toggleClass('active');
          $form.slideToggle('fast');
        });
      });
    }
  };

  // Feed block filtering functionality
  Drupal.behaviors.feedFiltering = {
    attach: function (context) {
      $('form#views-exposed-form-feed-block, form#views-exposed-form-feed-page').once('feed-filtering', function() {
        var $labels = $(this).find('label.option').slice(1);

        $labels.click(function(e) {
          var $input = $(this).prev();

          if($input.attr('checked') === true) {
            $(this).siblings().removeAttr('checked');
            $('#edit-type-all').attr('checked', 'checked');
            $('#edit-submit-feed').trigger('click');
            e.preventDefault();
          }
        });
      });
    }
  };

  Drupal.behaviors.forgeCheckedCheckboxesBehavior = {
    attach: function (context) {
      // Add checked class for input labels.
      $('div#block-views-feed-block').find('input:checked').next().addClass("checked");
      $('form#views-exposed-form-feed-page').find('input:checked').next().addClass("checked");
    }
  };

})(jQuery);
