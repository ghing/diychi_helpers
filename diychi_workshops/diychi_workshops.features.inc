<?php
/**
 * @file
 * diychi_workshops.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diychi_workshops_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function diychi_workshops_node_info() {
  $items = array(
    'workshop' => array(
      'name' => t('Workshop'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'workshop_page' => array(
      'name' => t('Workshop Page'),
      'base' => 'node_content',
      'description' => t('Like Basic page, but specific to Workshop content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
