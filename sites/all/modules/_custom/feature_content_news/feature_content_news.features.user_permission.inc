<?php
/**
 * @file
 * feature_content_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_content_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create actualites content'.
  $permissions['create actualites content'] = array(
    'name' => 'create actualites content',
    'roles' => array(
      'contributeur' => 'contributeur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any actualites content'.
  $permissions['delete any actualites content'] = array(
    'name' => 'delete any actualites content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own actualites content'.
  $permissions['delete own actualites content'] = array(
    'name' => 'delete own actualites content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in th_matiques_actualit_s'.
  $permissions['delete terms in th_matiques_actualit_s'] = array(
    'name' => 'delete terms in th_matiques_actualit_s',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any actualites content'.
  $permissions['edit any actualites content'] = array(
    'name' => 'edit any actualites content',
    'roles' => array(
      'contributeur' => 'contributeur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own actualites content'.
  $permissions['edit own actualites content'] = array(
    'name' => 'edit own actualites content',
    'roles' => array(
      'contributeur' => 'contributeur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in th_matiques_actualit_s'.
  $permissions['edit terms in th_matiques_actualit_s'] = array(
    'name' => 'edit terms in th_matiques_actualit_s',
    'roles' => array(
      'Administrateur' => 'Administrateur',
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
