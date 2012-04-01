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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'ombuprofile-page_title' => array(
          'module' => 'ombuprofile',
          'delta' => 'page_title',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer',
          'weight' => '-13',
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
