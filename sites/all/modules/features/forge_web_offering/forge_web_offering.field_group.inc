<?php
/**
 * @file
 * forge_web_offering.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forge_web_offering_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basegroup|node|offering|form';
  $field_group->group_name = 'group_basegroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '1',
    'children' => array(
      0 => 'group_community',
      1 => 'group_info',
      2 => 'group_media',
      3 => 'group_pricing',
      4 => 'group_support',
      5 => 'group_terms_conditions',
      6 => 'group_spesifications',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basegroup|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basegroup|node|service_offering|form';
  $field_group->group_name = 'group_basegroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '1',
    'children' => array(
      0 => 'group_community',
      1 => 'group_media',
      2 => 'group_overview',
      3 => 'group_pricing',
      4 => 'group_terms_conditions',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-basegroup field-group-htabs',
      ),
    ),
  );
  $export['group_basegroup|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_community|node|offering|form';
  $field_group->group_name = 'group_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '9',
    'children' => array(
      0 => 'field_customer_rating',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_community|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_community|node|service_offering|form';
  $field_group->group_name = 'group_community';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Community',
    'weight' => '20',
    'children' => array(
      0 => 'field_customer_rating',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-community field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_community|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|offering|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'field_brief_overview_description',
      1 => 'field_contact_information',
      2 => 'field_experimental',
      3 => 'field_live_demo_url',
      4 => 'field_show_live_url_for_everyone',
      5 => 'field_pricing_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_general|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|offering|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '3',
    'children' => array(
      0 => 'field_detailed_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_info|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|service_offering|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '15',
    'children' => array(
      0 => 'field_brief_overview_description',
      1 => 'field_cancellation_refund_policy',
      2 => 'field_contact_information',
      3 => 'field_detailed_description',
      4 => 'field_geographical_coverage',
      5 => 'field_live_demo_url',
      6 => 'field_more_information',
      7 => 'field_pricing_information',
      8 => 'field_terms_and_conditions',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_info|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|offering|form';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '0',
    'children' => array(
      0 => 'field_brief_overview_description',
      1 => 'field_category',
      2 => 'field_collection',
      3 => 'field_logo',
      4 => 'field_offering_tags',
      5 => 'field_oneliner',
      6 => 'field_organizer',
      7 => 'field_page_title',
      8 => 'field_geographical_coverage_term',
      9 => 'field_geographical_coverage',
      10 => 'metatags',
      11 => 'title',
      12 => 'group_sidebar',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Intro',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_intro|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|service_offering|form';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '0',
    'children' => array(
      0 => 'field_brief_overview_description',
      1 => 'field_category',
      2 => 'field_collection',
      3 => 'field_geographical_coverage',
      4 => 'field_logo',
      5 => 'field_offering_tags',
      6 => 'field_oneliner',
      7 => 'field_page_title',
      8 => 'metatags',
      9 => 'title',
      10 => 'group_sidebar',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Intro',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_intro|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|offering|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_embed_a_video',
      1 => 'field_main_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|service_offering|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '19',
    'children' => array(
      0 => 'field_embed_a_video',
      1 => 'field_main_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offering_contact|node|offering|form';
  $field_group->group_name = 'group_offering_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '15',
    'children' => array(
      0 => 'field_offering_address',
      1 => 'field_offering_website',
      2 => 'field_offering_phone',
      3 => 'field_offering_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-offering-contact field-group-div',
        'description' => 'Whom/how to contact information for anyone interested in this offering',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offering_contact|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offering_contact|node|service_offering|form';
  $field_group->group_name = 'group_offering_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '11',
    'children' => array(
      0 => 'field_offering_address',
      1 => 'field_offering_phone',
      2 => 'field_offering_email',
      3 => 'field_offering_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-offering-contact field-group-div',
        'description' => 'Whom/how to contact information for anyone interested in this offering',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offering_contact|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offering_header|node|offering|default';
  $field_group->group_name = 'group_offering_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offering header',
    'weight' => '0',
    'children' => array(
      0 => 'field_customer_rating',
      1 => 'field_logo',
      2 => 'field_offering_tags',
      3 => 'field_page_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Offering header',
      'instance_settings' => array(
        'classes' => 'offering-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offering_header|node|offering|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offering_header|node|service_offering|default';
  $field_group->group_name = 'group_offering_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offering header',
    'weight' => '0',
    'children' => array(
      0 => 'field_customer_rating',
      1 => 'field_logo',
      2 => 'field_offering_tags',
      3 => 'field_page_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Offering header',
      'instance_settings' => array(
        'classes' => 'offering-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_offering_header|node|service_offering|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oneliner_container|node|offering|teaser';
  $field_group->group_name = 'group_oneliner_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Oneliner container',
    'weight' => '2',
    'children' => array(
      0 => 'field_customer_rating',
      1 => 'field_oneliner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Oneliner container',
      'instance_settings' => array(
        'classes' => 'field',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_oneliner_container|node|offering|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oneliner_container|node|service_offering|teaser';
  $field_group->group_name = 'group_oneliner_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Oneliner container',
    'weight' => '2',
    'children' => array(
      0 => 'field_customer_rating',
      1 => 'field_oneliner',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Oneliner container',
      'instance_settings' => array(
        'classes' => 'field',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_oneliner_container|node|service_offering|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|service_offering|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '16',
    'children' => array(
      0 => 'field_detailed_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overview field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_overview|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pricing|node|offering|form';
  $field_group->group_name = 'group_pricing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Pricing',
    'weight' => '5',
    'children' => array(
      0 => 'field_pricing_description',
      1 => 'field_pricing_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pricing field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_pricing|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pricing|node|service_offering|form';
  $field_group->group_name = 'group_pricing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Pricing',
    'weight' => '17',
    'children' => array(
      0 => 'field_pricing_information',
      1 => 'field_pricing_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pricing field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_pricing|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|offering|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '12',
    'children' => array(
      0 => 'field_experimental',
      1 => 'field_live_demo_url',
      2 => 'field_show_live_url_for_everyone',
      3 => 'group_offering_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_sidebar|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|service_offering|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intro';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '11',
    'children' => array(
      0 => 'field_live_demo_url',
      1 => 'field_organizer',
      2 => 'group_offering_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spesifications|node|offering|form';
  $field_group->group_name = 'group_spesifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Spesifications',
    'weight' => '4',
    'children' => array(
      0 => 'field_spesifications',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spesifications field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_spesifications|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support|node|offering|form';
  $field_group->group_name = 'group_support';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Support',
    'weight' => '6',
    'children' => array(
      0 => 'field_available_support',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-support field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_support|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms_conditions|node|offering|form';
  $field_group->group_name = 'group_terms_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Terms and conditions',
    'weight' => '7',
    'children' => array(
      0 => 'field_cancellation_refund_policy',
      1 => 'field_more_information',
      2 => 'field_terms_conditions_inside',
      3 => 'field_terms_conditions_prod',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-terms-conditions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_terms_conditions|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms_conditions|node|service_offering|form';
  $field_group->group_name = 'group_terms_conditions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Terms and conditions',
    'weight' => '18',
    'children' => array(
      0 => 'field_cancellation_refund_policy',
      1 => 'field_more_information',
      2 => 'field_terms_conditions_inside',
      3 => 'field_terms_conditions_prod',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-terms-conditions field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_terms_conditions|node|service_offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|offering|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offering';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '46',
    'children' => array(
      0 => 'field_embed_a_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_video|node|offering|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|service_offering|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offering';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basegroup';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '17',
    'children' => array(
      0 => 'field_upload_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_video|node|service_offering|form'] = $field_group;

  return $export;
}
