<?php
/**
 * @file
 * diychi_workshops.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function diychi_workshops_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_workshop_pattern';
  $strongarm->value = 'workshops/[node:title]';
  $export['pathauto_node_workshop_pattern'] = $strongarm;

  return $export;
}
