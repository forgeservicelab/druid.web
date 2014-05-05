<?php
/**
 * @file
 * forge_web_offering.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function forge_web_offering_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-forge-member-navigation.
  $menus['menu-forge-member-navigation'] = array(
    'menu_name' => 'menu-forge-member-navigation',
    'title' => 'Forge member navigation',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forge member navigation');


  return $menus;
}
