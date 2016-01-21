<?php
/**
 * @file
 * gsb_feature_ee_megamenu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gsb_feature_ee_megamenu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: section-34446.
  $menus['section-34446'] = array(
    'menu_name' => 'section-34446',
    'title' => 'Executive Education:34446',
    'description' => 'Menu that manages the Executive Education section.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Executive Education:34446');
  t('Menu that manages the Executive Education section.');

  return $menus;
}
