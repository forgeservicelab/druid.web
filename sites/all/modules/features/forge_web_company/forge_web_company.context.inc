<?php
/**
 * @file
 * forge_web_company.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_company_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'company_page';
  $context->description = 'This context is triggered on company page';
  $context->tag = 'Forge Plaza';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'company' => 'company',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-company_offerings-block' => array(
          'module' => 'views',
          'delta' => 'company_offerings-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-company_sidebar_block-block' => array(
          'module' => 'views',
          'delta' => 'company_sidebar_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forge Plaza');
  t('This context is triggered on company page');
  $export['company_page'] = $context;

  return $export;
}
