<?php
/**
 * @file
 * st_tiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function st_tiles_taxonomy_default_vocabularies() {
  return array(
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
