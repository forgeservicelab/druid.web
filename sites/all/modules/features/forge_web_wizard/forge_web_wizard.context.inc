<?php
/**
 * @file
 * forge_web_wizard.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function forge_web_wizard_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_contracts';
  $context->description = '';
  $context->tag = 'All contracts';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'all-contracts' => 'all-contracts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All contracts');
  $export['all_contracts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join_forge_front';
  $context->description = '';
  $context->tag = 'Join Forge';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'wizard/join-forge-service-lab' => 'wizard/join-forge-service-lab',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join Forge');
  $export['join_forge_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn_more';
  $context->description = '';
  $context->tag = 'Join Forge';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forge_role_information' => 'forge_role_information',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'forge_web_wizard-forge_web_wizard_templates' => array(
          'module' => 'forge_web_wizard',
          'delta' => 'forge_web_wizard_templates',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Join Forge');
  $export['learn_more'] = $context;

  return $export;
}
