<?php
/**
 * @file
 * features_companies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_companies_ctools_plugin_api($module = NULL, $api = NULL) {
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
function features_companies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_companies_node_info() {
  $items = array(
    'entreprises' => array(
      'name' => t('Entreprises'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom de l\'entreprise'),
      'help' => '',
    ),
  );
  return $items;
}
