<?php
/**
 * @file
 * forge_web_my_forge.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function forge_web_my_forge_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-log-in-menu_my-forge:node/144
  $menu_links['menu-log-in-menu_my-forge:node/144'] = array(
    'menu_name' => 'menu-log-in-menu',
    'link_path' => 'node/144',
    'router_path' => 'node/%',
    'link_title' => 'My Forge',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-log-in-menu_my-forge:node/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Forge');


  return $menu_links;
}
