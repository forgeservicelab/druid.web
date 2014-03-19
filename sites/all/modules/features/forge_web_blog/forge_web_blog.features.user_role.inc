<?php
/**
 * @file
 * forge_web_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function forge_web_blog_user_default_roles() {
  $roles = array();

  // Exported role: Blogger.
  $roles['Blogger'] = array(
    'name' => 'Blogger',
    'weight' => 3,
  );

  return $roles;
}
