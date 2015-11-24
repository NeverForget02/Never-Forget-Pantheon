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

  // Exported menu link: management_categoras:admin/structure/menu/manage/menu-categor-as
  $menu_links['management_categoras:admin/structure/menu/manage/menu-categor-as'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-categor-as',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Categorías',
    'options' => array(
      'identifier' => 'management_categoras:admin/structure/menu/manage/menu-categor-as',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-categor-as_adornos:taxonomy/term/1
  $menu_links['menu-categor-as_adornos:taxonomy/term/1'] = array(
    'menu_name' => 'menu-categor-as',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Adornos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-categor-as_adornos:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-categor-as_agendas:taxonomy/term/2
  $menu_links['menu-categor-as_agendas:taxonomy/term/2'] = array(
    'menu_name' => 'menu-categor-as',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Agendas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-categor-as_agendas:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-categor-as_almohadas:taxonomy/term/3
  $menu_links['menu-categor-as_almohadas:taxonomy/term/3'] = array(
    'menu_name' => 'menu-categor-as',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Almohadas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-categor-as_almohadas:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adornos');
  t('Agendas');
  t('Almohadas');
  t('Categorías');

  return $menu_links;
}
