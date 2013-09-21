<?php
/**
 * @file
 * st_tiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function st_tiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_style_tile';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_style_tile';
  $strongarm->value = '[node:field_st_project_ref]:';
  $export['ant_pattern_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_style_tile';
  $strongarm->value = 0;
  $export['ant_php_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_style_tile';
  $strongarm->value = '0';
  $export['ant_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cpn_css_enabled_style_tile';
  $strongarm->value = 1;
  $export['cpn_css_enabled_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cpn_css_style_tile';
  $strongarm->value = '/* The background color
.body{
background-color:#ececec;
}
*/

/* The style-tile container background color
.node-style-tile{
background-color: #fff;
}
*/
/* The layout components - use to set inner box colors
.group-styletile-top{
}
.group-styletile-left{
}
.group-styletile-right{
}
.group-styletile-bottom{
}
*/';
  $export['cpn_css_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cpn_js_enabled_style_tile';
  $strongarm->value = 0;
  $export['cpn_js_enabled_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cpn_js_style_tile';
  $strongarm->value = '';
  $export['cpn_js_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_style_tile';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_style_tile';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_style_tile';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__style_tile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'cpn' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'flippy_pager' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_custom_sorting_style_tile';
  $strongarm->value = 0;
  $export['flippy_custom_sorting_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_ellipse_style_tile';
  $strongarm->value = '...';
  $export['flippy_ellipse_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_firstlast_style_tile';
  $strongarm->value = 0;
  $export['flippy_firstlast_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_first_label_style_tile';
  $strongarm->value = '« First';
  $export['flippy_first_label_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_head_style_tile';
  $strongarm->value = 0;
  $export['flippy_head_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_last_label_style_tile';
  $strongarm->value = 'Last »';
  $export['flippy_last_label_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_next_label_style_tile';
  $strongarm->value = 'Next ›';
  $export['flippy_next_label_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_order_style_tile';
  $strongarm->value = 'ASC';
  $export['flippy_order_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_prev_label_style_tile';
  $strongarm->value = '‹ Previous';
  $export['flippy_prev_label_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_label_style_tile';
  $strongarm->value = 'Random';
  $export['flippy_random_label_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_random_style_tile';
  $strongarm->value = 0;
  $export['flippy_random_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_show_empty_style_tile';
  $strongarm->value = 1;
  $export['flippy_show_empty_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_sort_style_tile';
  $strongarm->value = 'created';
  $export['flippy_sort_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_style_tile';
  $strongarm->value = 1;
  $export['flippy_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flippy_truncate_style_tile';
  $strongarm->value = '';
  $export['flippy_truncate_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_style_tile';
  $strongarm->value = array();
  $export['menu_options_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_style_tile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_style_tile';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_style_tile';
  $strongarm->value = '1';
  $export['node_preview_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_style_tile';
  $strongarm->value = 0;
  $export['node_submitted_style_tile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_style_tile_pattern';
  $strongarm->value = '[node:field-st-project-ref:title]/[node:title]';
  $export['pathauto_node_style_tile_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tile_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tile_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_style_tile';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_style_tile'] = $strongarm;

  return $export;
}
