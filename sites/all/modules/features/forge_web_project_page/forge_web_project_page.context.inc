<?php
/**
 * @file
 * forge_web_project_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_project_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_page';
  $context->description = '';
  $context->tag = 'Projects';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'project_slideshow-block',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-project_sidebar-block' => array(
          'module' => 'views',
          'delta' => 'project_sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'node/59',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Projects');
  $export['project_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects';
  $context->description = '';
  $context->tag = 'Projects';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects' => 'projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-on_going_projects-block' => array(
          'module' => 'views',
          'delta' => 'on_going_projects-block',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Projects');
  $export['projects'] = $context;

  return $export;
}
