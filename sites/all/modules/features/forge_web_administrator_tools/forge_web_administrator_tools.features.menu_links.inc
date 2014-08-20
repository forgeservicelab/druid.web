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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administrator-tools_adminstrate-comments:admin/content/comments
  $menu_links['menu-administrator-tools_adminstrate-comments:admin/content/comments'] = array(
    'menu_name' => 'menu-administrator-tools',
    'link_path' => 'admin/content/comments',
    'router_path' => 'admin/content',
    'link_title' => 'Adminstrate comments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrator-tools_adminstrate-comments:admin/content/comments',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administrator-tools_adminstrate-content:admin/content
  $menu_links['menu-administrator-tools_adminstrate-content:admin/content'] = array(
    'menu_name' => 'menu-administrator-tools',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Adminstrate content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administrator-tools_adminstrate-content:admin/content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administrator-tools_faq-management:admin/content/faq-ordering
  $menu_links['menu-administrator-tools_faq-management:admin/content/faq-ordering'] = array(
    'menu_name' => 'menu-administrator-tools',
    'link_path' => 'admin/content/faq-ordering',
    'router_path' => 'admin/content/faq-ordering',
    'link_title' => 'FAQ-management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administrator-tools_faq-management:admin/content/faq-ordering',
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
  t('Adminstrate comments');
  t('Adminstrate content');
  t('FAQ-management');
  t('Own content');


  return $menu_links;
}
