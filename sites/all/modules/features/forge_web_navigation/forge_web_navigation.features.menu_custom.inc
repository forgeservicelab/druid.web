<?php
/**
 * @file
 * forge_web_navigation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function forge_web_navigation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-log-in-menu.
  $menus['menu-log-in-menu'] = array(
    'menu_name' => 'menu-log-in-menu',
    'title' => 'Log in menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log in menu');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
