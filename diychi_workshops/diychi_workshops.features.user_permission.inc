<?php
/**
 * @file
 * diychi_workshops.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function diychi_workshops_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer og menu
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'workshop coordinator',
    ),
    'module' => 'og_menu',
  );

  // Exported permission: create workshop content
  $permissions['create workshop content'] = array(
    'name' => 'create workshop content',
    'roles' => array(),
  );

  // Exported permission: create workshop_page content
  $permissions['create workshop_page content'] = array(
    'name' => 'create workshop_page content',
    'roles' => array(),
  );

  // Exported permission: delete any workshop content
  $permissions['delete any workshop content'] = array(
    'name' => 'delete any workshop content',
    'roles' => array(),
  );

  // Exported permission: delete any workshop_page content
  $permissions['delete any workshop_page content'] = array(
    'name' => 'delete any workshop_page content',
    'roles' => array(),
  );

  // Exported permission: delete own workshop content
  $permissions['delete own workshop content'] = array(
    'name' => 'delete own workshop content',
    'roles' => array(),
  );

  // Exported permission: delete own workshop_page content
  $permissions['delete own workshop_page content'] = array(
    'name' => 'delete own workshop_page content',
    'roles' => array(),
  );

  // Exported permission: edit any workshop content
  $permissions['edit any workshop content'] = array(
    'name' => 'edit any workshop content',
    'roles' => array(),
  );

  // Exported permission: edit any workshop_page content
  $permissions['edit any workshop_page content'] = array(
    'name' => 'edit any workshop_page content',
    'roles' => array(),
  );

  // Exported permission: edit own workshop content
  $permissions['edit own workshop content'] = array(
    'name' => 'edit own workshop content',
    'roles' => array(),
  );

  // Exported permission: edit own workshop_page content
  $permissions['edit own workshop_page content'] = array(
    'name' => 'edit own workshop_page content',
    'roles' => array(),
  );

  return $permissions;
}
