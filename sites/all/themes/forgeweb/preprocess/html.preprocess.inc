<?php

/**
 * Implements hook_preprocess_page().
 */
function forgeweb_preprocess_html(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  drupal_add_css('//cloud.typography.com/7101492/624424/css/fonts.css', array('type' => 'external'));
  drupal_add_js(drupal_get_path('theme', 'forgeweb') . '/js/remove-activeclasses.js', 'file');
  drupal_add_js(drupal_get_path('theme', 'forgeweb') . '/js/navi-scroller.js', 'file');
}