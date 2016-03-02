<?php
/**
 * @file
 * base_modules.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_modules_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function base_modules_fontyourface_features_default_font() {
  return array(
    'Montserrat regular (latin)' => array(
      'name' => 'Montserrat regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Montserrat&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'Montserrat',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:18:"Montserrat:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Open Sans 600 (cyrillic-ext)' => array(
      'name' => 'Open Sans 600 (cyrillic-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans&subset=cyrillic-ext#600',
      'provider' => 'google_fonts_api',
      'css_selector' => 'strong, b',
      'css_family' => 'Open Sans',
      'css_style' => 'normal',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Open Sans:600";s:6:"subset";s:12:"cyrillic-ext";}',
    ),
    'Open Sans regular (latin)' => array(
      'name' => 'Open Sans regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'div, body, input, textarea, button, #testimonials h4, .highlighted-text',
      'css_family' => 'Open Sans',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Open Sans:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
