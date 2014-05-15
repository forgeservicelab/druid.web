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

  // Exported menu link: menu-administrator-tools_show-all-comments:admin/content/comment
  $menu_links['menu-administrator-tools_show-all-comments:admin/content/comment'] = array(
    'menu_name' => 'menu-administrator-tools',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Show all comments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrator-tools_show-all-comments:admin/content/comment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administrator-tools_show-all-content:admin/content
  $menu_links['menu-administrator-tools_show-all-content:admin/content'] = array(
    'menu_name' => 'menu-administrator-tools',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Show all content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrator-tools_show-all-content:admin/content',
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
  t('Show all comments');
  t('Show all content');


  return $menu_links;
}
