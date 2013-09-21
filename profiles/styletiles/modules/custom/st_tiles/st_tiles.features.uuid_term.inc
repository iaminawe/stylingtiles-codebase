<?php
/**
 * @file
 * st_tiles.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function st_tiles_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'test',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '02d69d4c-09b8-4c2b-8511-20e07525d50d',
    'vocabulary_machine_name' => 'tile_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tile-tags/test',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'default content',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '355a41e9-27bb-429e-b277-31c703725a7e',
    'vocabulary_machine_name' => 'tile_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tile-tags/default-content',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sample',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a17ef9a8-6652-4b54-9a4b-001420242de3',
    'vocabulary_machine_name' => 'tile_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tile-tags/sample',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'dummy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c73445c6-ab62-4a7a-8a94-fd1734110863',
    'vocabulary_machine_name' => 'tile_tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tile-tags/dummy',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
