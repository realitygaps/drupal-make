<?php
/**
 * @file
 * radar_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radar_event_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_events';
  $view->human_name = 'Radar event search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'results';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Date & Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'radar_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = 'This is overridden in themes/at_radar/templates/views-view-field--radar-event-search--title-field.tpl.php
';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Locations » Address: Building name (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['id'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['field'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['alter']['text'] = '[field_offline_field_address_name_line], ';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['link_to_entity'] = 0;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['text'] = '[field_offline_field_address_thoroughfare], ';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_name_line][field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_class'] = 'grey';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Node: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'timezone',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Indexed Node: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '[field_date_time] [field_date_time_1][field_category][field_topic]';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Filter criterion: Date & Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';

  /* Display: Events search pane */
  $handler = $view->new_display('panel_pane', 'Events search pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Events search pane';
  $handler->display->display_options['pane_category']['name'] = 'Radar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['radar_event_search'] = $view;

  $view = new view();
  $view->name = 'radar_group_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_groups';
  $view->human_name = 'Radar Group search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'results';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'group clear';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: opening times */
  $handler->display->display_options['fields']['field_opening_times']['id'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_opening_times']['field'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['label'] = '';
  $handler->display->display_options['fields']['field_opening_times']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_class'] = 'right half';
  $handler->display->display_options['fields']['field_opening_times']['element_default_classes'] = FALSE;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['text'] = '[field_offline_field_address_thoroughfare], ';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_wrapper_class'] = 'half';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'info half';
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: Groups search pane */
  $handler = $view->new_display('panel_pane', 'Groups search pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Group search pane';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_offline_field_map_geom',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'nothing',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Locations » Map: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_offline_field_map_geom']['id'] = 'field_offline_field_map_geom';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['field'] = 'field_offline_field_map_geom';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_map_geom']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'map';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_offline_field_address_thoroughfare]
[field_category]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Groups search map */
  $handler = $view->new_display('panel_pane', 'Groups search map', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'radar_groups_all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Map with all groups';
  $export['radar_group_search'] = $view;

  $view = new view();
  $view->name = 'radar_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Radar Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'result';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = ' @ [og_group_ref]';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = ', [field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title][og_group_ref]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_price']['alter']['text'] = ' - [field_price]';
  $handler->display->display_options['fields']['field_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_class'] = 'inline';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Date & Time » Start date */
  $handler->display->display_options['fields']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value']['alter']['text'] = '[field_date_time_value] [field_price]';
  $handler->display->display_options['fields']['field_date_time_value']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['date_format'] = 'long';
  $handler->display->display_options['fields']['field_date_time_value']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['field_date_time_value']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Radar search pane';
  $export['radar_search'] = $view;

  return $export;
}
