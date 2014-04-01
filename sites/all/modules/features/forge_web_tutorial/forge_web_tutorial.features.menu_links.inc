<?php
/**
 * @file
 * forge_web_tutorial.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function forge_web_tutorial_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tutorial-menu_build:node/12
  $menu_links['menu-tutorial-menu_build:node/12'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Build',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_build:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-tutorial-menu_define:node/9
  $menu_links['menu-tutorial-menu_define:node/9'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Define',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_define:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-tutorial-menu_explore:node/11
  $menu_links['menu-tutorial-menu_explore:node/11'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Explore',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_explore:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-tutorial-menu_go-live:node/13
  $menu_links['menu-tutorial-menu_go-live:node/13'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Go live',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_go-live:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-tutorial-menu_learn:node/10
  $menu_links['menu-tutorial-menu_learn:node/10'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Learn',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_learn:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-tutorial-menu_measure:node/14
  $menu_links['menu-tutorial-menu_measure:node/14'] = array(
    'menu_name' => 'menu-tutorial-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Measure',
    'options' => array(
      'identifier' => 'menu-tutorial-menu_measure:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Build');
  t('Define');
  t('Explore');
  t('Go live');
  t('Learn');
  t('Measure');


  return $menu_links;
}
