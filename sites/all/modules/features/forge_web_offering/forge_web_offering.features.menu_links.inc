<?php
/**
 * @file
 * forge_web_offering.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function forge_web_offering_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-forge-member-navigation_add-product-collection:node/add/product-family
  $menu_links['menu-forge-member-navigation_add-product-collection:node/add/product-family'] = array(
    'menu_name' => 'menu-forge-member-navigation',
    'link_path' => 'node/add/product-family',
    'router_path' => 'node/add',
    'link_title' => 'Add product collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-forge-member-navigation_add-product-collection:node/add/product-family',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-forge-member-navigation_add-product-offering:node/add/offering
  $menu_links['menu-forge-member-navigation_add-product-offering:node/add/offering'] = array(
    'menu_name' => 'menu-forge-member-navigation',
    'link_path' => 'node/add/offering',
    'router_path' => 'node/add',
    'link_title' => 'Add product offering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-forge-member-navigation_add-product-offering:node/add/offering',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-forge-member-navigation_add-service-offering:node/add/service-offering
  $menu_links['menu-forge-member-navigation_add-service-offering:node/add/service-offering'] = array(
    'menu_name' => 'menu-forge-member-navigation',
    'link_path' => 'node/add/service-offering',
    'router_path' => 'node/add',
    'link_title' => 'Add service offering',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-forge-member-navigation_add-service-offering:node/add/service-offering',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add product collection');
  t('Add product offering');
  t('Add service offering');


  return $menu_links;
}
