<?php
/**
 * @file
 * specialone_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function specialone_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blog-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'specialone' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'specialone',
        'weight' => 0,
      ),
    ),
    'title' => 'Recent posts',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'specialone' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'specialone',
        'weight' => -27,
      ),
    ),
    'title' => 'Recent comments',
    'visibility' => 0,
  );

  $export['views-specialone_latest_news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'specialone_latest_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'page/tons-blocks',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'specialone' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'specialone',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-specialone_tags_block-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'specialone_tags_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'specialone' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'specialone',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
