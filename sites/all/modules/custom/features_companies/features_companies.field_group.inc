<?php
/**
 * @file
 * features_companies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_companies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_network|node|entreprises|default';
  $field_group->group_name = 'group_social_network';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'entreprises';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_site_internet',
      1 => 'field_facebook',
      2 => 'field_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-social-network field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_social_network|node|entreprises|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_title|node|entreprises|list';
  $field_group->group_name = 'group_sub_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'entreprises';
  $field_group->mode = 'list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-sub-title',
    'weight' => '1',
    'children' => array(
      0 => 'field_company_adresse',
      1 => 'field_company_tel',
      2 => 'field_email',
      3 => 'field_secteur_activite',
      4 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-sub-title',
      'instance_settings' => array(
        'classes' => 'group-sub-title field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sub_title|node|entreprises|list'] = $field_group;

  return $export;
}
