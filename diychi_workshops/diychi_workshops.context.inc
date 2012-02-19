<?php
/**
 * @file
 * diychi_workshops.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function diychi_workshops_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workshop';
  $context->description = 'Workshop pages and subpages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'workshops/*' => 'workshops/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'og_menu-og_single_menu_block' => array(
          'module' => 'og_menu',
          'delta' => 'og_single_menu_block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Workshop pages and subpages');
  $export['workshop'] = $context;

  return $export;
}
