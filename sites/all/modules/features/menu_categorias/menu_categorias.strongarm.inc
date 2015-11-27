<?php
/**
 * @file
 * menu_categorias.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function menu_categorias_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_category_pattern'] = $strongarm;

  return $export;
}
