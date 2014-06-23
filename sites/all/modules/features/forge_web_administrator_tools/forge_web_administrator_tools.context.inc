<?php
/**
 * @file
 * forge_web_administrator_tools.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_administrator_tools_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'administrator';
  $context->description = 'This context is triggered sitewide when administrator is logged in';
  $context->tag = 'Administartor';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin/*' => '~admin/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'Content admin' => 'Content admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-administrator-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-administrator-tools',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administartor');
  t('This context is triggered sitewide when administrator is logged in');
  $export['administrator'] = $context;

  return $export;
}
