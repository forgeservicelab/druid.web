<?php
/**
 * @file
 * forge_web_administrator_tools.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function forge_web_administrator_tools_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_own-content:own-content
  $menu_links['management_own-content:own-content'] = array(
    'menu_name' => 'management',
    'link_path' => 'own-content',
    'router_path' => 'own-content',
    'link_title' => 'Own content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_own-content:own-content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Own content');


  return $menu_links;
}
