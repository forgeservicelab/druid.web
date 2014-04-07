<?php
/**
 * @file
 * forge_web_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function forge_web_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function forge_web_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function forge_web_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Contains information about the blog and the users who are allowed to write to the blog.'),
      'has_title' => '1',
      'title_label' => t('Blog name'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => t('Bloggers can write blog posts that are published under their blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
