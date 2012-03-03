<?php
/**
 * @file
 * diychi_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function diychi_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'event_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event List';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Upcoming Shows';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no upcoming shows in the database.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_venue_target_id']['id'] = 'field_venue_target_id';
  $handler->display->display_options['relationships']['field_venue_target_id']['table'] = 'field_data_field_venue';
  $handler->display->display_options['relationships']['field_venue_target_id']['field'] = 'field_venue_target_id';
  $handler->display->display_options['relationships']['field_venue_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_venue']['alter']['text'] = 'at [field_venue] ';
  $handler->display->display_options['fields']['field_venue']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_venue']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_venue']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_protected_address']['id'] = 'field_protected_address';
  $handler->display->display_options['fields']['field_protected_address']['table'] = 'field_data_field_protected_address';
  $handler->display->display_options['fields']['field_protected_address']['field'] = 'field_protected_address';
  $handler->display->display_options['fields']['field_protected_address']['relationship'] = 'field_venue_target_id';
  $handler->display->display_options['fields']['field_protected_address']['label'] = '';
  $handler->display->display_options['fields']['field_protected_address']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_protected_address']['alter']['text'] = '[field_protected_address]';
  $handler->display->display_options['fields']['field_protected_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_protected_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_protected_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protected_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_protected_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_protected_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_protected_address']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_protected_address']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_protected_address']['field_api_classes'] = 0;
  /* Field: Content: Bands */
  $handler->display->display_options['fields']['field_bands']['id'] = 'field_bands';
  $handler->display->display_options['fields']['field_bands']['table'] = 'field_data_field_bands';
  $handler->display->display_options['fields']['field_bands']['field'] = 'field_bands';
  $handler->display->display_options['fields']['field_bands']['label'] = '';
  $handler->display->display_options['fields']['field_bands']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bands']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bands']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bands']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bands']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bands']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bands']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_bands']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bands']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bands']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_bands']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_bands']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bands']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_bands']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_bands']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_bands']['field_api_classes'] = 0;
  /* Field: Content: Artists */
  $handler->display->display_options['fields']['field_artists']['id'] = 'field_artists';
  $handler->display->display_options['fields']['field_artists']['table'] = 'field_data_field_artists';
  $handler->display->display_options['fields']['field_artists']['field'] = 'field_artists';
  $handler->display->display_options['fields']['field_artists']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artists']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artists']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artists']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artists']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_artists']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artists']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artists']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artists']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artists']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_artists']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_artists']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artists']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_artists']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_artists']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Content: Date -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Events by month */
  $handler = $view->new_display('page', 'Events by month', 'page');
  $handler->display->display_options['display_description'] = 'Events for a particular year and month';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events for this month';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events for %2';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_date_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_date_value']['title'] = 'Events for %1';
  $handler->display->display_options['arguments']['field_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_date_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_date_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_date_value']['use_fromto'] = 'no';
  /* Contextual filter: Content: Date -  start date (field_date) */
  $handler->display->display_options['arguments']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['arguments']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['arguments']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['arguments']['field_date_value_1']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_date_value_1']['title'] = 'Events for %2';
  $handler->display->display_options['arguments']['field_date_value_1']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_date_value_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_date_value_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_date_value_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_date_value_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_date_value_1']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_date_value_1']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_date_value_1']['validate_options']['code'] = '// Rewrite the argument from M (or MM) to YYYY-MM if a year argument is present
if (count($handler->view->args) == 2) {
  $handler->argument = $handler->view->args[0] . \'-\' . $argument;
}
if ($argument > 0 && $argument < 13) {
  return TRUE;
}
return FALSE;';
  $handler->display->display_options['arguments']['field_date_value_1']['use_fromto'] = 'no';
  $handler->display->display_options['path'] = 'events/%/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event List';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Upcoming Events */
  $handler = $view->new_display('page', 'Upcoming Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = 'today +7 day';
  $handler->display->display_options['path'] = 'upcoming-events';

  /* Display: Events this month */
  $handler = $view->new_display('page', 'Events this month', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'This month\'s events';
  $handler->display->display_options['display_description'] = 'Events for the current month';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events for this month';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events for %2';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event List';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['event_list'] = $view;

  return $export;
}
