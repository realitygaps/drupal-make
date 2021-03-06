<?php
/**
 * @file
 * radar_group.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function radar_group_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Group',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'group' => 'group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '38820a9a-b71f-4cf3-a8bf-5f3a87dac8fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5c8cb8f0-7763-42be-b556-1e1d77f15fae';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => 'group',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'tight',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c8cb8f0-7763-42be-b556-1e1d77f15fae';
    $display->content['new-5c8cb8f0-7763-42be-b556-1e1d77f15fae'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-5c8cb8f0-7763-42be-b556-1e1d77f15fae';
    $pane = new stdClass();
    $pane->pid = 'new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'right tight label',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
    $display->content['new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
    $pane = new stdClass();
    $pane->pid = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_group-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clear',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $display->content['new-6e525b08-bf1b-4192-b6cb-9939a7c827f9'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $pane = new stdClass();
    $pane->pid = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'create-event',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17ab2b05-3539-44d5-b53c-0667a0e8e20f';
    $display->content['new-17ab2b05-3539-44d5-b53c-0667a0e8e20f'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
    $pane = new stdClass();
    $pane->pid = 'new-1798fc28-a444-4373-8a51-b06fb894e14d';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_group_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1798fc28-a444-4373-8a51-b06fb894e14d';
    $display->content['new-1798fc28-a444-4373-8a51-b06fb894e14d'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-1798fc28-a444-4373-8a51-b06fb894e14d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
