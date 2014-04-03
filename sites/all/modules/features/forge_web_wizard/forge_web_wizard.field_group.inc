<?php
/**
 * @file
 * forge_web_wizard.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_wizard_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contract_pdfs|node|webform|form';
  $field_group->group_name = 'group_contract_pdfs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract PDFs',
    'weight' => '2',
    'children' => array(
      0 => 'field_fsl_fpa_cra',
      1 => 'field_partner_fsl_fpa',
      2 => 'field_sda',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contract-pdfs field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contract_pdfs|node|webform|form'] = $field_group;

  return $export;
}
