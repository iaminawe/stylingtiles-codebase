<?php
/**
 * @file
 * st_projects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function st_projects_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Project Tags',
      'machine_name' => 'tags',
      'description' => 'Keywords for the project that will appear on each styletile',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
