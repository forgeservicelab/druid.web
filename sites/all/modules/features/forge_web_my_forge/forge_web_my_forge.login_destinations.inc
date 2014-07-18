<?php
/**
 * @file
 * forge_web_my_forge.login_destinations.inc
 */

/**
 * Implements hook_default_login_destinations().
 */
function forge_web_my_forge_default_login_destinations() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->machine_name = 'service_developer_redirect';
  $rule->triggers = array(
    'login' => 'login',
  );
  $rule->roles = array(
    7 => '7',
  );
  $rule->pages_type = 0;
  $rule->pages = '';
  $rule->destination_type = 0;
  $rule->destination = 'welcome-forge-service-lab';
  $rule->weight = 0;
  $export['service_developer_redirect'] = $rule;

  return $export;
}
