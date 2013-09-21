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
 * Implements hook_fontyourface_features_default_font().
 */
function st_content_fontyourface_features_default_font() {
  return array(
    'Alfa Slab One Regular' => array(
      'name' => 'Alfa Slab One Regular',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=alfa-slab-one:n4#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => '',
      'css_family' => 'alfa-slab-one',
      'css_style' => '',
      'css_weight' => 400,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/0000000000000000000122ad',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n4";}',
    ),
    'Arizonia Regular' => array(
      'name' => 'Arizonia Regular',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=arizonia:n4#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => '',
      'css_family' => 'arizonia',
      'css_style' => '',
      'css_weight' => 400,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/0000000000000000000122ee',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n4";}',
    ),
    'Cabin Condensed regular (latin)' => array(
      'name' => 'Cabin Condensed regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Cabin Condensed&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '',
      'css_family' => 'Cabin Condensed',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Cabin Condensed:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Exo Thin' => array(
      'name' => 'Exo Thin',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=exo:n1#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => NULL,
      'css_family' => 'exo',
      'css_style' => '',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/000000000000000000012435',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n1";}',
    ),
    'Goudy Bookletter 1911 Regular' => array(
      'name' => 'Goudy Bookletter 1911 Regular',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=goudy-bookletter-1911:n4#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => NULL,
      'css_family' => 'goudy-bookletter-1911',
      'css_style' => '',
      'css_weight' => 400,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/000000000000000000012479',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n4";}',
    ),
    'M+ 1m  Thin' => array(
      'name' => 'M+ 1m  Thin',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=m-1m:n1#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => NULL,
      'css_family' => 'm-1m',
      'css_style' => '',
      'css_weight' => 100,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/00000000000000000000d36e',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n1";}',
    ),
    'Maiden Orange Regular' => array(
      'name' => 'Maiden Orange Regular',
      'enabled' => 1,
      'url' => 'http://www.edgefonts.com/?font=maiden-orange:n4#list-of-available-fonts',
      'provider' => 'edge_fonts',
      'css_selector' => '',
      'css_family' => 'maiden-orange',
      'css_style' => '',
      'css_weight' => 400,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => 'Font license',
      'license_url' => 'http://typekit.com/eulas/000000000000000000012233',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:1:{s:7:"variant";s:2:"n4";}',
    ),
  );
}
