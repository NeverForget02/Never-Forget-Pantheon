<?php
/**
 * @file
 * slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slider-Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider-Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_img']['id'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['table'] = 'field_data_field_img';
  $handler->display->display_options['fields']['field_img']['field'] = 'field_img';
  $handler->display->display_options['fields']['field_img']['label'] = '';
  $handler->display->display_options['fields']['field_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_img']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_img']['delta_offset'] = '0';
  /* Field: Content: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = '';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'producto' => 'producto',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slider_products'] = $view;

  return $export;
}
