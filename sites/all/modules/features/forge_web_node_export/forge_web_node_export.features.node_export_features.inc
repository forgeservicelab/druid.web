<?php
/**
 * @file
 * forge_web_node_export.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function forge_web_node_export_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'125\',
      \'uid\' => \'0\',
      \'title\' => \'Plaza\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4c085a37-673f-45b8-9b22-6d6ca255b60c\',
      \'nid\' => \'125\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1399296566\',
      \'changed\' => \'1399296566\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11a49841-08aa-4ce3-bc35-077a6ca16a6a\',
      \'revision_timestamp\' => \'1399296566\',
      \'revision_uid\' => \'0\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>FORGE Plaza frontpage</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FORGE Plaza frontpage</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Plaza\',
            \'format\' => NULL,
            \'safe_value\' => \'Plaza\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_page_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'125\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1396590668\',
              \'changed\' => \'1399296566\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399296566\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'335\',
        \'source\' => \'node/125\',
        \'alias\' => \'plaza-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'62\',
      \'uid\' => \'1\',
      \'title\' => \'Learn\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'177ca412-7a65-487e-a188-5b68666eb0b5\',
      \'nid\' => \'62\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1397732955\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4ea9c5de-8612-4872-86f0-909e151ca7e0\',
      \'revision_timestamp\' => \'1397732955\',
      \'revision_uid\' => \'8\',
      \'field_attachments\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'digile_large.png\',
            \'uri\' => \'public://digile_large.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'22492\',
            \'status\' => \'1\',
            \'timestamp\' => \'1397226030\',
            \'uuid\' => \'c8c3ed84-bbb7-4635-bd02-3b0682df4a08\',
            \'rdf_mapping\' => array(),
            \'display\' => \'1\',
            \'description\' => \'\',
          ),
        ),
      ),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<p>Knowing the customer leads to understanding the needs that should be fulfilled, the problems that should be solved and finding the channels that should be used (in delivering and communication the service) by the service. This way the desired customer will more likely use the designed service when its designed with him/her in mind.</p>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Getting to know your customer</li>\\r\\n\\t<li>Needs / Problems</li>\\r\\n\\t<li>What kind of needs does the customer have?</li>\\r\\n\\t<li>What problems should the service solve for the customer?</li>\\r\\n\\t<li>Habits</li>\\r\\n\\t<li>How they live, work, think, act?</li>\\r\\n\\t<li>Resources</li>\\r\\n\\t<li>What skills, knowledge, equipment, capital etc. they have?</li>\\r\\n</ul>\\r\\n\\r\\n<h2><br />\\r\\nWhat has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Customer Profiles</li>\\r\\n\\t<li>Visualized description of the customer based on customer insight</li>\\r\\n\\t<li>Customer Needs</li>\\r\\n\\t<li>Exact needs (including latent needs) of the customer that should be fulfilled by the service</li>\\r\\n</ul>\\r\\n\\r\\n<h2><br />\\r\\nHow to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Customer surveys (quantitative &amp; qualitative)</li>\\r\\n\\t<li>Interviews</li>\\r\\n\\t<li>Observations</li>\\r\\n\\t<li>Participation / Cooperation</li>\\r\\n\\t<li>Get data and in-depth knowledge of the customer. Find latent needs and refine the understanding together with customers in workshops</li>\\r\\n</ul>\\r\\n\\r\\n<h2><br />\\r\\nI want more</h2>\\r\\n\\r\\n<h3>Book references:</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Convivial Toolbox: Generative Research for the Front End of Design; Elizabeth Sanders, Pieter Jan Stappers</li>\\r\\n\\t<li>Käyttäjä tuotekehityksessä: Tieto, tutkimus, menetelmät; Sampsa Hyysalo</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>What is the purpose of this phase?</h2>\\n<p>Knowing the customer leads to understanding the needs that should be fulfilled, the problems that should be solved and finding the channels that should be used (in delivering and communication the service) by the service. This way the desired customer will more likely use the designed service when its designed with him/her in mind.</p>\\n<h2>What happens in this phase?</h2>\\n<ul><li>Getting to know your customer</li>\\n<li>Needs / Problems</li>\\n<li>What kind of needs does the customer have?</li>\\n<li>What problems should the service solve for the customer?</li>\\n<li>Habits</li>\\n<li>How they live, work, think, act?</li>\\n<li>Resources</li>\\n<li>What skills, knowledge, equipment, capital etc. they have?</li>\\n</ul><h2>\\nWhat has to be ready before moving to next phase?</h2>\\n<ul><li>Customer Profiles</li>\\n<li>Visualized description of the customer based on customer insight</li>\\n<li>Customer Needs</li>\\n<li>Exact needs (including latent needs) of the customer that should be fulfilled by the service</li>\\n</ul><h2>\\nHow to do it?</h2>\\n<ul><li>Customer surveys (quantitative &amp; qualitative)</li>\\n<li>Interviews</li>\\n<li>Observations</li>\\n<li>Participation / Cooperation</li>\\n<li>Get data and in-depth knowledge of the customer. Find latent needs and refine the understanding together with customers in workshops</li>\\n</ul><h2>\\nI want more</h2>\\n<h3>Book references:</h3>\\n<ul><li>Convivial Toolbox: Generative Research for the Front End of Design; Elizabeth Sanders, Pieter Jan Stappers</li>\\n<li>Käyttäjä tuotekehityksessä: Tieto, tutkimus, menetelmät; Sampsa Hyysalo</li>\\n</ul><p> </p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.youtube.com\',
            \'title\' => \'Test link to video\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'www.timtools.com\',
            \'title\' => \'Testi linkki\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Learn\',
            \'format\' => NULL,
            \'safe_value\' => \'Learn\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'62\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1397732955\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'262\',
        \'source\' => \'node/62\',
        \'alias\' => \'dashboard/learn\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Learn\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'63\',
      \'uid\' => \'1\',
      \'title\' => \'Explore\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2edc45be-e2f0-4248-94bd-b8c18050ba2b\',
      \'nid\' => \'63\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1398151316\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5121b02d-e90a-407e-902e-7685f210c438\',
      \'revision_timestamp\' => \'1398151316\',
      \'revision_uid\' => \'7\',
      \'field_attachments\' => array(),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<div>\\r\\n<h2><u><em>Concept Collaboration</em></u></h2>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<p>Concept development based on business goals and customer insights.</p>\\r\\n\\r\\n<h3>1. Summarizing the information</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Information from the Business Case and Customer Insight will be visualized for the development/design team</li>\\r\\n\\t<li>This will be summarized as a Service Proposition</li>\\r\\n\\t<li>Business Case and Customer Insight define the goals for the ideation of the service concept</li>\\r\\n</ul>\\r\\n\\r\\n<h3>2. Ideation</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Using the information gathered as a basis of a multidisciplinary ideation workshop</li>\\r\\n\\t<li>Creating ideas that will fulfill the needs of the customer using customer needs and profiles as a tool</li>\\r\\n</ul>\\r\\n\\r\\n<h3>3. Concept development</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Most prominent ideas will be refined as concepts</li>\\r\\n\\t<li>Collections of ideas that could achieve the defined goals</li>\\r\\n\\t<li>These concepts will be tested using prototyping and agile methods</li>\\r\\n\\t<li>Most prominent concept will be chosen for further stages</li>\\r\\n</ul>\\r\\n\\r\\n<h3>4. Detailing the concept</h3>\\r\\n\\r\\n<p>Writing out more detailed and relevant information for the implement phase using the chosen service concept as a basis</p>\\r\\n\\r\\n<h2>What has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Service Concept</li>\\r\\n\\t<li>A clear visual description/presentation of the service</li>\\r\\n\\t<li>User Stories</li>\\r\\n\\t<li>Written descriptions how the customer uses the service in all stages</li>\\r\\n\\t<li>Key examples</li>\\r\\n\\t<li>Examples of existing user interfaces that have desirable functionalities</li>\\r\\n</ul>\\r\\n\\r\\n<h2><br />\\r\\nHow to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Workshops</li>\\r\\n\\t<li>Brainstorming</li>\\r\\n\\t<li>Prototyping</li>\\r\\n\\t<li>Storyboarding</li>\\r\\n\\t<li>Customer journeys</li>\\r\\n\\t<li>Scenarios</li>\\r\\n\\t<li>Mindmaps</li>\\r\\n</ul>\\r\\n\\r\\n<h2>&nbsp;<br />\\r\\nI want more</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Service Design. From Insights to Implementation; Andy Polaine, Lavrans Løvlie and Ben Reason</li>\\r\\n\\t<li>Palvelumuotoilu; Juha Tuulaniemi</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2><u><em>Initial Grooming</em></u></h2>\\r\\n\\r\\n<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<div>\\r\\n<p>The purpose of this phase is to document enough understanding about the product to be produced as product backlog items which serves as an input for the development team.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n</div>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<h3>1. Scrum</h3>\\r\\n\\r\\n<div>Scrum is an agile approach for developing innovative products and services. With an agile approach, you begin by creating a product backlog a prioritized list of the features and other capabilities needed to develop a successful product. Guided by the product backlog, you always work on the most important or highest-priority items first. When you run out of resources (such as time), any work that didn’t get completed will be of lower priority than the completed work.&nbsp;</div>\\r\\n\\r\\n<h3>2. Backlog</h3>\\r\\n\\r\\n<div>In order to develop the right thing then the development team must understand business goals and customer goals. By using key examples when discucssing and communicating the business cases and use cases, the team is able to create an initial backlog.&nbsp;</div>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>What has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Project lifecycle model is agreed</li>\\r\\n\\t<li>Development team exists</li>\\r\\n\\t<li>Product backlog exists and is accessible for the team</li>\\r\\n\\t<li>Product backlog items are ordered and sizes are estimated</li>\\r\\n\\t<li>Product owner accepts the backlog</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>How to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Workshops organized by the service design partner.</li>\\r\\n\\t<li>User story writing workshop organized by the product owner</li>\\r\\n\\t<li>FORGE Redmine project backlog</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>I want more</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Book references:</li>\\r\\n\\t<li>Palvelumuotoilu:&nbsp;Tuulaniemi Juha. (2011). Talentum.</li>\\r\\n\\t<li>Service Design: From Insight to Implementation. Rosenfeld Media: Polaine, Andy; Løvlie, Lavrans; Reason, Ben.</li>\\r\\n\\t<li>Essential Scrum: A Practical Guide to the Most Popular Agile Process:&nbsp;Rubin, Kenneth S. (2012-07-20) (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\r\\n</ul>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<div>\\n<h2><u><em>Concept Collaboration</em></u></h2>\\n<h2>What happens in this phase?</h2>\\n<p>Concept development based on business goals and customer insights.</p>\\n<h3>1. Summarizing the information</h3>\\n<ul><li>Information from the Business Case and Customer Insight will be visualized for the development/design team</li>\\n<li>This will be summarized as a Service Proposition</li>\\n<li>Business Case and Customer Insight define the goals for the ideation of the service concept</li>\\n</ul><h3>2. Ideation</h3>\\n<ul><li>Using the information gathered as a basis of a multidisciplinary ideation workshop</li>\\n<li>Creating ideas that will fulfill the needs of the customer using customer needs and profiles as a tool</li>\\n</ul><h3>3. Concept development</h3>\\n<ul><li>Most prominent ideas will be refined as concepts</li>\\n<li>Collections of ideas that could achieve the defined goals</li>\\n<li>These concepts will be tested using prototyping and agile methods</li>\\n<li>Most prominent concept will be chosen for further stages</li>\\n</ul><h3>4. Detailing the concept</h3>\\n<p>Writing out more detailed and relevant information for the implement phase using the chosen service concept as a basis</p>\\n<h2>What has to be ready before moving to next phase?</h2>\\n<ul><li>Service Concept</li>\\n<li>A clear visual description/presentation of the service</li>\\n<li>User Stories</li>\\n<li>Written descriptions how the customer uses the service in all stages</li>\\n<li>Key examples</li>\\n<li>Examples of existing user interfaces that have desirable functionalities</li>\\n</ul><h2>\\nHow to do it?</h2>\\n<ul><li>Workshops</li>\\n<li>Brainstorming</li>\\n<li>Prototyping</li>\\n<li>Storyboarding</li>\\n<li>Customer journeys</li>\\n<li>Scenarios</li>\\n<li>Mindmaps</li>\\n</ul><h2> <br />\\nI want more</h2>\\n<ul><li>Service Design. From Insights to Implementation; Andy Polaine, Lavrans Løvlie and Ben Reason</li>\\n<li>Palvelumuotoilu; Juha Tuulaniemi</li>\\n</ul><p> </p>\\n<p> </p>\\n<h2><u><em>Initial Grooming</em></u></h2>\\n<h2>What is the purpose of this phase?</h2>\\n<div>\\n<p>The purpose of this phase is to document enough understanding about the product to be produced as product backlog items which serves as an input for the development team.</p>\\n<p> </p>\\n</div>\\n<h2>What happens in this phase?</h2>\\n<h3>1. Scrum</h3>\\n<div>Scrum is an agile approach for developing innovative products and services. With an agile approach, you begin by creating a product backlog a prioritized list of the features and other capabilities needed to develop a successful product. Guided by the product backlog, you always work on the most important or highest-priority items first. When you run out of resources (such as time), any work that didn’t get completed will be of lower priority than the completed work. </div>\\n<h3>2. Backlog</h3>\\n<div>In order to develop the right thing then the development team must understand business goals and customer goals. By using key examples when discucssing and communicating the business cases and use cases, the team is able to create an initial backlog. </div>\\n<p> </p>\\n<h2>What has to be ready before moving to next phase?</h2>\\n<ul><li>Project lifecycle model is agreed</li>\\n<li>Development team exists</li>\\n<li>Product backlog exists and is accessible for the team</li>\\n<li>Product backlog items are ordered and sizes are estimated</li>\\n<li>Product owner accepts the backlog</li>\\n</ul><p> </p>\\n<h2>How to do it?</h2>\\n<ul><li>Workshops organized by the service design partner.</li>\\n<li>User story writing workshop organized by the product owner</li>\\n<li>FORGE Redmine project backlog</li>\\n</ul><p> </p>\\n<h2>I want more</h2>\\n<ul><li>Book references:</li>\\n<li>Palvelumuotoilu: Tuulaniemi Juha. (2011). Talentum.</li>\\n<li>Service Design: From Insight to Implementation. Rosenfeld Media: Polaine, Andy; Løvlie, Lavrans; Reason, Ben.</li>\\n<li>Essential Scrum: A Practical Guide to the Most Popular Agile Process: Rubin, Kenneth S. (2012-07-20) (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\n</ul></div>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Workshops organized by the service design partner. User story writing workshop organized by the product owner\',
            \'format\' => NULL,
            \'safe_value\' => \'Workshops organized by the service design partner. User story writing workshop organized by the product owner\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/\',
            \'title\' => \'Product backlogs and sprint backlogs - FORGE Redmine\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Explore\',
            \'format\' => NULL,
            \'safe_value\' => \'Explore\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'63\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1398151316\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'263\',
        \'source\' => \'node/63\',
        \'alias\' => \'dashboard/explore\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Explore\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'FORGE Service Lab\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'14c9ed42-4ad4-4880-a3fe-c231e10670db\',
      \'nid\' => \'11\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1397207309\',
      \'changed\' => \'1398027916\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5155b18c-e2ed-4b34-8cd9-ddc6ab871368\',
      \'revision_timestamp\' => \'1398027916\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>FORGE Service Lab is a place for creating digital services. It is intended to accelerate the digitalization of services in Finland.</p>\\r\\n\\r\\n<p>FORGE supports the learning journey from designing and developing to implementing experimenting services by enabling co-working and giving support with the help of world-class tools.</p>\\r\\n\\r\\n<p><strong>What would your digital service be like?</strong></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FORGE Service Lab is a place for creating digital services. It is intended to accelerate the digitalization of services in Finland.</p>\\n<p>FORGE supports the learning journey from designing and developing to implementing experimenting services by enabling co-working and giving support with the help of world-class tools.</p>\\n<p><strong>What would your digital service be like?</strong></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => "<p>Palvelupaja FORGE on digitaalisten palveluiden kehitysympäristö. FORGE luo puitteet niin kaupallisten digitaalisten palveluiden suunnitteluun ja luomiseen kuin yhteiskunnallisten palveluiden digitalisoimiseen.</p>\\r\\n\\r\\n<p>FORGE yhdistää oikeat ihmiset, avaa yhteistyömahdollisuudet, kannustaa ja sitouttaa. FORGE tarjoaa ohjausta, tukea ja oikeat työkalut. Palvelupaja FORGE&nbsp;haluaa olla mukana opintomatkalla ja auttaa osallistujia luomaan maailmanluokan digitaalisia palveluita.&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Palvelupaja FORGE on digitaalisten palveluiden kehitysympäristö. FORGE luo puitteet niin kaupallisten digitaalisten palveluiden suunnitteluun ja luomiseen kuin yhteiskunnallisten palveluiden digitalisoimiseen.</p>\\n<p>FORGE yhdistää oikeat ihmiset, avaa yhteistyömahdollisuudet, kannustaa ja sitouttaa. FORGE tarjoaa ohjausta, tukea ja oikeat työkalut. Palvelupaja FORGE haluaa olla mukana opintomatkalla ja auttaa osallistujia luomaan maailmanluokan digitaalisia palveluita. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FORGE Service Lab\',
            \'format\' => NULL,
            \'safe_value\' => \'FORGE Service Lab\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => \'Palvelupaja FORGE\',
            \'format\' => NULL,
            \'safe_value\' => \'Palvelupaja FORGE\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_page_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'11\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397207309\',
              \'changed\' => \'1398027916\',
            ),
            \'fi\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'11\',
              \'language\' => \'fi\',
              \'source\' => \'en\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397222443\',
              \'changed\' => \'1397552123\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397207309\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'217\',
        \'source\' => \'node/11\',
        \'alias\' => \'forge-service-lab\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'FORGE Service Lab Use Instruction\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7a718d6-c5f6-4861-b485-d908bb5d5147\',
      \'nid\' => \'12\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1397207309\',
      \'changed\' => \'1398407080\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'695e050d-da00-4b7c-bc94-893530e515e6\',
      \'revision_timestamp\' => \'1398407080\',
      \'revision_uid\' => \'7\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p dir=\\"ltr\\">FORGE Service Lab is a research environment for developing, coding and piloting digital services.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Information within FORGE Service Lab is not in the public domain. &nbsp;</p>\\r\\n\\r\\n<p dir=\\"ltr\\">If you want your information to be treated as confidential, mark it clearly “Confidential”.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Information marked as “Confidential” may only be used for collaboration within FORGE Service Lab.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Don’t share information marked as “Confidential” or other sensitive information without first asking the permission from the owner.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Don’t share anyone’s personal information without asking the permission.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">It’s the responsibility of the users to ensure safety measures to protect and backup data.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">It is the responsibility of the users to take enough security measures to protect his data and to manage and maintain the security of his virtual machines, their configurations, applications and data in them against the threats coming from Internet.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">DIGILE or FORGE Service Provider may monitor access and usage of the CSC Backend and virtual machines and content for security vulnerabilities, violations of FORGE Service Lab Terms and Conditions (FSLTC), this Use Instruction, or to perform anonymized analysis of workloads.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">DIGILE or FORGE Service Provider has the right to limit the access to any or all of user’s virtual machines or network connections in case of suspected ongoing security violation or a violation of FORGE Service Lab Terms and Conditions (FSLTC) or this Use Instruction.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">FORGE Service Lab alone is not suitable for hosting mission critical applications. User’s virtual machines may be lost or corrupted due to hardware failure, system error, administrator error or user errors.</p>\\r\\n\\r\\n<h2><span style=\\"line-height:1.6\\">FORGE Service listings</span></h2>\\r\\n\\r\\n<ul dir=\\"ltr\\">\\r\\n\\t<li>Forums for discussions and collaboration</li>\\r\\n\\t<li>XMPP for instant messaging. Using XMPP requires your preferred client to be installed</li>\\r\\n\\t<li>Wiki for service development documentation</li>\\r\\n\\t<li>OpenStack for computing resources</li>\\r\\n\\t<li>GitLab for code hosting</li>\\r\\n\\t<li>Redmine for agile project management</li>\\r\\n</ul>\\r\\n\\r\\n<h2 dir=\\"ltr\\">Availability of FORGE Service Lab</h2>\\r\\n\\r\\n<p dir=\\"ltr\\">FORGE Service Lab is aimed at being available 24/7 with the exception of service maintenance breaks but this is however not guaranteed.</p>\\r\\n\\r\\n<h2 dir=\\"ltr\\">Service Maintenance Breaks</h2>\\r\\n\\r\\n<p dir=\\"ltr\\">Details about timing and occurrence about maintenance breaks will be provided by e-mail to Technical Contacts.</p>\\r\\n\\r\\n<h2 dir=\\"ltr\\">Use of the FAP</h2>\\r\\n\\r\\n<p dir=\\"ltr\\">Service level 8h/5 days per week subject to availability, working days only.</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Access methods:</p>\\r\\n\\r\\n<p dir=\\"ltr\\">Via email, <a href=\\"mailto:support@forgeservicelab.fi\\" style=\\"text-decoration:none;\\"><u>support@forgeservicelab.fi</u></a></p>\\r\\n\\r\\n<p dir=\\"ltr\\">Via xmpp, <a href=\\"mailto:forge-support@conference.xmpp.forgeservicelab.fi\\" style=\\"text-decoration:none;\\"><u>forge-support@conference.xmpp.forgeservicelab.fi</u></a></p>\\r\\n\\r\\n<h2><span style=\\"line-height:1.6\\">Guidelines</span></h2>\\r\\n\\r\\n<p dir=\\"ltr\\">There are more practical guidelines available in another document. Please see <a href=\\"https://forgeservicelab.fi/en/instructions\\" style=\\"text-decoration:none;\\"><u>Instructions </u></a>document.</p>\\r\\n\\r\\n<div>&nbsp;</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p dir=\\"ltr\\">FORGE Service Lab is a research environment for developing, coding and piloting digital services.</p>\\n<p dir=\\"ltr\\">Information within FORGE Service Lab is not in the public domain.  </p>\\n<p dir=\\"ltr\\">If you want your information to be treated as confidential, mark it clearly “Confidential”.</p>\\n<p dir=\\"ltr\\">Information marked as “Confidential” may only be used for collaboration within FORGE Service Lab.</p>\\n<p dir=\\"ltr\\">Don’t share information marked as “Confidential” or other sensitive information without first asking the permission from the owner.</p>\\n<p dir=\\"ltr\\">Don’t share anyone’s personal information without asking the permission.</p>\\n<p dir=\\"ltr\\">It’s the responsibility of the users to ensure safety measures to protect and backup data.</p>\\n<p dir=\\"ltr\\">It is the responsibility of the users to take enough security measures to protect his data and to manage and maintain the security of his virtual machines, their configurations, applications and data in them against the threats coming from Internet.</p>\\n<p dir=\\"ltr\\">DIGILE or FORGE Service Provider may monitor access and usage of the CSC Backend and virtual machines and content for security vulnerabilities, violations of FORGE Service Lab Terms and Conditions (FSLTC), this Use Instruction, or to perform anonymized analysis of workloads.</p>\\n<p dir=\\"ltr\\">DIGILE or FORGE Service Provider has the right to limit the access to any or all of user’s virtual machines or network connections in case of suspected ongoing security violation or a violation of FORGE Service Lab Terms and Conditions (FSLTC) or this Use Instruction.</p>\\n<p dir=\\"ltr\\">FORGE Service Lab alone is not suitable for hosting mission critical applications. User’s virtual machines may be lost or corrupted due to hardware failure, system error, administrator error or user errors.</p>\\n<h2><span style=\\"line-height:1.6\\">FORGE Service listings</span></h2>\\n<ul dir=\\"ltr\\"><li>Forums for discussions and collaboration</li>\\n<li>XMPP for instant messaging. Using XMPP requires your preferred client to be installed</li>\\n<li>Wiki for service development documentation</li>\\n<li>OpenStack for computing resources</li>\\n<li>GitLab for code hosting</li>\\n<li>Redmine for agile project management</li>\\n</ul><h2 dir=\\"ltr\\">Availability of FORGE Service Lab</h2>\\n<p dir=\\"ltr\\">FORGE Service Lab is aimed at being available 24/7 with the exception of service maintenance breaks but this is however not guaranteed.</p>\\n<h2 dir=\\"ltr\\">Service Maintenance Breaks</h2>\\n<p dir=\\"ltr\\">Details about timing and occurrence about maintenance breaks will be provided by e-mail to Technical Contacts.</p>\\n<h2 dir=\\"ltr\\">Use of the FAP</h2>\\n<p dir=\\"ltr\\">Service level 8h/5 days per week subject to availability, working days only.</p>\\n<p dir=\\"ltr\\">Access methods:</p>\\n<p dir=\\"ltr\\">Via email, <a href=\\"mailto:support@forgeservicelab.fi\\" style=\\"text-decoration:none;\\"><u>support@forgeservicelab.fi</u></a></p>\\n<p dir=\\"ltr\\">Via xmpp, <a href=\\"mailto:forge-support@conference.xmpp.forgeservicelab.fi\\" style=\\"text-decoration:none;\\"><u>forge-support@conference.xmpp.forgeservicelab.fi</u></a></p>\\n<h2><span style=\\"line-height:1.6\\">Guidelines</span></h2>\\n<p dir=\\"ltr\\">There are more practical guidelines available in another document. Please see <a href=\\"https://forgeservicelab.fi/en/instructions\\" style=\\"text-decoration:none;\\"><u>Instructions </u></a>document.</p>\\n<div> </div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'und\' => array(
          array(
            \'value\' => \'FORGE Service Lab Use Instruction\',
            \'format\' => NULL,
            \'safe_value\' => \'FORGE Service Lab Use Instruction\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_page_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'12\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397207309\',
              \'changed\' => \'1398407080\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397207309\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'218\',
        \'source\' => \'node/12\',
        \'alias\' => \'forge-service-lab-use-instruction\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'66\',
      \'uid\' => \'1\',
      \'title\' => \'Go live\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3be81d0b-7658-417b-bdaf-6a8631de1206\',
      \'nid\' => \'66\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1398165921\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6ef4f02b-97bd-4e6b-8692-5062e16d2eef\',
      \'revision_timestamp\' => \'1398165921\',
      \'revision_uid\' => \'7\',
      \'field_attachments\' => array(),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<p>A deployment pipeline is, in essence, an automated implementation of your application’s build, deploy, test , and release process. Every organization will have differences in the implementation of their deployment pipelines, depending on their value stream for releasing software, but the principles that govern them do not vary. The purpose of this phase is to both prepare for operating the service and to improve the deployment pipeline so that every part of the process of building, deploying, testing, and releasing software is visible to everybody involved, aiding collaboration. It improves feedback so that problems are identified, and so resolved, as early in the process as possible. It also enables teams to deploy and release any version of their software to any environment at will through a fully automated process.</p>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<h3>1. Continuous delivery</h3>\\r\\n\\r\\n<p>Getting digital services released to users is often a painful, risky, and time-consuming process. Continuous Delivery (CD) can help large organizations become as lean, agile and innovative as startups. Through reliable, low-risk releases, Continuous Delivery makes it possible to continuously adapt software in line with user feedback, shifts in the market and changes to business strategy. Test, support, development and operations work together as one delivery team to automate and streamline the build, test and release process.</p>\\r\\n\\r\\n<h3>2. Automation</h3>\\r\\n\\r\\n<p>Continuous Delivery (CD) is a design practice used in software development to automate and improve the process of software delivery. Techniques such as automated testing, continuous integration and continuous deployment allow software to be developed to a high standard and easily packaged and deployed to test environments, resulting in the ability to rapidly, reliably and repeatedly push out enhancements and bug fixes to customers at low risk and with minimal manual overhead.</p>\\r\\n\\r\\n<h3>3. Deployment to production</h3>\\r\\n\\r\\n<p>The service concept could be deployed to a production then when minimum releasable features (MRF) and analytics capability have been implemented. But, before deployment to the production, it is essential to have the operational procedures defined and available as well as automated. In practice any commit on the code repository should trigger the sequence of automated procedures that potentially lead to a deployment to production and the policies for different kind of operation procedures should exist. E.g. backup policy, backups and restoration procedures should have been defined. The team should also develop capability to measure if the service will meet customer value and quality expectations as well as procedures to react upon feedback.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>What has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Product backlog grooming is continuous</li>\\r\\n\\t<li>Operations and operational procedures exists to run, maintain and analyze the service</li>\\r\\n\\t<li>The production environment has been selected</li>\\r\\n\\t<li>Deployment to development, testing and production environments is automated</li>\\r\\n\\t<li>Key Performance Indicators (KPI) have been defined and related analytics need is clear</li>\\r\\n\\t<li>Analytics related user stories are developed and tested</li>\\r\\n\\t<li>Provisioning recipes for the service and analytics are tested in the restricted production environment</li>\\r\\n\\t<li>Production environment is turned to permissive after the golive decision</li>\\r\\n\\t<li>The service description exists on FORGE Plaza</li>\\r\\n</ul>\\r\\n\\r\\n<h2>&nbsp;</h2>\\r\\n\\r\\n<h2>How to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\r\\n\\t<li>Continuous Delivery (Build and test automation, continuous integration and deployment)</li>\\r\\n\\t<li>Product backlogs and sprint backlogs - <a href=\\"https://support.forgeservicelab.fi/\\">FORGE Redmine</a></li>\\r\\n\\t<li>Cloud development environment - <a href=\\"https://cloud.forgeservicelab.fi/\\">FORGE OpenStack</a></li>\\r\\n\\t<li>Version control system - <a href=\\"https://git.forgeservicelab.fi/\\">FORGE Git</a></li>\\r\\n\\t<li>Marketplace for the partners helping to create services – <a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\r\\n\\t<li>Tools for build and test automation plus continuous integration and deployment</li>\\r\\n</ul>\\r\\n\\r\\n<p><br />\\r\\n&nbsp;</p>\\r\\n\\r\\n<h2>I want more</h2>\\r\\n\\r\\n<h3>Book references:</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\r\\n\\t<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education.</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><br />\\r\\n<br />\\r\\n&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>What is the purpose of this phase?</h2>\\n<p>A deployment pipeline is, in essence, an automated implementation of your application’s build, deploy, test , and release process. Every organization will have differences in the implementation of their deployment pipelines, depending on their value stream for releasing software, but the principles that govern them do not vary. The purpose of this phase is to both prepare for operating the service and to improve the deployment pipeline so that every part of the process of building, deploying, testing, and releasing software is visible to everybody involved, aiding collaboration. It improves feedback so that problems are identified, and so resolved, as early in the process as possible. It also enables teams to deploy and release any version of their software to any environment at will through a fully automated process.</p>\\n<h2>What happens in this phase?</h2>\\n<h3>1. Continuous delivery</h3>\\n<p>Getting digital services released to users is often a painful, risky, and time-consuming process. Continuous Delivery (CD) can help large organizations become as lean, agile and innovative as startups. Through reliable, low-risk releases, Continuous Delivery makes it possible to continuously adapt software in line with user feedback, shifts in the market and changes to business strategy. Test, support, development and operations work together as one delivery team to automate and streamline the build, test and release process.</p>\\n<h3>2. Automation</h3>\\n<p>Continuous Delivery (CD) is a design practice used in software development to automate and improve the process of software delivery. Techniques such as automated testing, continuous integration and continuous deployment allow software to be developed to a high standard and easily packaged and deployed to test environments, resulting in the ability to rapidly, reliably and repeatedly push out enhancements and bug fixes to customers at low risk and with minimal manual overhead.</p>\\n<h3>3. Deployment to production</h3>\\n<p>The service concept could be deployed to a production then when minimum releasable features (MRF) and analytics capability have been implemented. But, before deployment to the production, it is essential to have the operational procedures defined and available as well as automated. In practice any commit on the code repository should trigger the sequence of automated procedures that potentially lead to a deployment to production and the policies for different kind of operation procedures should exist. E.g. backup policy, backups and restoration procedures should have been defined. The team should also develop capability to measure if the service will meet customer value and quality expectations as well as procedures to react upon feedback.</p>\\n<p> </p>\\n<h2>What has to be ready before moving to next phase?</h2>\\n<ul><li>Product backlog grooming is continuous</li>\\n<li>Operations and operational procedures exists to run, maintain and analyze the service</li>\\n<li>The production environment has been selected</li>\\n<li>Deployment to development, testing and production environments is automated</li>\\n<li>Key Performance Indicators (KPI) have been defined and related analytics need is clear</li>\\n<li>Analytics related user stories are developed and tested</li>\\n<li>Provisioning recipes for the service and analytics are tested in the restricted production environment</li>\\n<li>Production environment is turned to permissive after the golive decision</li>\\n<li>The service description exists on FORGE Plaza</li>\\n</ul><h2> </h2>\\n<h2>How to do it?</h2>\\n<ul><li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\n<li>Continuous Delivery (Build and test automation, continuous integration and deployment)</li>\\n<li>Product backlogs and sprint backlogs - <a href=\\"https://support.forgeservicelab.fi/\\">FORGE Redmine</a></li>\\n<li>Cloud development environment - <a href=\\"https://cloud.forgeservicelab.fi/\\">FORGE OpenStack</a></li>\\n<li>Version control system - <a href=\\"https://git.forgeservicelab.fi/\\">FORGE Git</a></li>\\n<li>Marketplace for the partners helping to create services – <a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\n<li>Tools for build and test automation plus continuous integration and deployment</li>\\n</ul><p>\\n </p>\\n<h2>I want more</h2>\\n<h3>Book references:</h3>\\n<ul><li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\n<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education.</li>\\n</ul><p> </p>\\n<p> </p>\\n<p> </p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/\',
            \'title\' => \'Product backlogs and sprint backlogs - FORGE Redmine\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://cloud.forgeservicelab.fi/\',
            \'title\' => \'Cloud development environment - FORGE OpenStack\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://git.forgeservicelab.fi/\',
            \'title\' => \'Version control system - FORGE Git\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://forgeservicelab.fi/en/plaza\',
            \'title\' => \'Marketplace for the partners helping to create services – FORGE Plaza\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Go live\',
            \'format\' => NULL,
            \'safe_value\' => \'Go live\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'66\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1398165921\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'265\',
        \'source\' => \'node/66\',
        \'alias\' => \'dashboard/go-live\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Go live\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'135\',
      \'uid\' => \'1\',
      \'title\' => \'Why FORGE?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'117027a0-ca99-4c53-a7dc-3f8dfedb4361\',
      \'nid\' => \'135\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1399368753\',
      \'changed\' => \'1399368842\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'71de82a9-6472-49e6-a5f2-ad1bc4dd543a\',
      \'revision_timestamp\' => \'1399368842\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>Services are already found in all areas of our lives, yet their importance continues to increase – something particularly visible in the transition of users away from owning things towards using services. At the same time we also see that services we encounter on a daily basis are becoming increasingly digital – and it is this evolution that presents us with an exciting opportunity to balance the challenges of adopting a more sustainable lifestyle, ensuring increasing productivity and reducing our reliance on our planet’s limited resources.</p>\\r\\n\\r\\n<p>There is a lot to do in the area of service use and provision, yet our ambitious and wholly realistic goal is to ensure Finland’s successful transition to an Internet economy – a transformation that will ensure that Finland becomes a major player in the development of digital services. We need make systemic and effective use of digital services across the board – in business, throughout the public sector and in every area of our daily lives.</p>\\r\\n\\r\\n<p>FORGE Service Lab seeks to play a key role in making the know-how connected to digital services – as well as the services themselves – world class.</p>\\r\\n\\r\\n<p><em>Let us work together to champion the development of Finland’s digital services and ensure they become truly cutting edge!</em></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Services are already found in all areas of our lives, yet their importance continues to increase – something particularly visible in the transition of users away from owning things towards using services. At the same time we also see that services we encounter on a daily basis are becoming increasingly digital – and it is this evolution that presents us with an exciting opportunity to balance the challenges of adopting a more sustainable lifestyle, ensuring increasing productivity and reducing our reliance on our planet’s limited resources.</p>\\n<p>There is a lot to do in the area of service use and provision, yet our ambitious and wholly realistic goal is to ensure Finland’s successful transition to an Internet economy – a transformation that will ensure that Finland becomes a major player in the development of digital services. We need make systemic and effective use of digital services across the board – in business, throughout the public sector and in every area of our daily lives.</p>\\n<p>FORGE Service Lab seeks to play a key role in making the know-how connected to digital services – as well as the services themselves – world class.</p>\\n<p><em>Let us work together to champion the development of Finland’s digital services and ensure they become truly cutting edge!</em></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => "<p>Palvelut ovat kaikkialla, ja niiden merkitys vain lisääntyy. Olemme siirtymässä kulutustavoiltamme tavaroiden omistamisesta palveluiden käyttämiseen. Samalla palvelut digitalisoituvat kiihtyvällä vauhdilla. Tämä on hyvä uutinen: palveluiden digitalisoituminen avaa ennennäkemättömiä mahdollisuuksia kestävämmän, tuottavamman ja luonnonvaroista vähemmän riippuvaisen elämäntavan rakentamiseksi. Olemme siirtymässä internet-talouteen.</p>\\r\\n\\r\\n<p>Mutta jotta saamme muutoksesta kaiken ilon ja hyödyn irti, digitaaliset palvelut – niin kaupalliset kuin julkisetkin – on tuotava kaikkien ulottuville. Tässä kehityksessä Palvelupaja FORGE on mukana tarjoten osaamista ja apua maailmanluokan palveluiden kehittämiseen.</p>\\r\\n\\r\\n<p><em>FORGE Service Lab haluaa nostaa suomalaiset digitaaliset palvelut maailman huipulle!</em></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Palvelut ovat kaikkialla, ja niiden merkitys vain lisääntyy. Olemme siirtymässä kulutustavoiltamme tavaroiden omistamisesta palveluiden käyttämiseen. Samalla palvelut digitalisoituvat kiihtyvällä vauhdilla. Tämä on hyvä uutinen: palveluiden digitalisoituminen avaa ennennäkemättömiä mahdollisuuksia kestävämmän, tuottavamman ja luonnonvaroista vähemmän riippuvaisen elämäntavan rakentamiseksi. Olemme siirtymässä internet-talouteen.</p>\\n<p>Mutta jotta saamme muutoksesta kaiken ilon ja hyödyn irti, digitaaliset palvelut – niin kaupalliset kuin julkisetkin – on tuotava kaikkien ulottuville. Tässä kehityksessä Palvelupaja FORGE on mukana tarjoten osaamista ja apua maailmanluokan palveluiden kehittämiseen.</p>\\n<p><em>FORGE Service Lab haluaa nostaa suomalaiset digitaaliset palvelut maailman huipulle!</em></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Why FORGE?\',
            \'format\' => NULL,
            \'safe_value\' => \'Why FORGE?\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => \'Miksi FORGE?\',
            \'format\' => NULL,
            \'safe_value\' => \'Miksi FORGE?\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_page_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'129\',
            \'uid\' => \'1\',
            \'filename\' => \'image_puut.jpg\',
            \'uri\' => \'public://image_puut_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'73193\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399368842\',
            \'uuid\' => \'eeb1e84d-84d2-437c-afce-332df007f273\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'420\',
            \'height\' => \'800\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'fi\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'135\',
              \'language\' => \'fi\',
              \'source\' => \'en\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1399274314\',
              \'changed\' => \'1399274314\',
            ),
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'135\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1399368753\',
              \'changed\' => \'1399368842\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399368753\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'345\',
        \'source\' => \'node/135\',
        \'alias\' => \'why-forge\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'136\',
      \'uid\' => \'1\',
      \'title\' => \'What FORGE?\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'88bb06d0-e145-4306-bb1b-78522b4959cd\',
      \'nid\' => \'136\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1399368753\',
      \'changed\' => \'1399368822\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a746c45f-f355-454e-8c27-9152d8a02a9c\',
      \'revision_timestamp\' => \'1399368822\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>FORGE Service Lab is an environment for those who wish to learn more about how to produce digital services with the aim to succeed in global markets. It is a learning journey – a greenhouse in which to develop the idea of a digital service from its initial stages all the way through to a scalable implementation – from concept to beta. FORGE is there to ensure its participants get help, support and guidance they need at every step of the journey, giving them clarity and support as they define their service, learn necessary skills, explore every possibility digitalization brings, build the service, go live with their service and then measure the success.</p>\\r\\n\\r\\n<p>All of this is made possible by ensuring that the participants have everything they need – not only vital service design know-how (including skills such as usability and business model thinking), but also technical development know-how from fields like programming, IT-architecture and cloud computing. FORGE is the place to become more familiar with a whole range of skills, such as learning how to use scrum methodology and how to work with expert services and sub-components e.g. with software development kits (SDKs) and application processing interfaces (APIs). FORGE Plaza – a service catalogue tailored to help our participants connect with the expert help and support they need – increases the ease and speed with which they can realize their goals.</p>\\r\\n\\r\\n<p>When your service is mature enough for big markets and audiences, it needs to be moved to a commercial environment. FORGE Service Lab is a joint-effort of DIGILE, CSC – IT Center for Science and Kainuun Etu Ltd, and the ramp-up of it is supported by the Ministry of Traffic and Communications.</p>\\r\\n\\r\\n<p><em>What would your digital service be like?</em></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>FORGE Service Lab is an environment for those who wish to learn more about how to produce digital services with the aim to succeed in global markets. It is a learning journey – a greenhouse in which to develop the idea of a digital service from its initial stages all the way through to a scalable implementation – from concept to beta. FORGE is there to ensure its participants get help, support and guidance they need at every step of the journey, giving them clarity and support as they define their service, learn necessary skills, explore every possibility digitalization brings, build the service, go live with their service and then measure the success.</p>\\n<p>All of this is made possible by ensuring that the participants have everything they need – not only vital service design know-how (including skills such as usability and business model thinking), but also technical development know-how from fields like programming, IT-architecture and cloud computing. FORGE is the place to become more familiar with a whole range of skills, such as learning how to use scrum methodology and how to work with expert services and sub-components e.g. with software development kits (SDKs) and application processing interfaces (APIs). FORGE Plaza – a service catalogue tailored to help our participants connect with the expert help and support they need – increases the ease and speed with which they can realize their goals.</p>\\n<p>When your service is mature enough for big markets and audiences, it needs to be moved to a commercial environment. FORGE Service Lab is a joint-effort of DIGILE, CSC – IT Center for Science and Kainuun Etu Ltd, and the ramp-up of it is supported by the Ministry of Traffic and Communications.</p>\\n<p><em>What would your digital service be like?</em></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => "<p>Palvelupaja FORGE paikka kaikille, jotka haluavat luoda digitaalisia palveluita – ja oppia lisää. FORGE on kuin kasvihuone, jonne voi tulla kasvattamaan ideaansa, huolehtimaan sen kehittymisestä palveluksi ja lopulta varmistamaan että, palvelu on valmis kaupalliseen ympäristöön. FORGEen voi tulla keskeneräisen konseptin kanssa ja sitä kehitetään yhdessä vaikka skaalautuvaksi beta-versioksi asti.</p>\\r\\n\\r\\n<p>FORGE auttaa palvelun määrittelyssä, tarvittavan osaamisen tunnistamisessa, digitaalisten mahdollisuuksien valinnassa, palvelun rakentamisessa, sen avaamisessa yleisölle ja onnistumisen mittaamisessa.</p>\\r\\n\\r\\n<p>Jotta digitaalisen palvelun tekeminen onnistuisi, tarvitaan mm. palvelumuotoilua, käytettävyyden ja liiketoimintamallien ymmärtämistä, ohjelmointi-, informaatioarkkitehtuuri- ja pilvilaskentaosaamista sekä ”community management” taitoja. FORGEssa oppii mm. käyttäjälähtöistä suunnittelua sekä scrum-menetelmän, sovelluskehityspakettien (SDK) ja ohjelmistorajapintojen (API) hyödyntämistä. FORGE Plaza puolestaan tarjoaa asiantuntijapalveluita ja ohjaa osallistujat oikeiden ihmisten puheille, jotta palvelukehitys olisi mahdollisimman nopeaa ja tuloksellista.</p>\\r\\n\\r\\n<p>Kun palvelu on valmis avattavaksi laajalle yleisölle, FORGE tukee sen siirtämistä kaupalliseen pilvipalveluympäristöön.</p>\\r\\n\\r\\n<p>Palvelupaja FORGE on toteutettu DIGILEn, CSC - Tieteen tietotekniikan keskuksen ja Kainuun Etu Oy:n yhteistyönä. Sen käynnistymisvaihetta tukee liikenne- ja viestintäministeriö.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Palvelupaja FORGE paikka kaikille, jotka haluavat luoda digitaalisia palveluita – ja oppia lisää. FORGE on kuin kasvihuone, jonne voi tulla kasvattamaan ideaansa, huolehtimaan sen kehittymisestä palveluksi ja lopulta varmistamaan että, palvelu on valmis kaupalliseen ympäristöön. FORGEen voi tulla keskeneräisen konseptin kanssa ja sitä kehitetään yhdessä vaikka skaalautuvaksi beta-versioksi asti.</p>\\n<p>FORGE auttaa palvelun määrittelyssä, tarvittavan osaamisen tunnistamisessa, digitaalisten mahdollisuuksien valinnassa, palvelun rakentamisessa, sen avaamisessa yleisölle ja onnistumisen mittaamisessa.</p>\\n<p>Jotta digitaalisen palvelun tekeminen onnistuisi, tarvitaan mm. palvelumuotoilua, käytettävyyden ja liiketoimintamallien ymmärtämistä, ohjelmointi-, informaatioarkkitehtuuri- ja pilvilaskentaosaamista sekä ”community management” taitoja. FORGEssa oppii mm. käyttäjälähtöistä suunnittelua sekä scrum-menetelmän, sovelluskehityspakettien (SDK) ja ohjelmistorajapintojen (API) hyödyntämistä. FORGE Plaza puolestaan tarjoaa asiantuntijapalveluita ja ohjaa osallistujat oikeiden ihmisten puheille, jotta palvelukehitys olisi mahdollisimman nopeaa ja tuloksellista.</p>\\n<p>Kun palvelu on valmis avattavaksi laajalle yleisölle, FORGE tukee sen siirtämistä kaupalliseen pilvipalveluympäristöön.</p>\\n<p>Palvelupaja FORGE on toteutettu DIGILEn, CSC - Tieteen tietotekniikan keskuksen ja Kainuun Etu Oy:n yhteistyönä. Sen käynnistymisvaihetta tukee liikenne- ja viestintäministeriö.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'What FORGE?\',
            \'format\' => NULL,
            \'safe_value\' => \'What FORGE?\',
          ),
        ),
        \'fi\' => array(
          array(
            \'value\' => \'Mikä FORGE?\',
            \'format\' => NULL,
            \'safe_value\' => \'Mikä FORGE?\',
          ),
        ),
      ),
      \'field_page_attachment\' => array(),
      \'field_page_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'128\',
            \'uid\' => \'1\',
            \'filename\' => \'image_kukkakiska.jpg\',
            \'uri\' => \'public://image_kukkakiska.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'46174\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399368822\',
            \'uuid\' => \'666234d5-cd65-48f9-88f1-c40fda0dbc93\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'420\',
            \'height\' => \'800\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'fi\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'136\',
              \'language\' => \'fi\',
              \'source\' => \'en\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1399274404\',
              \'changed\' => \'1399274404\',
            ),
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'136\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1399368753\',
              \'changed\' => \'1399368822\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399368753\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'346\',
        \'source\' => \'node/136\',
        \'alias\' => \'what-forge\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'67\',
      \'uid\' => \'1\',
      \'title\' => \'Define\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8cd08de3-38c9-4f6d-a5ef-b1653d23d86e\',
      \'nid\' => \'67\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1398190501\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ae8dd83e-956f-43a2-aa67-d1c997b78d51\',
      \'revision_timestamp\' => \'1398190501\',
      \'revision_uid\' => \'7\',
      \'field_attachments\' => array(),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>Forge Approach</h2>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><img alt=\\"\\" src=\\"/sites/default/files/Forge%20approach.jpg\\" /></p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ecosystem development</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>PPP (Private-Public-Partnersips)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Think Big &amp; Wide &amp; Global</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Open Source Innovation</li>\\r\\n</ul>\\r\\n\\r\\n<h2>&nbsp;</h2>\\r\\n\\r\\n<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<p>Purpose of the DEFINE phase is to crystallize the direction and goals of the project from the business and societal perspective. In a nutshell after this phase there should be answers to these 4 questions: Why? What? To Whom What kind of Value?&nbsp;&nbsp; &nbsp;</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h3>1. Purpose and Output</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Why this project?</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>What has changed after we have done this?</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>To Whom the service is for? (Working Hyphothesis)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Value for the business and society?</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h3>2. Business and Competition Knowledge</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business field/society knowledge</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Data&amp;vision of the future society direction</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Growth/ Competitive advantage potential</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Wide landscape of the competition</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Position of the service in the competitive landscape</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business case</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Global trends vs. Innovative vision</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Feasibility of: Legislation, Technical, Political</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h3>3. Organizational and Societal Impacts</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Process Changes</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Integrating Silos - Mergers and birth of new teams</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Key Resources and Competences (during and after project work)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Startegic and Operational Changes</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Elastic Enterprise Actions</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Change Management</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h3>4. Goals and Metrics</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Growth vs. Saving Potential (finding seed of growth as well during concepting)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>ROI and Payback time</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Numeric Goals (sales, reneview, profit, cost savings, loyalty, new customer acquisition)</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Other Goals (long term learning, social, societal, innovative forrunner organisation, industry indicators eg. digibarometer, job creation, sustainability)</li>\\r\\n</ul>\\r\\n\\r\\n<h3>&nbsp;</h3>\\r\\n\\r\\n<h2>What has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>\\r\\n\\t<p>Why this project?</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<p>What has changed after we have done this?</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<p>To Whom the service is for? (Working Hyphothesis)</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<p>What kind of value for the business and society?</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<p>Targeted position of the service in the competitive landscape</p>\\r\\n\\t</li>\\r\\n\\t<li>Key resources and competences during the project</li>\\r\\n</ul>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Feasibility of Technologies and Legislation</li>\\r\\n\\t<li>\\r\\n\\t<p>Initial Business Case</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<p>Initial Metrics</p>\\r\\n\\t</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>How to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Landscape studies</li>\\r\\n\\t<li>Interviews</li>\\r\\n\\t<li>Workshops</li>\\r\\n\\t<li>Brainstorming</li>\\r\\n\\t<li>Scenarios</li>\\r\\n\\t<li>Mindmaps</li>\\r\\n\\t<li><a href=\\"http://www.businessmodelgeneration.com/canvas\\">Business Canvas ( Alexander Osterwalder)</a></li>\\r\\n\\t<li><a href=\\"https://www.youtube.com/watch?v=QoAOzMTLP5s\\">Business Model Canvas video</a></li>\\r\\n\\t<li><a href=\\"http://www.businessmodelgeneration.com/toolbox\\">Business Model Canvas Strategyzer</a></li>\\r\\n\\t<li>Pop-up business unit</li>\\r\\n\\t<li>Project Games</li>\\r\\n\\t<li>Marketplace for the partners helping to create services – <a href=\\"http://forgeservicelab.fi/plaza\\">FORGE Plaza</a></li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<h2>I want more</h2>\\r\\n\\r\\n<h3>Book references:</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Business Model Generation: Alexander Osterwalder &amp; Yves Pigneur, Co-created by crowd of 470 participants from 45 countries</li>\\r\\n\\t<li>Elastic Enterprise: Written by:&nbsp; Nicholas Vitalari &amp; Haydn Shaughnessy</li>\\r\\n\\t<li>Palvelumuotoilu: Juha Tuulaniemi</li>\\r\\n\\t<li>Service Design. From Insights to Implementation: Andy Polaine, Lavrans Løvlie and Ben Reason</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>Forge Approach</h2>\\n<p> </p>\\n<p><img alt=\\"\\" src=\\"/sites/default/files/Forge%20approach.jpg\\" /></p>\\n<p> </p>\\n<ul><li>Ecosystem development</li>\\n</ul><ul><li>PPP (Private-Public-Partnersips)</li>\\n</ul><ul><li>Think Big &amp; Wide &amp; Global</li>\\n</ul><ul><li>Open Source Innovation</li>\\n</ul><h2> </h2>\\n<h2>What is the purpose of this phase?</h2>\\n<p>Purpose of the DEFINE phase is to crystallize the direction and goals of the project from the business and societal perspective. In a nutshell after this phase there should be answers to these 4 questions: Why? What? To Whom What kind of Value?    </p>\\n<p> </p>\\n<h2>What happens in this phase?</h2>\\n<p> </p>\\n<h3>1. Purpose and Output</h3>\\n<ul><li>Why this project?</li>\\n</ul><ul><li>What has changed after we have done this?</li>\\n</ul><ul><li>To Whom the service is for? (Working Hyphothesis)</li>\\n</ul><ul><li>Value for the business and society?</li>\\n</ul><p> </p>\\n<h3>2. Business and Competition Knowledge</h3>\\n<ul><li>Business field/society knowledge</li>\\n</ul><ul><li>Data&amp;vision of the future society direction</li>\\n</ul><ul><li>Growth/ Competitive advantage potential</li>\\n</ul><ul><li>Wide landscape of the competition</li>\\n</ul><ul><li>Position of the service in the competitive landscape</li>\\n</ul><ul><li>Business case</li>\\n</ul><ul><li>Global trends vs. Innovative vision</li>\\n</ul><ul><li>Feasibility of: Legislation, Technical, Political</li>\\n</ul><p> </p>\\n<h3>3. Organizational and Societal Impacts</h3>\\n<ul><li>Process Changes</li>\\n</ul><ul><li>Integrating Silos - Mergers and birth of new teams</li>\\n</ul><ul><li>Key Resources and Competences (during and after project work)</li>\\n</ul><ul><li>Startegic and Operational Changes</li>\\n</ul><ul><li>Elastic Enterprise Actions</li>\\n</ul><ul><li>Change Management</li>\\n</ul><p> </p>\\n<h3>4. Goals and Metrics</h3>\\n<ul><li>Growth vs. Saving Potential (finding seed of growth as well during concepting)</li>\\n</ul><ul><li>ROI and Payback time</li>\\n</ul><ul><li>Numeric Goals (sales, reneview, profit, cost savings, loyalty, new customer acquisition)</li>\\n</ul><ul><li>Other Goals (long term learning, social, societal, innovative forrunner organisation, industry indicators eg. digibarometer, job creation, sustainability)</li>\\n</ul><h3> </h3>\\n<h2>What has to be ready before moving to next phase?</h2>\\n<ul><li>\\n<p>Why this project?</p>\\n</li>\\n<li>\\n<p>What has changed after we have done this?</p>\\n</li>\\n<li>\\n<p>To Whom the service is for? (Working Hyphothesis)</p>\\n</li>\\n<li>\\n<p>What kind of value for the business and society?</p>\\n</li>\\n<li>\\n<p>Targeted position of the service in the competitive landscape</p>\\n</li>\\n<li>Key resources and competences during the project</li>\\n</ul><ul><li>Feasibility of Technologies and Legislation</li>\\n<li>\\n<p>Initial Business Case</p>\\n</li>\\n<li>\\n<p>Initial Metrics</p>\\n</li>\\n</ul><p> </p>\\n<h2>How to do it?</h2>\\n<ul><li>Landscape studies</li>\\n<li>Interviews</li>\\n<li>Workshops</li>\\n<li>Brainstorming</li>\\n<li>Scenarios</li>\\n<li>Mindmaps</li>\\n<li><a href=\\"http://www.businessmodelgeneration.com/canvas\\">Business Canvas ( Alexander Osterwalder)</a></li>\\n<li><a href=\\"https://www.youtube.com/watch?v=QoAOzMTLP5s\\">Business Model Canvas video</a></li>\\n<li><a href=\\"http://www.businessmodelgeneration.com/toolbox\\">Business Model Canvas Strategyzer</a></li>\\n<li>Pop-up business unit</li>\\n<li>Project Games</li>\\n<li>Marketplace for the partners helping to create services – <a href=\\"http://forgeservicelab.fi/plaza\\">FORGE Plaza</a></li>\\n</ul><p> </p>\\n<h2>I want more</h2>\\n<h3>Book references:</h3>\\n<ul><li>Business Model Generation: Alexander Osterwalder &amp; Yves Pigneur, Co-created by crowd of 470 participants from 45 countries</li>\\n<li>Elastic Enterprise: Written by:  Nicholas Vitalari &amp; Haydn Shaughnessy</li>\\n<li>Palvelumuotoilu: Juha Tuulaniemi</li>\\n<li>Service Design. From Insights to Implementation: Andy Polaine, Lavrans Løvlie and Ben Reason</li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://www.youtube.com/watch?v=QoAOzMTLP5s\',
            \'title\' => \'Business Canvas Model by Alexander Osterwalder\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Landscape studies Interviews Workshops Brainstorming Scenarios Mindmaps\',
            \'format\' => NULL,
            \'safe_value\' => \'Landscape studies Interviews Workshops Brainstorming Scenarios Mindmaps\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.businessmodelgeneration.com/toolbox\',
            \'title\' => \'Business Model Canvas Strategyzer\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Define\',
            \'format\' => NULL,
            \'safe_value\' => \'Define\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'66\',
            \'uid\' => \'8\',
            \'filename\' => \'Forge approach.jpg\',
            \'uri\' => \'public://Forge approach.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'44438\',
            \'status\' => \'1\',
            \'timestamp\' => \'1397734066\',
            \'uuid\' => \'5a76f963-a45b-4b90-9549-0c7f1e7a2cd9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1280\',
            \'height\' => \'720\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'67\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1398190501\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'266\',
        \'source\' => \'node/67\',
        \'alias\' => \'dashboard/define\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Define\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'68\',
      \'uid\' => \'1\',
      \'title\' => \'Measure\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'727edf28-e6ae-4daa-bd64-7c3aa6ca4136\',
      \'nid\' => \'68\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1398165964\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'caf4df1e-d47e-4e4a-aaac-c51c54088650\',
      \'revision_timestamp\' => \'1398165964\',
      \'revision_uid\' => \'7\',
      \'field_attachments\' => array(),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<div>The team will measure the service usage which will serve as an input to business intelligence. This way the team is able to justify and refine MRF which will enable the service optimization towards even more accurate business goals and customer goals.&nbsp;Since the team has built the Continuous Delivery capability, it’s straightforward to react and release new value for the customers.&nbsp;</div>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<div>\\r\\n<ol>\\r\\n\\t<li>Raw data collection based on the KPIs</li>\\r\\n\\t<li>Analysis of data</li>\\r\\n\\t<li>Prioritization and decisions of focus areas</li>\\r\\n\\t<li>Creation of relevant product backlog items</li>\\r\\n</ol>\\r\\n</div>\\r\\n\\r\\n<h2>What has to be ready before moving on?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Key Performance Indicators (KPI) are re-evaluated continuously</li>\\r\\n\\t<li>Raw analytics data is continuously transformed into meaningful and useful information and to relevant product backlog items</li>\\r\\n\\t<li>Build phase is restarted or continued</li>\\r\\n</ul>\\r\\n\\r\\n<h2>How to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Analytic tools</li>\\r\\n\\t<li>Analysis tools and methods</li>\\r\\n\\t<li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\r\\n\\t<li>Product backlogs and sprint backlogs -&nbsp;<a href=\\"https://support.forgeservicelab.fi\\">FORGE Redmine</a></li>\\r\\n\\t<li>Marketplace for the partners helping to create services –&nbsp;<a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\r\\n</ul>\\r\\n\\r\\n<h2>I want more</h2>\\r\\n\\r\\n<h3>Book references:</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\r\\n\\t<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education.&nbsp;</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>What is the purpose of this phase?</h2>\\n<div>The team will measure the service usage which will serve as an input to business intelligence. This way the team is able to justify and refine MRF which will enable the service optimization towards even more accurate business goals and customer goals. Since the team has built the Continuous Delivery capability, it’s straightforward to react and release new value for the customers. </div>\\n<h2>What happens in this phase?</h2>\\n<div>\\n<ol><li>Raw data collection based on the KPIs</li>\\n<li>Analysis of data</li>\\n<li>Prioritization and decisions of focus areas</li>\\n<li>Creation of relevant product backlog items</li>\\n</ol></div>\\n<h2>What has to be ready before moving on?</h2>\\n<ul><li>Key Performance Indicators (KPI) are re-evaluated continuously</li>\\n<li>Raw analytics data is continuously transformed into meaningful and useful information and to relevant product backlog items</li>\\n<li>Build phase is restarted or continued</li>\\n</ul><h2>How to do it?</h2>\\n<ul><li>Analytic tools</li>\\n<li>Analysis tools and methods</li>\\n<li>Scrum (Groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\n<li>Product backlogs and sprint backlogs - <a href=\\"https://support.forgeservicelab.fi\\">FORGE Redmine</a></li>\\n<li>Marketplace for the partners helping to create services – <a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\n</ul><h2>I want more</h2>\\n<h3>Book references:</h3>\\n<ul><li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\n<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education. </li>\\n</ul>",
          ),
        ),
      ),
      \'field_link_to_video\' => array(),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
            \'format\' => NULL,
            \'safe_value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam accumsan ipsum et justo euismod consectetur. Ut fermentum tortor eros. Sed sit amet interdum purus. Cras pretium quam neque, id consectetur diam euismod eu. Mauris neque arcu, porttitor in eros \',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/\',
            \'title\' => \'Product backlogs and sprint backlogs - FORGE Redmine\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://forgeservicelab.fi/en/plaza\',
            \'title\' => \'Marketplace for the partners helping to create services – FORGE Plaza\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Measure\',
            \'format\' => NULL,
            \'safe_value\' => \'Measure\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'68\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1398165964\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'267\',
        \'source\' => \'node/68\',
        \'alias\' => \'dashboard/measure\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Measure\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'69\',
      \'uid\' => \'1\',
      \'title\' => \'Build\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a0c107b6-ba01-47af-8fb8-87f4409b641b\',
      \'nid\' => \'69\',
      \'type\' => \'tutorial\',
      \'language\' => \'en\',
      \'created\' => \'1397632576\',
      \'changed\' => \'1398171205\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d0f28c58-32e2-4187-8e09-032b7b85b07b\',
      \'revision_timestamp\' => \'1398171205\',
      \'revision_uid\' => \'7\',
      \'field_attachments\' => array(),
      \'field_free_text\' => array(
        \'en\' => array(
          array(
            \'value\' => "<h2>What is the purpose of this phase?</h2>\\r\\n\\r\\n<p>The purpose of this phase is to start and carry on the development activities using agile methods and by automating as many development phases as possible e.g. integration, testing, deployment and releasing. The team can start the development even when the service concept is not fully specified. It is expected that the concept will develop further parallel and in close collaboration with development activities and the product backlog is therefore continuously groomed. The development activities can be adjusted in each sprint according to newly groomed product backlog. It\'s also important that the team will improve its operations and practices in applying agile methods in its selected project life cycle model.</p>\\r\\n\\r\\n<h2>What happens in this phase?</h2>\\r\\n\\r\\n<h3>1. Scrum</h3>\\r\\n\\r\\n<p>Scrum is an agile project lifecycle model for completing complex projects. Scrum was originally formalized for software development, but it is suitable for any complex and innovative scope of work. Scrum is not suitable for running interrupt-drive work like helpdesk function. Neither it is suitable in chaotic or disordered domains where people tend to interpret the situation and act according to their personal preference. Scrum emphasizes teamwork.</p>\\r\\n\\r\\n<h3>2. Sprint</h3>\\r\\n\\r\\n<p>In Scrum, the work itself is performed in short, timeboxed iterations (sprints), which usually range from a week to a calendar month in length. During each iteration, a self-organizing, cross-functional team does all of the work— such as designing, building, and testing—required to produce completed, working features that could potentially be put into production.<br />\\r\\nThe work completed in each sprint should create tangible value to the customer or user. Sprints are timeboxed so they always have a fixed start and end date, and generally they should all be of the same duration. A new sprint immediately follows the completion of the previous sprint.<br />\\r\\nTypically the amount of work in the product backlog is much greater than can be completed by a team in one short-duration iteration. So, at the start of each iteration, the team plans which high-priority subset of the product backlog to create in the upcoming iteration.</p>\\r\\n\\r\\n<h3>3. Planning</h3>\\r\\n\\r\\n<p>A product backlog may represent many weeks or months of work, which is much more than can be completed in a single, short sprint. To determine the most important subset of product backlog items to build in the next sprint, the product owner, development team, and ScrumMaster perform sprint planning. During sprint planning, the product owner and development team agree on a sprint goal that defines what the upcoming sprint is supposed to achieve. Using this goal, the development team reviews the product backlog and determines the high-priority items that the team can realistically accomplish in the upcoming sprint. To acquire confidence in what it can get done, many development teams break down each targeted feature into a set of tasks. The collection of these tasks, along with their associated product backlog items, forms a second backlog called the sprint backlog.<br />\\r\\nThe approach for sprint planning follows following simple cycle. The team selects a most important item from the product backlog and takes it as part of the sprint backlog. Then the team breaks the item down into tasks, and determines if the selected item will reasonably fit within the sprint (in combination with other items targeted for the same sprint). If it does fit and there is more capacity to complete work then the cycle is repeated until the team is out of capacity to do any more work. The team will learn its capacity after few sprints are completed.</p>\\r\\n\\r\\n<h3>4. Daily Scrum</h3>\\r\\n\\r\\n<p>Each day of the sprint, ideally at the same time, the development team members hold a timeboxed (15 minutes or less) daily scrum.&nbsp; A common approach to performing the daily scrum has the ScrumMaster facilitating and each team member taking turns answering three questions for the benefit of the other team members. By answering these questions, everyone understands the big picture of what is occurring, how they are progressing toward the sprint goal, any modifications they want to make to their plans for the upcoming days.</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>What did I accomplish since the last daily scrum?</li>\\r\\n\\t<li>What do I plan to work on by the next daily scrum?</li>\\r\\n\\t<li>What are the impediments that are preventing me from progressing?</li>\\r\\n</ul>\\r\\n\\r\\n<h3>5. Inspect and adapt</h3>\\r\\n\\r\\n<p>At the end of the sprint there are two additional inspect-and-adapt activities: sprint review and sprint retrospective. The goal of the sprint review is to inspect and adapt the product that is being built. Critical to this activity is the conversation that takes place among its participants, which include the Scrum team, stakeholders, sponsors, customers, and interested members of other teams. The conversation is focused on reviewing the just-completed features in the context of the overall development effort. Everyone in attendance gets clear visibility into what is occurring and has an opportunity to help guide the forthcoming development to ensure that the most business-appropriate solution is created.<br />\\r\\nThe sprint retrospective frequently occurs after the sprint review and before the next sprint planning. Whereas the sprint review is a time to inspect and adapt the product, the sprint retrospective is an opportunity to inspect and adapt the process. During the sprint retrospective the development team, ScrumMaster, and product owner come together to discuss what is and is not working with Scrum and associated technical practices. The focus is on the continuous process improvement necessary to help a good Scrum team become great.</p>\\r\\n\\r\\n<h3>6. Product backlog grooming</h3>\\r\\n\\r\\n<p>The product backlog is a prioritized list of desired product functionality. It provides a centralized and shared understanding of what to build and the order in which to build it. It is a highly visible artifact at the heart of the Scrum framework that is accessible to all project participants. Most product backlog items (PBI) are features, items of functionality that will have tangible value to the user or customer. These are often written as user stories, can be estimated, prioritized and they are emergent.<br />\\r\\nGrooming the product backlog is an ongoing collaborative effort led by the product owner and including significant participation from internal and external stakeholders as well as the ScrumMaster and development team. Grooming refers to a set of three principal activities: creating and refining (adding details to) PBIs, estimating PBIs, and prioritizing PBIs.</p>\\r\\n\\r\\n<h2>What has to be ready before moving to next phase?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Product backlog grooming is continuous</li>\\r\\n\\t<li>Each sprint has a goal defined (e.g. Architecture, Implementation, Testing, Security...)</li>\\r\\n\\t<li>All artifacts are under version control in Git</li>\\r\\n\\t<li>The minimum releasable features (MRF) have been identified, implemented and tested</li>\\r\\n\\t<li>Provisioning recipes for the service are developed and tested</li>\\r\\n\\t<li>The service(s) are tested</li>\\r\\n\\t<li>The service description may exist on FORGE Plaza</li>\\r\\n</ul>\\r\\n\\r\\n<h2>How to do it?</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\r\\n\\t<li>Continuous Delivery (Build and test automation, continuous integration and deployment)</li>\\r\\n\\t<li>Product backlogs and sprint backlogs - <a href=\\"https://support.forgeservicelab.fi/\\">FORGE Redmine</a></li>\\r\\n\\t<li>Cloud development environment - <a href=\\"https://cloud.forgeservicelab.fi/\\">FORGE OpenStack</a></li>\\r\\n\\t<li>Version control system - <a href=\\"https://git.forgeservicelab.fi/\\">FORGE Git</a></li>\\r\\n\\t<li>Tools for build and test automation plus continuous integration</li>\\r\\n\\t<li>Marketplace for the partners helping to create services – <a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\r\\n</ul>\\r\\n\\r\\n<h2>I want more</h2>\\r\\n\\r\\n<h3>Book references:</h3>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\r\\n\\t<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education.</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><br />\\r\\n<br />\\r\\n&nbsp;</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<h2>What is the purpose of this phase?</h2>\\n<p>The purpose of this phase is to start and carry on the development activities using agile methods and by automating as many development phases as possible e.g. integration, testing, deployment and releasing. The team can start the development even when the service concept is not fully specified. It is expected that the concept will develop further parallel and in close collaboration with development activities and the product backlog is therefore continuously groomed. The development activities can be adjusted in each sprint according to newly groomed product backlog. It\'s also important that the team will improve its operations and practices in applying agile methods in its selected project life cycle model.</p>\\n<h2>What happens in this phase?</h2>\\n<h3>1. Scrum</h3>\\n<p>Scrum is an agile project lifecycle model for completing complex projects. Scrum was originally formalized for software development, but it is suitable for any complex and innovative scope of work. Scrum is not suitable for running interrupt-drive work like helpdesk function. Neither it is suitable in chaotic or disordered domains where people tend to interpret the situation and act according to their personal preference. Scrum emphasizes teamwork.</p>\\n<h3>2. Sprint</h3>\\n<p>In Scrum, the work itself is performed in short, timeboxed iterations (sprints), which usually range from a week to a calendar month in length. During each iteration, a self-organizing, cross-functional team does all of the work— such as designing, building, and testing—required to produce completed, working features that could potentially be put into production.<br />\\nThe work completed in each sprint should create tangible value to the customer or user. Sprints are timeboxed so they always have a fixed start and end date, and generally they should all be of the same duration. A new sprint immediately follows the completion of the previous sprint.<br />\\nTypically the amount of work in the product backlog is much greater than can be completed by a team in one short-duration iteration. So, at the start of each iteration, the team plans which high-priority subset of the product backlog to create in the upcoming iteration.</p>\\n<h3>3. Planning</h3>\\n<p>A product backlog may represent many weeks or months of work, which is much more than can be completed in a single, short sprint. To determine the most important subset of product backlog items to build in the next sprint, the product owner, development team, and ScrumMaster perform sprint planning. During sprint planning, the product owner and development team agree on a sprint goal that defines what the upcoming sprint is supposed to achieve. Using this goal, the development team reviews the product backlog and determines the high-priority items that the team can realistically accomplish in the upcoming sprint. To acquire confidence in what it can get done, many development teams break down each targeted feature into a set of tasks. The collection of these tasks, along with their associated product backlog items, forms a second backlog called the sprint backlog.<br />\\nThe approach for sprint planning follows following simple cycle. The team selects a most important item from the product backlog and takes it as part of the sprint backlog. Then the team breaks the item down into tasks, and determines if the selected item will reasonably fit within the sprint (in combination with other items targeted for the same sprint). If it does fit and there is more capacity to complete work then the cycle is repeated until the team is out of capacity to do any more work. The team will learn its capacity after few sprints are completed.</p>\\n<h3>4. Daily Scrum</h3>\\n<p>Each day of the sprint, ideally at the same time, the development team members hold a timeboxed (15 minutes or less) daily scrum.  A common approach to performing the daily scrum has the ScrumMaster facilitating and each team member taking turns answering three questions for the benefit of the other team members. By answering these questions, everyone understands the big picture of what is occurring, how they are progressing toward the sprint goal, any modifications they want to make to their plans for the upcoming days.</p>\\n<ul><li>What did I accomplish since the last daily scrum?</li>\\n<li>What do I plan to work on by the next daily scrum?</li>\\n<li>What are the impediments that are preventing me from progressing?</li>\\n</ul><h3>5. Inspect and adapt</h3>\\n<p>At the end of the sprint there are two additional inspect-and-adapt activities: sprint review and sprint retrospective. The goal of the sprint review is to inspect and adapt the product that is being built. Critical to this activity is the conversation that takes place among its participants, which include the Scrum team, stakeholders, sponsors, customers, and interested members of other teams. The conversation is focused on reviewing the just-completed features in the context of the overall development effort. Everyone in attendance gets clear visibility into what is occurring and has an opportunity to help guide the forthcoming development to ensure that the most business-appropriate solution is created.<br />\\nThe sprint retrospective frequently occurs after the sprint review and before the next sprint planning. Whereas the sprint review is a time to inspect and adapt the product, the sprint retrospective is an opportunity to inspect and adapt the process. During the sprint retrospective the development team, ScrumMaster, and product owner come together to discuss what is and is not working with Scrum and associated technical practices. The focus is on the continuous process improvement necessary to help a good Scrum team become great.</p>\\n<h3>6. Product backlog grooming</h3>\\n<p>The product backlog is a prioritized list of desired product functionality. It provides a centralized and shared understanding of what to build and the order in which to build it. It is a highly visible artifact at the heart of the Scrum framework that is accessible to all project participants. Most product backlog items (PBI) are features, items of functionality that will have tangible value to the user or customer. These are often written as user stories, can be estimated, prioritized and they are emergent.<br />\\nGrooming the product backlog is an ongoing collaborative effort led by the product owner and including significant participation from internal and external stakeholders as well as the ScrumMaster and development team. Grooming refers to a set of three principal activities: creating and refining (adding details to) PBIs, estimating PBIs, and prioritizing PBIs.</p>\\n<h2>What has to be ready before moving to next phase?</h2>\\n<ul><li>Product backlog grooming is continuous</li>\\n<li>Each sprint has a goal defined (e.g. Architecture, Implementation, Testing, Security...)</li>\\n<li>All artifacts are under version control in Git</li>\\n<li>The minimum releasable features (MRF) have been identified, implemented and tested</li>\\n<li>Provisioning recipes for the service are developed and tested</li>\\n<li>The service(s) are tested</li>\\n<li>The service description may exist on FORGE Plaza</li>\\n</ul><h2>How to do it?</h2>\\n<ul><li>Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives)</li>\\n<li>Continuous Delivery (Build and test automation, continuous integration and deployment)</li>\\n<li>Product backlogs and sprint backlogs - <a href=\\"https://support.forgeservicelab.fi/\\">FORGE Redmine</a></li>\\n<li>Cloud development environment - <a href=\\"https://cloud.forgeservicelab.fi/\\">FORGE OpenStack</a></li>\\n<li>Version control system - <a href=\\"https://git.forgeservicelab.fi/\\">FORGE Git</a></li>\\n<li>Tools for build and test automation plus continuous integration</li>\\n<li>Marketplace for the partners helping to create services – <a href=\\"https://forgeservicelab.fi/en/plaza\\">FORGE Plaza</a></li>\\n</ul><h2>I want more</h2>\\n<h3>Book references:</h3>\\n<ul><li>Rubin, Kenneth S. (2012-07-20). Essential Scrum: A Practical Guide to the Most Popular Agile Process (Addison-Wesley Signature Series (Cohn)). Pearson Education.</li>\\n<li>Humble, Jez; Farley, David (2010-07-27). Continuous Delivery: Reliable Software Releases through Build, Test, and Deployment Automation (Addison-Wesley Signature Series (Fowler)). Pearson Education.</li>\\n</ul><p> </p>\\n<p> </p>\\n",
          ),
        ),
      ),
      \'field_link_to_video\' => array(),
      \'field_method\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives). Continuous Delivery (Build and test automation, continuous integration and deployment)\',
            \'format\' => NULL,
            \'safe_value\' => \'Scrum (Product backlog groomings, sprint plannings, sprint executions, sprint reviews and retrospectives). Continuous Delivery (Build and test automation, continuous integration and deployment)\',
          ),
        ),
      ),
      \'field_tools\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://support.forgeservicelab.fi/\',
            \'title\' => \'Product backlogs and sprint backlogs - FORGE Redmine\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://cloud.forgeservicelab.fi/\',
            \'title\' => \'Cloud development environment - FORGE OpenStack\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://git.forgeservicelab.fi/\',
            \'title\' => \'Version control system - FORGE Git\',
            \'attributes\' => array(),
          ),
          array(
            \'url\' => \'https://forgeservicelab.fi/en/plaza\',
            \'title\' => \'Marketplace for the partners helping to create services – FORGE Plaza\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Build\',
            \'format\' => NULL,
            \'safe_value\' => \'Build\',
          ),
        ),
      ),
      \'field_images_for_content\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'69\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1397632576\',
              \'changed\' => \'1398171205\',
            ),
          ),
        ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397632576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 1,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 1,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'268\',
        \'source\' => \'node/69\',
        \'alias\' => \'dashboard/build\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Build\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-tutorial-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Contact us!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'51b238e2-dec5-426a-a980-5d94b36c8d9a\',
      \'nid\' => \'13\',
      \'type\' => \'forge_webform\',
      \'language\' => \'en\',
      \'created\' => \'1397207309\',
      \'changed\' => \'1398203839\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fab349c1-8bbd-473c-8d6b-4818a548230a\',
      \'revision_timestamp\' => \'1398203839\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "<p>Please do not hesitate to contact us in questions or ideas related to digital service creation. As our goal is to bring different participants together to co-create, let us be the matchmaker in finding a right FORGE partner for you. We are also happy to tell more about FORGE Service Lab.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Please do not hesitate to contact us in questions or ideas related to digital service creation. As our goal is to bring different participants together to co-create, let us be the matchmaker in finding a right FORGE partner for you. We are also happy to tell more about FORGE Service Lab.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_page_title\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Contact us!\',
            \'format\' => NULL,
            \'safe_value\' => \'Contact us!\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'webform\' => array(
        \'nid\' => \'13\',
        \'confirmation\' => "<p>Thank you!&nbsp;Your message has been received and we will reply to you ASAP.</p>\\r\\n",
        \'confirmation_format\' => \'filtered_html\',
        \'redirect_url\' => \'<confirmation>\',
        \'status\' => \'1\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => \'filtered_html\',
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(
          1 => array(
            \'nid\' => \'13\',
            \'eid\' => \'1\',
            \'email\' => \'contactus@forgeservicelab.fi\',
            \'subject\' => \'default\',
            \'from_name\' => \'default\',
            \'from_address\' => \'default\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'extra\' => FALSE,
          ),
          2 => array(
            \'nid\' => \'13\',
            \'eid\' => \'2\',
            \'email\' => \'pia.erkinheimo@digile.fi\',
            \'subject\' => \'default\',
            \'from_name\' => \'default\',
            \'from_address\' => \'default\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'extra\' => FALSE,
          ),
          3 => array(
            \'nid\' => \'13\',
            \'eid\' => \'3\',
            \'email\' => \'sanna.vainionpaa@digile.fi\',
            \'subject\' => \'default\',
            \'from_name\' => \'default\',
            \'from_address\' => \'default\',
            \'template\' => \'default\',
            \'excluded_components\' => array(),
            \'html\' => \'0\',
            \'attachments\' => \'0\',
            \'extra\' => FALSE,
          ),
        ),
        \'components\' => array(
          1 => array(
            \'nid\' => 13,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_name\',
            \'name\' => \'Your name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'exclude_cv\' => 0,
              \'wfm_max_items\' => \'1\',
              \'wfm_min_items\' => \'1\',
              \'wfm_add_more_text\' => \'Add another item\',
              \'width\' => \'\',
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'0\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 13,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'your_email\',
            \'name\' => \'Your email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'exclude_cv\' => 0,
              \'wfm_max_items\' => \'1\',
              \'wfm_min_items\' => \'1\',
              \'wfm_add_more_text\' => \'Add another item\',
              \'width\' => \'\',
              \'unique\' => 0,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 13,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'message\',
            \'name\' => \'Message\',
            \'type\' => \'textarea\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'before\',
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'exclude_cv\' => 0,
              \'wfm_max_items\' => \'1\',
              \'wfm_min_items\' => \'1\',
              \'wfm_add_more_text\' => \'Add another item\',
              \'cols\' => \'\',
              \'rows\' => \'\',
              \'resizable\' => 1,
              \'disabled\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'1\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397207309\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'219\',
        \'source\' => \'node/13\',
        \'alias\' => \'contact-us\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
