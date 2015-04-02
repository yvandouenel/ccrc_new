<?php
/**
 * @file
 * features_companies.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_companies_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|entreprises|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'entreprises';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Plus d\'informations',
        'wrapper' => '',
        'class' => 'company_more',
      ),
    ),
  );
  $export['node|entreprises|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_companies_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|entreprises|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'entreprises';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_horaires_d_ouverture',
        1 => 'field_site_internet',
        2 => 'field_company_tel',
        3 => 'field_email',
        4 => 'field_company_adresse',
      ),
      'right' => array(
        5 => 'field_secteur_activite',
        6 => 'field_cible',
        7 => 'field_companie_logo',
      ),
      'footer' => array(
        8 => 'field_facebook',
        9 => 'field_twitter',
        10 => 'body',
      ),
    ),
    'fields' => array(
      'field_horaires_d_ouverture' => 'left',
      'field_site_internet' => 'left',
      'field_company_tel' => 'left',
      'field_email' => 'left',
      'field_company_adresse' => 'left',
      'field_secteur_activite' => 'right',
      'field_cible' => 'right',
      'field_companie_logo' => 'right',
      'field_facebook' => 'footer',
      'field_twitter' => 'footer',
      'body' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|entreprises|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|entreprises|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'entreprises';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'group_sub_title',
        2 => 'field_secteur_activite',
        3 => 'field_company_adresse',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'group_sub_title' => 'left',
      'field_secteur_activite' => 'left',
      'field_company_adresse' => 'left',
      'node_link' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|entreprises|list'] = $ds_layout;

  return $export;
}
