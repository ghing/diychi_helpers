<?php
/**
 * @file
 * diychi_workshops.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function diychi_workshops_user_default_roles() {
  $roles = array();

  // Exported role: workshop coordinator
  $roles['workshop coordinator'] = array(
    'name' => 'workshop coordinator',
    'weight' => '3',
  );

  return $roles;
}
