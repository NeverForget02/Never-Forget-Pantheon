<?php
/**
 * @file
 * menu_categorias.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_categorias_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-categor-as.
  $menus['menu-categor-as'] = array(
    'menu_name' => 'menu-categor-as',
    'title' => 'Categorías',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categorías');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
