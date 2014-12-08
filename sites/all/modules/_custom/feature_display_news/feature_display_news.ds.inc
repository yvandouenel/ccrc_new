<?php
/**
 * @file
 * feature_display_news.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_display_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|actualites|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'actualites';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_image_news',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_image_news' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|actualites|default'] = $ds_layout;

  return $export;
}
