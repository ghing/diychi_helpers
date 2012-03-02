<?php

function _bands_resource_index($page, $fields, $parameters, $page_size) {
  module_load_include('inc', 'services', 'services.module');
  $node_select = db_select('node', 't')
    ->addTag('node_access')
    ->condition('t.type', 'artist', '=')
    ->orderBy('title', 'DESC');

  // The default argument for $fields is '*', make the default title
  // more restrictive
  if ($fields == '*') {
    $fields = "nid,title";
  }

  services_resource_build_index_query($node_select, $page, $fields, $parameters, $page_size, 'bands');

  if (!user_access('administer nodes')) {
    $node_select->condition('t.status', 1);
  }

  $results = services_resource_execute_index_query($node_select);

  return services_resource_build_index_list($results, 'bands', 'nid');
}

