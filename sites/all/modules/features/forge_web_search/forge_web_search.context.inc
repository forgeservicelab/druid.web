<?php
/**
 * @file
 * forge_web_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'content',
          'weight' => '-48',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'content',
          'weight' => '-47',
        ),
        'facetapi-W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g' => array(
          'module' => 'facetapi',
          'delta' => 'W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-NqeDE2mMWoSI3cj9ZcfT1DsECY1MWH0Z' => array(
          'module' => 'facetapi',
          'delta' => 'NqeDE2mMWoSI3cj9ZcfT1DsECY1MWH0Z',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search'] = $context;

  return $export;
}
