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

  // Exported role: Forge member.
  $roles['Forge member'] = array(
    'name' => 'Forge member',
    'weight' => 4,
  );

  // Exported role: JulkICT.
  $roles['JulkICT'] = array(
    'name' => 'JulkICT',
    'weight' => 6,
  );

  // Exported role: Partner.
  $roles['Partner'] = array(
    'name' => 'Partner',
    'weight' => 4,
  );

  // Exported role: developers.
  $roles['developers'] = array(
    'name' => 'developers',
    'weight' => 5,
  );

  return $roles;
}
