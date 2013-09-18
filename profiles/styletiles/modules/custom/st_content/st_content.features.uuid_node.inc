<?php
/**
 * @file
 * st_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function st_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Variation 4',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bb8bfbc4-336d-45c0-8059-c616ac1cc64e',
  'type' => 'style_tile',
  'language' => 'und',
  'created' => 1379487125,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2e4f0ff2-3ead-4bcd-95d5-5400a3781b85',
  'revision_uid' => 1,
  'field_st_header_image' => array(
    'und' => array(
      0 => array(
        'fid' => 56,
        'alt' => '',
        'title' => '',
        'width' => 1020,
        'height' => 170,
        'uid' => 1,
        'filename' => 'header_template.jpg',
        'uri' => 'public://headers/header_template.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 3667,
        'status' => 1,
        'timestamp' => 1379481553,
        'uuid' => '621380e0-604d-4291-b22d-0e1dccdfe681',
      ),
    ),
  ),
  'field__st_logo_image' => array(
    'und' => array(
      0 => array(
        'fid' => 57,
        'alt' => '',
        'title' => '',
        'width' => 299,
        'height' => 153,
        'uid' => 1,
        'filename' => 'logo_template.png',
        'uri' => 'public://logos/logo_template.png',
        'filemime' => 'image/png',
        'filesize' => 8892,
        'status' => 1,
        'timestamp' => 1379481553,
        'uuid' => '17281901-defb-4cd4-acf6-92d4ebc84b43',
      ),
    ),
  ),
  'field__st_headline' => array(
    'und' => array(
      0 => array(
        'value' => 'This is a test headline and should be very interesting',
        'format' => NULL,
        'safe_value' => 'This is a test headline and should be very interesting',
      ),
    ),
  ),
  'field_st_sub_headline' => array(
    'und' => array(
      0 => array(
        'value' => 'This is an equally interesting although slightly less important sub headline',
        'format' => NULL,
        'safe_value' => 'This is an equally interesting although slightly less important sub headline',
      ),
    ),
  ),
  'field_paragraph_1' => array(
    'und' => array(
      0 => array(
        'value' => '<p>You probably haven&#39;t heard of them <a href="#">Neutra ethical, retro chia</a> street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. Meh kitsch swag sriracha letterpress, gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>You probably haven&#39;t heard of them <a href="#">Neutra ethical, retro chia</a> street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. Meh kitsch swag sriracha letterpress, gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p>',
      ),
    ),
  ),
  'field_paragraph_2' => array(
    'und' => array(
      0 => array(
        'value' => '<p>You probably haven&#39;t heard of them Neutra ethical, retro chia street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. <a href="#">Meh kitsch swag sriracha letterpress,</a> gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p><p><a href="#">Read More</a></p><p>tz pork belly swag, selfies pop-up chambray Neutra&nbsp;<span style="line-height: 1.538em;">tz pork belly swag, selfies pop-up chambray Neutra&nbsp;</span><span style="line-height: 1.538em;">ruffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone.&nbsp;</span><a href="#" style="line-height: 1.538em;">Meh kitsch swag sriracha letterpress,</a><span style="line-height: 1.538em;">&nbsp;gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic&nbsp;</span></p>',
        'format' => 'filtered_html',
        'safe_value' => '<p>You probably haven&#39;t heard of them Neutra ethical, retro chia street art cliche mumblecore ethnic post-ironic hella umami. Truffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone. <a href="#">Meh kitsch swag sriracha letterpress,</a> gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic fanny pack yr gentrify ethnic fashion axe sartorial trust fund. Schlitz pork belly swag, selfies pop-up chambray Neutra Marfa roof party irony. Aesthetic Tonx Etsy street art ennui.</p><p><a href="#">Read More</a></p><p>tz pork belly swag, selfies pop-up chambray Neutra&nbsp;<span style="line-height: 1.538em;">tz pork belly swag, selfies pop-up chambray Neutra&nbsp;</span><span style="line-height: 1.538em;">ruffaut blog direct trade Wes Anderson retro, fap Austin chia church-key trust fund Neutra Shoreditch Godard iPhone.&nbsp;</span><a href="#" style="line-height: 1.538em;">Meh kitsch swag sriracha letterpress,</a><span style="line-height: 1.538em;">&nbsp;gluten-free actually Bushwick hella banh mi paleo umami readymade. Cosby sweater tote bag cred chillwave PBR, Neutra occupy keffiyeh chia food truck banh mi ugh Banksy trust fund. Fap gluten-free fixie viral, cray biodiesel shabby chic&nbsp;</span></p>',
      ),
    ),
  ),
  'field_blockquote' => array(
    'und' => array(
      0 => array(
        'value' => 'This is a fascinating quote or piece of text that is important and should stand out This is a fascinating quote or piece of text that is important and should stand out',
        'format' => NULL,
        'safe_value' => 'This is a fascinating quote or piece of text that is important and should stand out This is a fascinating quote or piece of text that is important and should stand out',
      ),
    ),
  ),
  'field_st_patterns' => array(
    'und' => array(
      0 => array(
        'fid' => 60,
        'alt' => '',
        'title' => '',
        'width' => 152,
        'height' => 152,
        'uid' => 1,
        'filename' => 'texture_template.jpg',
        'uri' => 'public://textures/texture_template.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 5857,
        'status' => 1,
        'timestamp' => 1379481885,
        'uuid' => '598f1c28-82a3-4965-b59f-a929d19865fb',
      ),
      1 => array(
        'fid' => 61,
        'alt' => '',
        'title' => '',
        'width' => 152,
        'height' => 152,
        'uid' => 1,
        'filename' => 'texture_template.jpg',
        'uri' => 'public://textures/texture_template_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 5857,
        'status' => 1,
        'timestamp' => 1379481885,
        'uuid' => 'a132426b-9a50-4f76-a480-0ccfd1a40ebb',
      ),
      2 => array(
        'fid' => 62,
        'alt' => '',
        'title' => '',
        'width' => 152,
        'height' => 152,
        'uid' => 1,
        'filename' => 'texture_template.jpg',
        'uri' => 'public://textures/texture_template_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 5857,
        'status' => 1,
        'timestamp' => 1379481885,
        'uuid' => '7e45b6de-1d08-4236-9170-285f37bd1382',
      ),
    ),
  ),
  'field_st_project_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => 16,
      ),
    ),
  ),
  'field_st_colors' => array(
    'und' => array(
      0 => array(
        'jquery_colorpicker' => 'e3e3e3',
      ),
      1 => array(
        'jquery_colorpicker' => '9c9c9c',
      ),
      2 => array(
        'jquery_colorpicker' => 595959,
      ),
      3 => array(
        'jquery_colorpicker' => '2e2e2e',
      ),
    ),
  ),
  'field_additional_markup' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="row"><div class="span3"><div class="page-header"><p class="pull-right">&nbsp;</p></div></div></div><p>&nbsp;</p>',
        'format' => 'full_html',
        'safe_value' => '<div class="row"><div class="span3"><div class="page-header"><p class="pull-right">&nbsp;</p></div></div></div><p>&nbsp;</p>',
      ),
    ),
  ),
  'field_tiletags' => array(
    'und' => array(
      0 => array(
        'tid' => 8,
      ),
      1 => array(
        'tid' => 9,
      ),
      2 => array(
        'tid' => 10,
      ),
    ),
  ),
  'field_tileblock' => array(
    'und' => array(
      0 => array(
        'value' => '<h2 class="block-title">Block Title</h2><h3 class="field-label">This is a block subhead</h3><p class="field-paragraph-1">Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium.</p>',
        'format' => 'full_html',
        'safe_value' => '<h2 class="block-title">Block Title</h2><h3 class="field-label">This is a block subhead</h3><p class="field-paragraph-1">Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium.</p>',
      ),
    ),
  ),
  'field_tilebuttons' => array(
    'und' => array(
      0 => array(
        'value' => '<p><button class="btn btn-primary btn-large">Primary Button</button><input class="form-submit btn btn-large" id="edit-button" name="op" type="submit" value="Large Default" /></p><p><button class="btn" type="button">Default button</button><a class="btn btn-small" href="#">Small Button</a><a class="btn btn-mini" href="#">Mini Button</a></p>',
        'format' => 'full_html',
        'safe_value' => '<p><button class="btn btn-primary btn-large">Primary Button</button><input class="form-submit btn btn-large" id="edit-button" name="op" type="submit" value="Large Default" /></p><p><button class="btn" type="button">Default button</button><a class="btn btn-small" href="#">Small Button</a><a class="btn btn-mini" href="#">Mini Button</a></p>',
      ),
    ),
  ),
  'field_tilemessages' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="messages status"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div><div class="section"><h3>Warning Message</h3><div class="messages warning"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div><div class="section"><h3>Error Message</h3><div class="messages error"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div>',
        'format' => 'full_html',
        'safe_value' => '<div class="messages status"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div><div class="section"><h3>Warning Message</h3><div class="messages warning"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div><div class="section"><h3>Error Message</h3><div class="messages error"><h2 class="element-invisible">Status message</h2>In faucibus feugiat urna sit amet elementum.</div></div>',
      ),
    ),
  ),
  'field_tiletabs' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="tabbable"><ul class="nav nav-tabs tabs primary"><li class="active"><a data-toggle="tab" href="#tabs1-pane1">Tab 1</a></li><li><a data-toggle="tab" href="#tabs1-pane2">Tab 2</a></li><li><a data-toggle="tab" href="#tabs1-pane3">Tab 3</a></li><li><a data-toggle="tab" href="#tabs1-pane4">Tab 4</a></li></ul><div class="tab-content"><div class="tab-pane active" id="tabs1-pane1"><h4 class="field-label">Pane 1 Content</h4><p class="field-paragraph-1">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse euismod congue bibendum. Aliquam erat volutpat. Phasellus eget justo lacus. Vivamus pharetra ullamcorper massa, nec ultricies metus gravida egestas. Duis congue viverra arcu, ac aliquet turpis rutrum a.</p></div><div class="tab-pane" id="tabs1-pane2"><h4>Pane 2 Content</h4><p class="field-paragraph-1">Phasellus eget justo lacus. Vivamus pharetra ullamcorper massa, nec ultricies metus gravida egestas. Duis congue viverra arcu, ac aliquet turpis rutrum a. Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis.</p></div><div class="tab-pane" id="tabs1-pane3"><h4>Pane 3 Content</h4><p class="field-paragraph-1">Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis. Phasellus vel tellus id felis cursus hendrerit. Suspendisse et arcu felis, ac gravida turpis. Suspendisse potenti. Ut porta rhoncus ligula, sed fringilla felis feugiat eget. In non purus quis elit iaculis tincidunt. Donec at ultrices est.</p></div><div class="tab-pane" id="tabs1-pane4"><h4>Pane 4 Content</h4><p class="field-paragraph-1">Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis. Phasellus vel tellus id felis cursus hendrerit. Suspendisse et arcu felis, ac gravida turpis. Suspendisse potenti. Ut porta rhoncus ligula, sed fringilla felis feugiat eget. In non purus quis elit iaculis tincidunt. Donec at ultrices est.</p></div></div><!-- /.tab-content --></div><!-- /.tabbable -->',
        'format' => 'full_html',
        'safe_value' => '<div class="tabbable"><ul class="nav nav-tabs tabs primary"><li class="active"><a data-toggle="tab" href="#tabs1-pane1">Tab 1</a></li><li><a data-toggle="tab" href="#tabs1-pane2">Tab 2</a></li><li><a data-toggle="tab" href="#tabs1-pane3">Tab 3</a></li><li><a data-toggle="tab" href="#tabs1-pane4">Tab 4</a></li></ul><div class="tab-content"><div class="tab-pane active" id="tabs1-pane1"><h4 class="field-label">Pane 1 Content</h4><p class="field-paragraph-1">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse euismod congue bibendum. Aliquam erat volutpat. Phasellus eget justo lacus. Vivamus pharetra ullamcorper massa, nec ultricies metus gravida egestas. Duis congue viverra arcu, ac aliquet turpis rutrum a.</p></div><div class="tab-pane" id="tabs1-pane2"><h4>Pane 2 Content</h4><p class="field-paragraph-1">Phasellus eget justo lacus. Vivamus pharetra ullamcorper massa, nec ultricies metus gravida egestas. Duis congue viverra arcu, ac aliquet turpis rutrum a. Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis.</p></div><div class="tab-pane" id="tabs1-pane3"><h4>Pane 3 Content</h4><p class="field-paragraph-1">Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis. Phasellus vel tellus id felis cursus hendrerit. Suspendisse et arcu felis, ac gravida turpis. Suspendisse potenti. Ut porta rhoncus ligula, sed fringilla felis feugiat eget. In non purus quis elit iaculis tincidunt. Donec at ultrices est.</p></div><div class="tab-pane" id="tabs1-pane4"><h4>Pane 4 Content</h4><p class="field-paragraph-1">Donec semper vestibulum dapibus. Integer et sollicitudin metus. Vivamus at nisi turpis. Phasellus vel tellus id felis cursus hendrerit. Suspendisse et arcu felis, ac gravida turpis. Suspendisse potenti. Ut porta rhoncus ligula, sed fringilla felis feugiat eget. In non purus quis elit iaculis tincidunt. Donec at ultrices est.</p></div></div><!-- /.tab-content --></div><!-- /.tabbable -->',
      ),
    ),
  ),
  'field_tilepager' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="item-list"><ul class="pager clearfix"><li class="pager-current first"><a>1</a></li><li class="pager-item"><a href="#" title="Go to page 2">2</a></li><li class="pager-item"><a href="#" title="Go to page 3">3</a></li><li class="pager-item"><a href="#" title="Go to page 4">4</a></li><li class="pager-item"><a href="#" title="Go to page 5">5</a></li><li class="pager-item"><a href="#" title="Go to page 6">6</a></li><li class="pager-item"><a href="#" title="Go to page 7">7</a></li><li class="pager-ellipsis">&hellip;</li><li class="pager-next"><a href="#" title="Go to next page">next &rsaquo;</a></li><li class="pager-last last"><a href="#" title="Go to last page">last &raquo;</a></li></ul></div><p>&nbsp;</p>',
        'format' => 'full_html',
        'safe_value' => '<div class="item-list"><ul class="pager clearfix"><li class="pager-current first"><a>1</a></li><li class="pager-item"><a href="#" title="Go to page 2">2</a></li><li class="pager-item"><a href="#" title="Go to page 3">3</a></li><li class="pager-item"><a href="#" title="Go to page 4">4</a></li><li class="pager-item"><a href="#" title="Go to page 5">5</a></li><li class="pager-item"><a href="#" title="Go to page 6">6</a></li><li class="pager-item"><a href="#" title="Go to page 7">7</a></li><li class="pager-ellipsis">&hellip;</li><li class="pager-next"><a href="#" title="Go to next page">next &rsaquo;</a></li><li class="pager-last last"><a href="#" title="Go to last page">last &raquo;</a></li></ul></div><p>&nbsp;</p>',
      ),
    ),
  ),
  'field_tile_background_image' => array(),
  'field_tile_background_color' => array(
    'und' => array(
      0 => array(
        'jquery_colorpicker' => 'f7a71e',
      ),
    ),
  ),
  'field_tile_comp' => array(
    'und' => array(
      0 => array(
        'fid' => 64,
        'alt' => '',
        'title' => '',
        'width' => 959,
        'height' => 1140,
        'uid' => 1,
        'filename' => 'Screen Shot 2013-09-17 at 11.10.49 PM.png',
        'uri' => 'public://thumbs/Screen Shot 2013-09-17 at 11.10.49 PM.png',
        'filemime' => 'image/png',
        'filesize' => 234526,
        'status' => 1,
        'timestamp' => 1379485355,
        'uuid' => '332d8ee6-609d-4a44-b3f4-83ae7e26ea0d',
      ),
    ),
  ),
  'field_tile_primary_font' => array(
    'und' => array(
      0 => array(
        'fid' => 31,
      ),
    ),
  ),
  'field_tile_secondary_font' => array(
    'und' => array(
      0 => array(
        'fid' => 507,
      ),
    ),
  ),
  'field_tile_paragraph_text' => array(
    'und' => array(
      0 => array(
        'fid' => 359,
      ),
    ),
  ),
  'field_tile_variation' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-17 23:52:05 -0700',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sample Project',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '91e1401a-829a-487b-ac00-dd3676a21fae',
  'type' => 'project',
  'language' => 'und',
  'created' => 1379485765,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b54e89e4-77d5-40e6-9132-8600e607eb6c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A sample project with associated style tiles</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>A sample project with associated style tiles</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tag_keywords' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-09-17 23:29:25 -0700',
);
  return $nodes;
}
