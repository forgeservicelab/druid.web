<?php
/**
 * @file
 * forge_web_environment_indicator.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function forge_web_environment_indicator_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'Production';
  $environment->regexurl = 'forgeservicelab.fi';
  $environment->settings = array(
    'color' => '#000000',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'testing_environment';
  $environment->name = 'Testing environment';
  $environment->regexurl = 'testing.forgeservicelab.fi';
  $environment->settings = array(
    'color' => '#aa3333',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['testing_environment'] = $environment;

  return $export;
}
