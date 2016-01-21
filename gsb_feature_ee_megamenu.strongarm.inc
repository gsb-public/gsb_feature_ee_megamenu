<?php
/**
 * @file
 * gsb_feature_ee_megamenu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_ee_megamenu_strongarm() {
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
