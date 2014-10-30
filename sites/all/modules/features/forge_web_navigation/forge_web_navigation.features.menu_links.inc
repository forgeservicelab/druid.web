<?php
/**
 * @file
 * forge_web_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function forge_web_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-forge:<front>
  $menu_links['main-menu_about-forge:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About Forge',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_about-forge:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faq:<front>
  $menu_links['main-menu_faq:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'fragment' => 'block-views-faq-block',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_faq:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-forge:<front>',
  );
  // Exported menu link: main-menu_feed:feed
  $menu_links['main-menu_feed:feed'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feed',
    'router_path' => 'feed',
    'link_title' => 'Feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_feed:feed',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_forge-plaza:node/61
  $menu_links['main-menu_forge-plaza:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Forge Plaza',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_forge-plaza:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_partners--people:<front>
  $menu_links['main-menu_partners--people:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Partners & People',
    'options' => array(
      'fragment' => 'block-views-partners-people-block',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_partners--people:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-forge:<front>',
  );
  // Exported menu link: main-menu_projects:node/89
  $menu_links['main-menu_projects:node/89'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89',
    'router_path' => 'node/%',
    'link_title' => 'Projects',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_projects:node/89',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_what:<front>
  $menu_links['main-menu_what:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'What?',
    'options' => array(
      'fragment' => 'block-views-what-why-blocks-block',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_what:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-forge:<front>',
  );
  // Exported menu link: main-menu_why:<front>
  $menu_links['main-menu_why:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Why?',
    'options' => array(
      'fragment' => 'block-views-what-why-blocks-block-1',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_why:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-forge:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Forge');
  t('FAQ');
  t('Feed');
  t('Forge Plaza');
  t('Partners & People');
  t('Projects');
  t('What?');
  t('Why?');


  return $menu_links;
}
