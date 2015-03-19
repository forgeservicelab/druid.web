<?php
/**
 * @file
 * forge_web_offering.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function forge_web_offering_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create offering content'.
  $permissions['create offering content'] = array(
    'name' => 'create offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_offering content'.
  $permissions['create service_offering content'] = array(
    'name' => 'create service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_offering_julkict content'.
  $permissions['create service_offering_julkict content'] = array(
    'name' => 'create service_offering_julkict content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offering content'.
  $permissions['delete any offering content'] = array(
    'name' => 'delete any offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_offering content'.
  $permissions['delete any service_offering content'] = array(
    'name' => 'delete any service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_offering_julkict content'.
  $permissions['delete any service_offering_julkict content'] = array(
    'name' => 'delete any service_offering_julkict content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offering content'.
  $permissions['delete own offering content'] = array(
    'name' => 'delete own offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_offering content'.
  $permissions['delete own service_offering content'] = array(
    'name' => 'delete own service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_offering_julkict content'.
  $permissions['delete own service_offering_julkict content'] = array(
    'name' => 'delete own service_offering_julkict content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags_offerings'.
  $permissions['delete terms in tags_offerings'] = array(
    'name' => 'delete terms in tags_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any offering content'.
  $permissions['edit any offering content'] = array(
    'name' => 'edit any offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_offering content'.
  $permissions['edit any service_offering content'] = array(
    'name' => 'edit any service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_offering_julkict content'.
  $permissions['edit any service_offering_julkict content'] = array(
    'name' => 'edit any service_offering_julkict content',
    'roles' => array(
      'Content admin' => 'Content admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offering content'.
  $permissions['edit own offering content'] = array(
    'name' => 'edit own offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_offering content'.
  $permissions['edit own service_offering content'] = array(
    'name' => 'edit own service_offering content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
      'Partner' => 'Partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_offering_julkict content'.
  $permissions['edit own service_offering_julkict content'] = array(
    'name' => 'edit own service_offering_julkict content',
    'roles' => array(
      'Content admin' => 'Content admin',
      'JulkICT' => 'JulkICT',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags_offerings'.
  $permissions['edit terms in tags_offerings'] = array(
    'name' => 'edit terms in tags_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any unpublished offering content'.
  $permissions['view any unpublished offering content'] = array(
    'name' => 'view any unpublished offering content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished service_offering content'.
  $permissions['view any unpublished service_offering content'] = array(
    'name' => 'view any unpublished service_offering content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished service_offering_julkict content'.
  $permissions['view any unpublished service_offering_julkict content'] = array(
    'name' => 'view any unpublished service_offering_julkict content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
