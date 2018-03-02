<?php
/**
 * @file
 * gsb_feature_ee_megamenu.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gsb_feature_ee_megamenu_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ee_admission';
  $mini->category = 'menu';
  $mini->admin_title = 'EE Admission';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'minipanel-one-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'columnone' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '646a9376-41da-4d4a-8abc-d5e24d9c9bd8';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'ee_admission';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9f547760-de5c-49da-92d1-107825ad0840';
  $pane->panel = 'columnone';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-44';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9f547760-de5c-49da-92d1-107825ad0840';
  $display->content['new-9f547760-de5c-49da-92d1-107825ad0840'] = $pane;
  $display->panels['columnone'][0] = 'new-9f547760-de5c-49da-92d1-107825ad0840';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9f547760-de5c-49da-92d1-107825ad0840';
  $mini->display = $display;
  $export['ee_admission'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ee_organizations';
  $mini->category = 'menu';
  $mini->admin_title = 'EE Organizations';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'minipanel-one-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'columnone' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8a18fefd-5f52-41d7-9726-40ef49708b46';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'ee_organizations';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5cd41987-ae81-4835-911e-fa572a5bbb4b';
  $pane->panel = 'columnone';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-42';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5cd41987-ae81-4835-911e-fa572a5bbb4b';
  $display->content['new-5cd41987-ae81-4835-911e-fa572a5bbb4b'] = $pane;
  $display->panels['columnone'][0] = 'new-5cd41987-ae81-4835-911e-fa572a5bbb4b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5cd41987-ae81-4835-911e-fa572a5bbb4b';
  $mini->display = $display;
  $export['ee_organizations'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ee_the_experience';
  $mini->category = 'menu';
  $mini->admin_title = 'EE The Experience';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'minipanel-one-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'columnone' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '99fd5b5a-38f3-4a2d-840a-eb594050b263';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'ee_the_experience';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-11b15f58-c069-430e-b469-3466b3a8234f';
  $pane->panel = 'columnone';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-43';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '11b15f58-c069-430e-b469-3466b3a8234f';
  $display->content['new-11b15f58-c069-430e-b469-3466b3a8234f'] = $pane;
  $display->panels['columnone'][0] = 'new-11b15f58-c069-430e-b469-3466b3a8234f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-11b15f58-c069-430e-b469-3466b3a8234f';
  $mini->display = $display;
  $export['ee_the_experience'] = $mini;

  return $export;
}
