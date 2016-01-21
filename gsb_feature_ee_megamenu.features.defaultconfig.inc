<?php
/**
 * @file
 * gsb_feature_ee_megamenu.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_ee_megamenu_defaultconfig_features() {
  return array(
    'gsb_feature_ee_megamenu' => array(
      'default_panels_mini' => 'default_panels_mini',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_panels_mini().
 */
function gsb_feature_ee_megamenu_defaultconfig_default_panels_mini() {
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

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_ee_megamenu_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_admin_title';
  $strongarm->value = 'Mega Menu 2nd level : EE Organizations';
  $export['menu_block_42_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_depth';
  $strongarm->value = '0';
  $export['menu_block_42_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_42_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_expanded';
  $strongarm->value = 0;
  $export['menu_block_42_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_follow';
  $strongarm->value = 0;
  $export['menu_block_42_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_level';
  $strongarm->value = '1';
  $export['menu_block_42_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_parent';
  $strongarm->value = 'menu-executive-education-mega-me:78721';
  $export['menu_block_42_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_sort';
  $strongarm->value = 0;
  $export['menu_block_42_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_42_title_link';
  $strongarm->value = 0;
  $export['menu_block_42_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_admin_title';
  $strongarm->value = 'Mega Menu 2nd level : EE The Experience';
  $export['menu_block_43_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_depth';
  $strongarm->value = '0';
  $export['menu_block_43_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_43_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_expanded';
  $strongarm->value = 0;
  $export['menu_block_43_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_follow';
  $strongarm->value = 0;
  $export['menu_block_43_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_level';
  $strongarm->value = '1';
  $export['menu_block_43_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_parent';
  $strongarm->value = 'menu-executive-education-mega-me:78731';
  $export['menu_block_43_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_sort';
  $strongarm->value = 0;
  $export['menu_block_43_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_43_title_link';
  $strongarm->value = 0;
  $export['menu_block_43_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_admin_title';
  $strongarm->value = 'Mega Menu 2nd level : EE Admission';
  $export['menu_block_44_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_depth';
  $strongarm->value = '0';
  $export['menu_block_44_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_44_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_expanded';
  $strongarm->value = 0;
  $export['menu_block_44_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_follow';
  $strongarm->value = 0;
  $export['menu_block_44_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_level';
  $strongarm->value = '1';
  $export['menu_block_44_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_parent';
  $strongarm->value = 'menu-executive-education-mega-me:78726';
  $export['menu_block_44_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_sort';
  $strongarm->value = 0;
  $export['menu_block_44_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_44_title_link';
  $strongarm->value = 0;
  $export['menu_block_44_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_menu-executive-education-mega-me_hide_current_page_link';
  $strongarm->value = '';
  $export['menu_block_menu-executive-education-mega-me_hide_current_page_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_executive-education-mega-me_enabled';
  $strongarm->value = FALSE;
  $export['menu_minipanels_executive-education-mega-me_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_minipanels_menu-executive-education-mega-me_enabled';
  $strongarm->value = TRUE;
  $export['menu_minipanels_menu-executive-education-mega-me_enabled'] = $strongarm;

  return $export;
}
