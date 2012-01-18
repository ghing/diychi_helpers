<?php
/**
 * @file
 * diychi_workshops.features.inc
 */

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
  );
  return $items;
}
