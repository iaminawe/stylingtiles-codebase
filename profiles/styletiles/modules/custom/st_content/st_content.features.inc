<?php
/**
 * @file
 * st_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function st_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function st_content_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Add a design project which you will associate your style tiles to'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
    'style_tile' => array(
      'name' => t('Style Tile'),
      'base' => 'node_content',
      'description' => t('Add a style tile to a project'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
