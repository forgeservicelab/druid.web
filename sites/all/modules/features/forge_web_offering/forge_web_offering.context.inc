<?php
/**
 * @file
 * forge_web_offering.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_offering_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard';
  $context->description = 'This context is triggered on dashboard';
  $context->tag = 'Forge Plaza';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-forge-member-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-forge-member-navigation',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forge Plaza');
  t('This context is triggered on dashboard');
  $export['dashboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'offering_page';
  $context->description = 'This context is triggered on product offering nodes';
  $context->tag = 'Offering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'offering' => 'offering',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-offering_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'offering_slideshow-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'quicktabs-product_page_quicktab' => array(
          'module' => 'quicktabs',
          'delta' => 'product_page_quicktab',
          'region' => 'content',
          'weight' => '2',
        ),
        'quicktabs-product_page_quicktab_mobile' => array(
          'module' => 'quicktabs',
          'delta' => 'product_page_quicktab_mobile',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-product_download_block-block' => array(
          'module' => 'views',
          'delta' => 'product_download_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-offering_video-block' => array(
          'module' => 'views',
          'delta' => 'offering_video-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-offerings_in_same_family-block' => array(
          'module' => 'views',
          'delta' => 'offerings_in_same_family-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
    'menu' => 'node/61',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Offering');
  t('This context is triggered on product offering nodes');
  $export['offering_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plaza';
  $context->description = '';
  $context->tag = 'Forge Plaza';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plaza' => 'plaza',
        'plaza/*' => 'plaza/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forge Plaza');
  $export['plaza'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plaza_front_page';
  $context->description = '';
  $context->tag = 'Forge Plaza';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plaza' => 'plaza',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-offering_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'offering_listing-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forge Plaza');
  $export['plaza_front_page'] = $context;

  return $export;
}
