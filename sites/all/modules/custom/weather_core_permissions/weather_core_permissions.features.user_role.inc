<?php
/**
 * @file
 * weather_core_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function weather_core_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: web_user.
  $roles['web_user'] = array(
    'name' => 'web_user',
    'weight' => 3,
  );

  return $roles;
}
