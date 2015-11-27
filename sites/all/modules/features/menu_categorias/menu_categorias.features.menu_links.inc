<?php
/**
 * @file
 * menu_categorias.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_categorias_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_adornos:taxonomy/term/16
  $menu_links['main-menu_adornos:taxonomy/term/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/16',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Adornos',
    'options' => array(
      'attributes' => array(
        'title' => 'Adornos',
      ),
      'identifier' => 'main-menu_adornos:taxonomy/term/16',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categorias:taxonomy/term/14',
  );
  // Exported menu link: main-menu_almohadas:taxonomy/term/15
  $menu_links['main-menu_almohadas:taxonomy/term/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Almohadas',
    'options' => array(
      'attributes' => array(
        'title' => 'Almohadas',
      ),
      'identifier' => 'main-menu_almohadas:taxonomy/term/15',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_categorias:taxonomy/term/14',
  );
  // Exported menu link: main-menu_categorias:taxonomy/term/14
  $menu_links['main-menu_categorias:taxonomy/term/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Categorias',
    'options' => array(
      'attributes' => array(
        'title' => 'Categorias',
      ),
      'identifier' => 'main-menu_categorias:taxonomy/term/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adornos');
  t('Almohadas');
  t('Categorias');

  return $menu_links;
}
