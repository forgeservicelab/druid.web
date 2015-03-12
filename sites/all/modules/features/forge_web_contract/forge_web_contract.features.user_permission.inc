<?php
/**
 * @file
 * forge_web_contract.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function forge_web_contract_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'extend membership'.
  $permissions['extend membership'] = array(
    'name' => 'extend membership',
    'roles' => array(
      'Service developer' => 'Service developer',
    ),
    'module' => 'service_contract',
  );

  return $permissions;
}
