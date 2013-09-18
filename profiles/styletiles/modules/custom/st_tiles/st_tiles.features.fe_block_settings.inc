<?php
/**
 * @file
 * st_tiles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function st_tiles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['flippy-flippy_pager-node_type-r5Zy9-Y_A'] = array(
    'cache' => -1,
    'css' => NULL,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'flippy_pager-node_type-r5Zy9-Y_A',
    'js' => NULL,
    'module' => 'flippy',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stylestrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stylestrap',
        'weight' => 0,
      ),
      'zenstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zenstrap',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
