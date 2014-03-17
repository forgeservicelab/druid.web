<?php
/**
 * @file
 * forge_web_acl.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function forge_web_acl_user_default_roles() {
  $roles = array();

  // Exported role: Content admin.
  $roles['Content admin'] = array(
    'name' => 'Content admin',
    'weight' => 2,
  );

  return $roles;
}
