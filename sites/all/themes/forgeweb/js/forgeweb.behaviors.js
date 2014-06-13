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
  
  Drupal.behaviors.smoothScrolling = {
    attach: function (context, settings) {
      $("#rm-no-id>li>ul>li.active").removeClass("active");
      $("#rm-no-id>li>ul>li>a.active").removeClass("active");
      $('#block-menu-block-1 a[href*=#]:not([href=#])').click(function() {
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
          var target = $(this.hash);
          $(this)
          target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
          if (target.length) {
            var top = (parseInt(target.offset().top));
            var scrollTop = top-100;
            
            $('html,body').animate({
              scrollTop: scrollTop
            }, 1000);
            return false;
          }
        }
      });
    }
  };
  
  // Groups form checkboxes, if their labels start with dashes.
  Drupal.behaviors.checkboxPrettify = {
    attach: function (context) {
      
      $(context).find('form div.form-checkboxes').once('checkboxPrettify', function() {
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
  
})(jQuery);
