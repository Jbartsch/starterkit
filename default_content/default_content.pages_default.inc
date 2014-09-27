<?php
/**
 * @file
 * default_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function default_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9667986-e3dd-44e2-93ab-a6d9ba6e70d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af683012-e694-43c5-ae6b-b62c5d7fe74f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'md_slider-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af683012-e694-43c5-ae6b-b62c5d7fe74f';
    $display->content['new-af683012-e694-43c5-ae6b-b62c5d7fe74f'] = $pane;
    $display->panels['middle'][0] = 'new-af683012-e694-43c5-ae6b-b62c5d7fe74f';
    $pane = new stdClass();
    $pane->pid = 'new-edec8d9e-0f56-40d3-8349-cd5c49d71f14';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Ut lobortis magna urna, eu mattis mi luctus non. Nam et ligula vel eros ullamcorper tristique id eget elit. Cras et convallis nulla, quis tristique lectus. Maecenas non molestie lacus, vitae molestie sem. Aliquam libero nibh, commodo at rutrum quis; faucibus vitae sapien. Integer sollicitudin metus.
Ut lobortis magna urna, eu mattis mi luctus non. Nam et ligula vel eros ullamcorper tristique id eget elit. Cras et convallis nulla, quis tristique lectus. Maecenas non molestie lacus, vitae molestie sem. Aliquam libero nibh, commodo at rutrum quis; faucibus vitae sapien. Integer sollicitudin metus.
Ut lobortis magna urna, eu mattis mi luctus non. Nam et ligula vel eros ullamcorper tristique id eget elit. Cras et convallis nulla, quis tristique lectus. Maecenas non molestie lacus, vitae molestie sem. Aliquam libero nibh, commodo at rutrum quis; faucibus vitae sapien. Integer sollicitudin metus.
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'edec8d9e-0f56-40d3-8349-cd5c49d71f14';
    $display->content['new-edec8d9e-0f56-40d3-8349-cd5c49d71f14'] = $pane;
    $display->panels['middle'][1] = 'new-edec8d9e-0f56-40d3-8349-cd5c49d71f14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-edec8d9e-0f56-40d3-8349-cd5c49d71f14';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
