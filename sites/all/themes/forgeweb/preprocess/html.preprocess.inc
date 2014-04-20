<?php

/**
 * Implements hook_preprocess_page().
 */
function forgeweb_preprocess_html(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  drupal_add_css('//cloud.typography.com/7101492/624424/css/fonts.css', array('type' => 'external'));
  // Some fix js:s for 234. Most to be removed in future
  drupal_add_js('$path/js/unicode-hack.js');
  drupal_add_js('$path/js/remove-activeclasses.js');
}