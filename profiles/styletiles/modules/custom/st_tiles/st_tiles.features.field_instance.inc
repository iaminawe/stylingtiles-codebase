<?php
/**
 * @file
 * st_tiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function st_tiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-style_tile-field__st_headline'
  $field_instances['node-style_tile-field__st_headline'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => 'This is a test headline and should be very interesting',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'h2',
    'field_name' => 'field__st_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-style_tile-field__st_logo_image'
  $field_instances['node-style_tile-field__st_logo_image'] = array(
    'bundle' => 'style_tile',
    'deleted' => 0,
    'description' => 'Upload a logo to be overlaid over the header. This should be a transparent png and its optional to use this field as the logo may be rendered in as part of the header image.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'logo',
        ),
        'type' => 'image',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field__st_logo_image',
    'label' => 'Logo Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'logos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_additional_markup'
  $field_instances['node-style_tile-field_additional_markup'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_additional_markup',
    'label' => 'Additional Markup',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_blockquote'
  $field_instances['node-style_tile-field_blockquote'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => 'This is a fascinating quote or piece of text that is important and should stand out',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'blockquote',
    'field_name' => 'field_blockquote',
    'label' => 'Blockquote',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_paragraph_1'
  $field_instances['node-style_tile-field_paragraph_1'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<p>You probably haven&#39;t heard of them Neutra ethical, retro chia street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. Meh kitsch swag sriracha letterpress, gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_paragraph_1',
    'label' => 'Paragraph 1',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_paragraph_2'
  $field_instances['node-style_tile-field_paragraph_2'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<p>You probably haven&#39;t heard of them Neutra ethical, retro chia street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. Meh kitsch swag sriracha letterpress, gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_paragraph_2',
    'label' => 'Paragraph 2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_st_colors'
  $field_instances['node-style_tile-field_st_colors'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'jquery_colorpicker',
        'settings' => array(),
        'type' => 'jquery_colorpicker_color_display',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_colors',
    'label' => 'Colors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_st_header_image'
  $field_instances['node-style_tile-field_st_header_image'] = array(
    'bundle' => 'style_tile',
    'deleted' => 0,
    'description' => 'Upload an image to be used in the header for this styletile. It will be tiled horizontally but can be up to 1020px wide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'header',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_st_header_image',
    'label' => 'Header Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'headers',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_st_patterns'
  $field_instances['node-style_tile-field_st_patterns'] = array(
    'bundle' => 'style_tile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'texture',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'section',
    'field_name' => 'field_st_patterns',
    'label' => 'Patterns',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 43,
      'file_directory' => 'textures',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_st_project_ref'
  $field_instances['node-style_tile-field_st_project_ref'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_st_project_ref',
    'label' => 'Project',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_st_sub_headline'
  $field_instances['node-style_tile-field_st_sub_headline'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => 'This is an equally interesting although slightly less important sub headline',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'h3',
    'field_name' => 'field_st_sub_headline',
    'label' => 'Sub Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_background_color'
  $field_instances['node-style_tile-field_tile_background_color'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'jquery_colorpicker' => 'dedede',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_background_color',
    'label' => 'Background color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_background_image'
  $field_instances['node-style_tile-field_tile_background_image'] = array(
    'bundle' => 'style_tile',
    'deleted' => 0,
    'description' => 'This can be a 1020px by 1020px square - if it is smaller than that it will be tiled.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_background_image',
    'label' => 'Background image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'backgrounds',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_comp'
  $field_instances['node-style_tile-field_tile_comp'] = array(
    'bundle' => 'style_tile',
    'deleted' => 0,
    'description' => 'This is the thumbnail image and should be screensnapped from the finished style tile',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_comp',
    'label' => 'Thumbnail Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'thumbs',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_paragraph_text'
  $field_instances['node-style_tile-field_tile_paragraph_text'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_paragraph_text',
    'label' => 'Paragraph font',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_primary_font'
  $field_instances['node-style_tile-field_tile_primary_font'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'fid' => 282,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_tile_primary_font',
    'label' => 'Primary font',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_secondary_font'
  $field_instances['node-style_tile-field_tile_secondary_font'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_tile_secondary_font',
    'label' => 'Secondary font',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tile_variation'
  $field_instances['node-style_tile-field_tile_variation'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_variation',
    'label' => 'Variation',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tileblock'
  $field_instances['node-style_tile-field_tileblock'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<h2 class="block-title">Block Title</h2><h3>This is a block subhead</h3><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium.</p>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tileblock',
    'label' => 'Block',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tilebuttons'
  $field_instances['node-style_tile-field_tilebuttons'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<p><input class="form-submit btn btn-large btn-primary" id="edit-submit" name="op" type="submit" value="Large Primary" /> <input class="form-submit btn btn-large" id="edit-button" name="op" type="submit" value="Large Default" /></p><p><button class="btn btn-info" type="button">Default button</button><button class="btn" type="button">Default button</button></p><p><button class="btn btn-small btn-success" type="button">Small button</button></p><a class="btn btn-small" href="#">Small Button</a><a class="btn btn-mini btn-warning" href="#">Mini Button</a>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tilebuttons',
    'label' => 'Buttons',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tilemessages'
  $field_instances['node-style_tile-field_tilemessages'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<div class="section"><h3>Status Message</h3><div class="messages status"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div><div class="section"><h3>Warning Message</h3><div class="messages warning"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div><div class="section"><h3>Error Message</h3><div class="messages error"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tilemessages',
    'label' => 'Messages',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tilepager'
  $field_instances['node-style_tile-field_tilepager'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<div class="item-list"><ul class="pager clearfix"><li class="pager-current first"><a>1</a></li><li class="pager-item"><a href="#" title="Go to page 2">2</a></li><li class="pager-item"><a href="#" title="Go to page 3">3</a></li><li class="pager-item"><a href="#" title="Go to page 4">4</a></li><li class="pager-item"><a href="#" title="Go to page 5">5</a></li><li class="pager-item"><a href="#" title="Go to page 6">6</a></li><li class="pager-item"><a href="#" title="Go to page 7">7</a></li><li class="pager-ellipsis">&hellip;</li><li class="pager-next"><a href="#" title="Go to next page">next &rsaquo;</a></li><li class="pager-last last"><a href="#" title="Go to last page">last &raquo;</a></li></ul></div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tilepager',
    'label' => 'Pager',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tiletabs'
  $field_instances['node-style_tile-field_tiletabs'] = array(
    'bundle' => 'style_tile',
    'default_value' => array(
      0 => array(
        'value' => '<div class="section tabbed-nav"><ul class="tabs primary"><li class="active"><a class="active" href="/redhen/contact/50">Active Tab</a></li><li><a href="#">Tab2</a></li><li><a href="#">Tab3</a></li><li><a href="#">Tab4</a></li></ul><!-- <dl class="tabs primary">
					<dd class="active"><a class="active">Active Tab</a></dd>
					<dd><a href="#">Tab2</a></dd>
					<dd><a href="#">Tab3</a></dd>
					<dd><a href="#">Tab4</a></dd>
				</dl> --></div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tiletabs',
    'label' => 'Tabs',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-style_tile-field_tiletags'
  $field_instances['node-style_tile-field_tiletags'] = array(
    'bundle' => 'style_tile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add keywords to describe the tone of this tile. Eg. Urban, Corporate, Nature, Aggressive, Loud, Subtle',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'section',
    'field_name' => 'field_tiletags',
    'label' => 'Tile Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add keywords to describe the tone of this tile. Eg. Urban, Corporate, Nature, Aggressive, Loud, Subtle');
  t('Additional Markup');
  t('Background color');
  t('Background image');
  t('Block');
  t('Blockquote');
  t('Buttons');
  t('Colors');
  t('Header Image');
  t('Headline');
  t('Logo Image');
  t('Messages');
  t('Pager');
  t('Paragraph 1');
  t('Paragraph 2');
  t('Paragraph font');
  t('Patterns');
  t('Primary font');
  t('Project');
  t('Secondary font');
  t('Sub Headline');
  t('Tabs');
  t('This can be a 1020px by 1020px square - if it is smaller than that it will be tiled.');
  t('This is the thumbnail image and should be screensnapped from the finished style tile');
  t('Thumbnail Image');
  t('Tile Tags');
  t('Upload a logo to be overlaid over the header. This should be a transparent png and its optional to use this field as the logo may be rendered in as part of the header image.');
  t('Upload an image to be used in the header for this styletile. It will be tiled horizontally but can be up to 1020px wide.');
  t('Variation');

  return $field_instances;
}
