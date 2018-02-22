<?php
/**
 * @file
 * vp_legal_act.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vp_legal_act_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create legal_act content'.
  $permissions['create legal_act content'] = array(
    'name' => 'create legal_act content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any legal_act content'.
  $permissions['delete any legal_act content'] = array(
    'name' => 'delete any legal_act content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own legal_act content'.
  $permissions['delete own legal_act content'] = array(
    'name' => 'delete own legal_act content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in legal_act_group'.
  $permissions['delete terms in legal_act_group'] = array(
    'name' => 'delete terms in legal_act_group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in legal_act_type'.
  $permissions['delete terms in legal_act_type'] = array(
    'name' => 'delete terms in legal_act_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any legal_act content'.
  $permissions['edit any legal_act content'] = array(
    'name' => 'edit any legal_act content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own legal_act content'.
  $permissions['edit own legal_act content'] = array(
    'name' => 'edit own legal_act content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in legal_act_group'.
  $permissions['edit terms in legal_act_group'] = array(
    'name' => 'edit terms in legal_act_group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in legal_act_type'.
  $permissions['edit terms in legal_act_type'] = array(
    'name' => 'edit terms in legal_act_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
