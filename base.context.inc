<?php
/**
 * @file
 * base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'frontend' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ombuprofile-site_logo' => array(
          'module' => 'ombuprofile',
          'delta' => 'site_logo',
          'region' => 'header',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header',
          'weight' => '-9',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-8',
        ),
        'ombuprofile-breadcrumb' => array(
          'module' => 'ombuprofile',
          'delta' => 'breadcrumb',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'ombuprofile-page_title' => array(
          'module' => 'ombuprofile',
          'delta' => 'page_title',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['global'] = $context;

  return $export;
}
