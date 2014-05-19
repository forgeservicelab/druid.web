<?php
/**
 * @file
 * forge_web_administrator_tools.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function forge_web_administrator_tools_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administrator-tools.
  $menus['menu-administrator-tools'] = array(
    'menu_name' => 'menu-administrator-tools',
    'title' => 'Administrator tools',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrator tools');


  return $menus;
}