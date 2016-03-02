<?php
/**
 * @file
 * specialone_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function specialone_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function specialone_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function specialone_blog_image_default_styles() {
  $styles = array();

  // Exported image style: latestnews-thumbnail.
  $styles['latestnews-thumbnail'] = array(
    'name' => 'latestnews-thumbnail',
    'label' => 'latestnews-thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
