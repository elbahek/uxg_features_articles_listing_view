<?php
/**
 * @file
 * uxg_features_articles_listing_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uxg_features_articles_listing_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uxg_features_articles_listing_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_uxg_features_uxg_values().
 */
function uxg_features_articles_listing_view_uxg_features_uxg_values() {
 $uxg["16d0d03a-2a3c-46d9-97d5-d7816e7714fa"] = "blanched hugger encore";
 $uxg["196ab482-a658-454b-bc05-95fc1348de4f"] = "squalid aluminum gee";
 $uxg["43d7a31a-b14f-4d27-85b2-496a43e6b6dd"] = "anaesthetic merchandising curses";
 $uxg["504522f2-02bd-4c03-96a4-f9b9cc2195f7"] = "asterisked appendage gosh";
 $uxg["6652996c-c29b-420b-b59e-05770d9805a0"] = "enameled confinement hooray";
 $uxg["76834270-5208-423f-b3d0-724e037d094b"] = "coordinating reparation ouch";
 $uxg["a4174519-c85f-4481-82aa-938b2aef15d7"] = "secretarial twine snap";
 $uxg["b09b7f79-ee7a-4084-be05-80e40a935043"] = "heeled wisp barley";
 $uxg["d106b34d-0c21-4f04-89a4-322c9095391e"] = "enameled confinement hooray";
 $uxg["f6aa8316-b182-4fc8-9d8f-080968e2bd45"] = "canned frequenter whoa";

 return $uxg;
}
