<?php
/**
 * @file
 * st_tiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function st_tiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_colors|node|style_tile|default';
  $field_group->group_name = 'group_colors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_styletile_right';
  $field_group->data = array(
    'label' => 'Colors',
    'weight' => '14',
    'children' => array(
      0 => 'field_st_colors',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colors',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_colors|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_colors|node|style_tile|form';
  $field_group->group_name = 'group_colors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Colors',
    'weight' => '4',
    'children' => array(
      0 => 'field_st_patterns',
      1 => 'field_st_colors',
      2 => 'field_tile_background_color',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_colors|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fontgroup|node|style_tile|form';
  $field_group->group_name = 'group_fontgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Typefaces',
    'weight' => '5',
    'children' => array(
      0 => 'field_tile_primary_font',
      1 => 'field_tile_secondary_font',
      2 => 'field_tile_paragraph_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fontgroup|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|style_tile|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_st_header_image',
      1 => 'field__st_logo_image',
      2 => 'field_tile_background_image',
      3 => 'field_tile_comp',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_images|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_markup|node|style_tile|form';
  $field_group->group_name = 'group_markup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Markup',
    'weight' => '7',
    'children' => array(
      0 => 'field_additional_markup',
      1 => 'field_tiletags',
      2 => 'field_tileblock',
      3 => 'field_tilebuttons',
      4 => 'field_tilemessages',
      5 => 'field_tiletabs',
      6 => 'field_tilepager',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_markup|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pattern_group|node|style_tile|default';
  $field_group->group_name = 'group_pattern_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_styletile_right';
  $field_group->data = array(
    'label' => 'Patterns',
    'weight' => '13',
    'children' => array(
      0 => 'field_st_patterns',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Patterns',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pattern_group|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stinfo|node|style_tile|form';
  $field_group->group_name = 'group_stinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'group_fontgroup',
      1 => 'group_colors',
      2 => 'group_text',
      3 => 'group_images',
      4 => 'group_markup',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_stinfo|node|style_tile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_bottom|node|style_tile|default';
  $field_group->group_name = 'group_styletile_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom',
    'weight' => '3',
    'children' => array(
      0 => 'field_additional_markup',
      1 => 'field_tilemessages',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bottom',
      'instance_settings' => array(
        'classes' => 'span12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_bottom|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_left|node|style_tile|default';
  $field_group->group_name = 'group_styletile_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '1',
    'children' => array(
      0 => 'field__st_headline',
      1 => 'field_st_sub_headline',
      2 => 'field_paragraph_1',
      3 => 'field_paragraph_2',
      4 => 'field_blockquote',
      5 => 'field_tileblock',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'classes' => 'span6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_left|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_right|node|style_tile|default';
  $field_group->group_name = 'group_styletile_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_tiletags',
      1 => 'field_tilebuttons',
      2 => 'field_tiletabs',
      3 => 'field_tilepager',
      4 => 'group_pattern_group',
      5 => 'group_colors',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'classes' => 'span6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_right|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_styletile_top|node|style_tile|default';
  $field_group->group_name = 'group_styletile_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top',
    'weight' => '0',
    'children' => array(
      0 => 'field_st_header_image',
      1 => 'field__st_logo_image',
      2 => 'flippy_pager',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top',
      'instance_settings' => array(
        'classes' => 'span12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_styletile_top|node|style_tile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|style_tile|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'style_tile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_stinfo';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '6',
    'children' => array(
      0 => 'field__st_headline',
      1 => 'field_st_sub_headline',
      2 => 'field_paragraph_1',
      3 => 'field_paragraph_2',
      4 => 'field_blockquote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_text|node|style_tile|form'] = $field_group;

  return $export;
}
