<?php
/**
 * @file
 * diychi_events.features.inc
 */

/**
 * Implements hook_node_info().
 */
function diychi_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Shows, workshops, art shows, readings and other events for the DIY CHI website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
