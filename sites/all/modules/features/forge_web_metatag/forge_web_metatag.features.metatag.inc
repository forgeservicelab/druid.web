<?php
/**
 * @file
 * forge_web_metatag.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function forge_web_metatag_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:image' => array(
        'value' => 'http://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
      'og:image:secure_url' => array(
        'value' => 'https://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:image' => array(
        'value' => 'http://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
      'og:image:secure_url' => array(
        'value' => 'https://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'og:image' => array(
        'value' => 'http://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
      'og:image:secure_url' => array(
        'value' => 'https://forgeservicelab.fi/sites/all/themes/forgeweb/images/footer_logo_retina.png',
      ),
    ),
  );

  return $config;
}