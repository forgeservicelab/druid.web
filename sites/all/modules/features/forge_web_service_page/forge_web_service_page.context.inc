<?php
/**
 * @file
 * forge_web_service_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_service_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_offering_page';
  $context->description = 'This context is triggered on service offering nodes';
  $context->tag = 'Offering';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'service_offering' => 'service_offering',
        'service_offering_julkict' => 'service_offering_julkict',
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
        'quicktabs-service_offering_quicktab' => array(
          'module' => 'quicktabs',
          'delta' => 'service_offering_quicktab',
          'region' => 'content',
          'weight' => '2',
        ),
        'quicktabs-service_offering_quicktab_mobile' => array(
          'module' => 'quicktabs',
          'delta' => 'service_offering_quicktab_mobile',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-3ebc56225274a68aaf777277e0d06eeb' => array(
          'module' => 'views',
          'delta' => '3ebc56225274a68aaf777277e0d06eeb',
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
  t('This context is triggered on service offering nodes');
  $export['service_offering_page'] = $context;

  return $export;
}
