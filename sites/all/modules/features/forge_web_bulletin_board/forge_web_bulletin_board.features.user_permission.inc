<?php
/**
 * @file
 * forge_web_bulletin_board.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function forge_web_bulletin_board_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create bulletin_board_item content'.
  $permissions['create bulletin_board_item content'] = array(
    'name' => 'create bulletin_board_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bulletin_board_item content'.
  $permissions['delete any bulletin_board_item content'] = array(
    'name' => 'delete any bulletin_board_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own bulletin_board_item content'.
  $permissions['delete own bulletin_board_item content'] = array(
    'name' => 'delete own bulletin_board_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bulletin_board_item content'.
  $permissions['edit any bulletin_board_item content'] = array(
    'name' => 'edit any bulletin_board_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bulletin_board_item content'.
  $permissions['edit own bulletin_board_item content'] = array(
    'name' => 'edit own bulletin_board_item content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'Forge member' => 'Forge member',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
