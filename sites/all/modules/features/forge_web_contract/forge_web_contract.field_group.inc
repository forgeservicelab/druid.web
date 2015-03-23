<?php
/**
 * @file
 * forge_web_contract.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_contract_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administrative_contract|node|partner_fsl_fpa_cra_contract|form';
  $field_group->group_name = 'group_administrative_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_fsl_fpa_cra_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative contract',
    'weight' => '7',
    'children' => array(
      0 => 'field_cra_admin_name',
      1 => 'field_cra_admin_title',
      2 => 'field_cra_admin_mobile',
      3 => 'field_cra_admin_email',
      4 => 'field_cra_admin_other_means',
      5 => 'field_cra_admin_invoicing_addr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative contract',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-administrative-contract field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_administrative_contract|node|partner_fsl_fpa_cra_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_annual_service_fee|node|partner_fsl_fpa_cra_contract|form';
  $field_group->group_name = 'group_annual_service_fee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_fsl_fpa_cra_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Annual service fee',
    'weight' => '9',
    'children' => array(
      0 => 'field_cost_of_cra',
      1 => 'field_total_amount_in_euros',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Annual service fee',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-annual-service-fee field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_annual_service_fee|node|partner_fsl_fpa_cra_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comp_info|node|partner_contract|form';
  $field_group->group_name = 'group_comp_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Company information',
    'weight' => '47',
    'children' => array(
      0 => 'field_partner_contract_org_name',
      1 => 'field_partner_contract_bid',
      2 => 'field_partner_contract_attention',
      3 => 'field_partner_contract_address',
      4 => 'field_partner_offering_desc',
      5 => 'field_partner_contract_postalc',
      6 => 'field_partner_contract_city',
      7 => 'field_partner_contract_country',
      8 => 'field_partner_admin_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Company information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-comp-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_comp_info|node|partner_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cost_payment|node|partner_contract|form';
  $field_group->group_name = 'group_cost_payment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cost, payment',
    'weight' => '48',
    'children' => array(
      0 => 'field_service_fee_in_euros',
      1 => 'field_due_payable_number_of_days',
      2 => 'field_duration_of_contract',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cost, payment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cost-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cost_payment|node|partner_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description_service|node|service_developer_contract|form';
  $field_group->group_name = 'group_description_service';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description of Developed Service',
    'weight' => '5',
    'children' => array(
      0 => 'field_concise_description_of_the',
      1 => 'field_name_of_the_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description of Developed Service',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-description-service field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_description_service|node|service_developer_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insightly|node|service_developer_contract|form';
  $field_group->group_name = 'group_insightly';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Insightly records',
    'weight' => '0',
    'children' => array(
      0 => 'field_insightly_opportunity_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insightly field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_insightly|node|service_developer_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_contract_information|node|service_developer_contract|form';
  $field_group->group_name = 'group_other_contract_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other contract information',
    'weight' => '8',
    'children' => array(
      0 => 'field_contract_termination',
      1 => 'field_digile_service_fee',
      2 => 'field_service_fee_is_due_payable',
      3 => 'field_value_dev_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other contract information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-other-contract-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_other_contract_information|node|service_developer_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parties|node|service_developer_contract|form';
  $field_group->group_name = 'group_parties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parties involved',
    'weight' => '4',
    'children' => array(
      0 => 'field_company_information',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Parties involved',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-parties field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_parties|node|service_developer_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_devs_sub_c_c|node|service_developer_contract|form';
  $field_group->group_name = 'group_service_devs_sub_c_c';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'The Service Developer(s) plans to use the following sub-contractors or consultants',
    'weight' => '7',
    'children' => array(
      0 => 'field_serv_devs_sub_comp_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'The Service Developer(s) plans to use the following sub-contractors or consultants',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-service-devs-sub-c-c field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_service_devs_sub_c_c|node|service_developer_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_contact|node|partner_fsl_fpa_cra_contract|form';
  $field_group->group_name = 'group_technical_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner_fsl_fpa_cra_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical contact',
    'weight' => '8',
    'children' => array(
      0 => 'field_cra_tech_name',
      1 => 'field_cra_tech_title',
      2 => 'field_cra_tech_mobile',
      3 => 'field_cra_tech_email',
      4 => 'field_cra_tech_other_means',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-technical-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_technical_contact|node|partner_fsl_fpa_cra_contract|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_contact|node|service_developer_contract|form';
  $field_group->group_name = 'group_technical_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_developer_contract';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_tech_contact_email',
      1 => 'field_tech_contact_name',
      2 => 'field_tech_contact_title',
      3 => 'field_tech_mobile_sms_capable',
      4 => 'field_tech_other_means_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technical Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-technical-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_technical_contact|node|service_developer_contract|form'] = $field_group;

  return $export;
}
