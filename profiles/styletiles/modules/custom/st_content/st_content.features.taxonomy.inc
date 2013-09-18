<?php
/**
 * @file
 * st_content.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function st_content_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Project Tags',
      'machine_name' => 'tags',
      'description' => 'Keywords for the project that will appear on each styletile',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tile_tags' => array(
      'name' => 'Tile Tags',
      'machine_name' => 'tile_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
