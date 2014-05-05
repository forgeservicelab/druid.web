<?php
/**
 * @file
 * forge_web_tutorial.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function forge_web_tutorial_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-tutorial-menu.
  $menus['menu-tutorial-menu'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'title' => 'Tutorial menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Tutorial menu');


  return $menus;
}
