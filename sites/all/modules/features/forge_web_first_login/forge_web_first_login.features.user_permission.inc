<?php
/**
 * @file
 * forge_web_first_login.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function forge_web_first_login_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create forge_service content'.
  $permissions['create forge_service content'] = array(
    'name' => 'create forge_service content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forge_service content'.
  $permissions['delete any forge_service content'] = array(
    'name' => 'delete any forge_service content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forge_service content'.
  $permissions['delete own forge_service content'] = array(
    'name' => 'delete own forge_service content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any forge_service content'.
  $permissions['edit any forge_service content'] = array(
    'name' => 'edit any forge_service content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forge_service content'.
  $permissions['edit own forge_service content'] = array(
    'name' => 'edit own forge_service content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
