<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function volunteering_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'webform',
    'language' => '',
    'uid' => '1',
    'status' => '1',
    'created' => '1345101860',
    'changed' => '1346297809',
    'comment' => '2',
    'promote' => '1',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Volunteer',
    'body' => '<p><strong>Why do we need volunteers?</strong><br />
    	Volunteers bring huge value to Green Renters by enhancing the quality and variety of services we provide, giving their time, enthusiasm, additional skills, independence of outlook and a fresh perspective Like any not for profit organisation, volunteers are what enables us to carry out the work that we do.</p>
    <p><strong>What are the benefits of volunteering?</strong><br />
    	The benefits of volunteering include the opportunities to learn and develop new skills; give something back to your community and meet a diverse range of people. It&#39;s a great way to also expand on your skills for employment and training (all our volunteers receive a professional reference after a period of time).</p>
    <p><strong>What are we looking for?</strong><br />
    	To be honest if you have skills and ideas, we&#39;re interested in hearing from you, we have numerous projects and tasks behind the scenes.</p>
    <p><strong>We don&#39;t believe volunteers should just be undertaking the donkey work</strong><br />
    	There are plenty of small admin type tasks that need to be done, but we&#39;re also interested in having volunteers becoming involved in our key projects and activities, something you can fully immerse and involve yourself in.</p>
    <p><strong>I&#39;m keen! What next?</strong><br />
    	Fill in the form below with your interests, experiences and what you&#39;re wanting to be involved with and we&#39;ll be in touch.</p>
    ',
    'teaser' => '<p><strong>Why do we need volunteers?</strong><br />
    	Volunteers bring huge value to Green Renters by enhancing the quality and variety of services we provide, giving their time, enthusiasm, additional skills, independence of outlook and a fresh perspective Like any not for profit organisation, volunteers are what enables us to carry out the work that we do.</p>',
    'log' => '',
    'revision_timestamp' => '1346297809',
    'format' => '6',
    'name' => 'ChrisChinchilla',
    'picture' => 'sites/default/files/pictures/picture-1.jpg',
    'data' => 'a:10:{s:18:"admin_compact_mode";b:0;s:8:"new_role";i:0;s:12:"new_role_add";s:1:"3";s:16:"new_role_add_qty";s:0:"";s:24:"new_role_add_granularity";s:3:"day";s:9:"nodewords";a:9:{s:8:"abstract";a:1:{s:5:"value";s:42:"Sustainable living in rental accommodation";}s:9:"canonical";a:1:{s:5:"value";s:0:"";}s:9:"copyright";a:1:{s:5:"value";s:18:"Green Renters 2011";}s:11:"description";a:1:{s:5:"value";s:167:"Chris Ward aka Chris Chinchilla is one of Green Renters founders and handles a multitude of tasks including website development, editing, marketing and communications.";}s:8:"keywords";a:1:{s:5:"value";s:68:"Chris Chinchilla, Green Renters, website, development,editor, writer";}s:13:"revisit-after";a:1:{s:5:"value";s:1:"1";}s:6:"robots";a:2:{s:5:"value";a:6:{s:9:"noarchive";i:0;s:8:"nofollow";i:0;s:7:"noindex";i:0;s:5:"noodp";i:0;s:9:"nosnippet";i:0;s:6:"noydir";i:0;}s:11:"use_default";i:0;}s:8:"dc.title";a:1:{s:5:"value";s:0:"";}s:8:"location";a:2:{s:8:"latitude";s:0:"";s:9:"longitude";s:0:"";}}s:7:"contact";i:1;s:13:"form_build_id";s:37:"form-1aacd4c29e047196ab4004971f5b99e9";s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";}',
    'path' => 'volunteer',
    'field_image' => array(),
    'webform' => array(
      'nid' => '1091',
      'confirmation' => '<p>Thanks for your submission, we&#39;ll be in touch asap!</p>
    <p>Please give us time to respond, we&#39;re a very small organisation and receive a lot of expressions of interest, but you are valuable to us.</p>
    ',
      'confirmation_format' => '6',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '1',
      'teaser' => '0',
      'allow_draft' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'auto_save' => '0',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        '0' => '1',
        '1' => '2',
        '2' => '3',
        '3' => '4',
        '4' => '5',
        '5' => '6',
        '6' => '7',
        '7' => '8',
        '8' => '9',
        '9' => '10',
      ),
      'emails' => array(
        '1' => array(
          'nid' => '1091',
          'eid' => '1',
          'email' => 'chris@greenrenters.org',
          'subject' => 'default',
          'from_name' => 'default',
          'from_address' => 'default',
          'template' => 'default',
          'excluded_components' => array(),
          'html' => '0',
          'attachments' => '0',
        ),
      ),
      'components' => array(
        '5' => array(
          'nid' => '1091',
          'cid' => '5',
          'form_key' => 'civicrm_1_contact_1_contact_first_name',
          'name' => 'First Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'width' => '20',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'pid' => '0',
          'weight' => '6',
          'page_num' => 1,
        ),
        '6' => array(
          'nid' => '1091',
          'cid' => '6',
          'form_key' => 'civicrm_1_contact_1_contact_last_name',
          'name' => 'Last Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'width' => '20',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'pid' => '0',
          'weight' => '7',
          'page_num' => 1,
        ),
        '9' => array(
          'nid' => '1091',
          'cid' => '9',
          'form_key' => 'civicrm_1_contact_1_address_state_province_id',
          'name' => 'State/Province',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'width' => '4',
            'disabled' => 0,
            'unique' => 0,
            'maxlength' => 5,
            'conditional_operator' => '=',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'pid' => '0',
          'weight' => '8',
          'page_num' => 1,
        ),
        '8' => array(
          'nid' => '1091',
          'cid' => '8',
          'form_key' => 'civicrm_1_contact_1_email_email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '%useremail',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'width' => '20',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'pid' => '0',
          'weight' => '9',
          'page_num' => 1,
        ),
        '3' => array(
          'nid' => '1091',
          'cid' => '3',
          'form_key' => 'civicrm_1_contact_1_cg26_custom_104',
          'name' => 'Qualifications / Experience',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => 'Urban Planning|Urban Planning
    Marketing|Marketing
    Environment|Environment
    Leadership Skills|Leadership Skills
    Writing/Editing|Writing/Editing
    Event Organising|Event Organising
    Web Design/Development|Web Design/Development
    Graphic Design|Graphic Design
    Sustainability|Sustainability
    Presenting|Presenting
    Fundraising|Fundraising
    Photography|Photography
    Drivers license|Drivers license
    Other|Other (Specify in notes)',
            'other_option' => 0,
            'other_text' => 'Other...',
            'multiple' => 1,
            'title_display' => 'before',
            'private' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'pid' => '0',
          'weight' => '10',
          'page_num' => 1,
        ),
        '2' => array(
          'nid' => '1091',
          'cid' => '2',
          'form_key' => 'civicrm_1_contact_1_cg26_custom_103',
          'name' => 'Interest(s)',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => 'Research|Research
    Data Entry|Data Entry
    Marketing|Marketing
    Catering|Catering
    Policy|Policy
    Admin|Admin
    Event Organising|Event Organising
    Fundraising|Fundraising
    Writing/Editing|Writing/Editing
    Photography|Photography
    Driving/Set up|Driving/Set up
    Other|Other (Specify in notes)',
            'other_option' => 0,
            'other_text' => 'Other...',
            'multiple' => 1,
            'title_display' => 'before',
            'private' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'pid' => '0',
          'weight' => '11',
          'page_num' => 1,
        ),
        '4' => array(
          'nid' => '1091',
          'cid' => '4',
          'form_key' => 'civicrm_1_contact_1_cg26_custom_105',
          'name' => 'Project(s)',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => 'Rental Apartment|Rental Apartment
    Workshops|Workshops
    Events|Events
    Admin|Admin
    Green Games|Green Games
    Website Development/Design|Website Development/Design
    Graphic Design|Graphic Design
    Data Entry/Admin|Data Entry/Admin
    Corporate Development|Corporate Development
    Membership Building|Membership Building
    Retail Development|Retail Development
    Translating|Translating
    Press/Marketing|Press/Marketing
    Other|Other (Specify in notes)',
            'other_option' => 0,
            'other_text' => 'Other...',
            'multiple' => 1,
            'title_display' => 'before',
            'private' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'pid' => '0',
          'weight' => '12',
          'page_num' => 1,
        ),
        '7' => array(
          'nid' => '1091',
          'cid' => '7',
          'form_key' => 'civicrm_1_contact_1_cg26_custom_107',
          'name' => 'Other notes and comments',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'width' => '20',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'pid' => '0',
          'weight' => '13',
          'page_num' => 1,
        ),
      ),
    ),
    'last_comment_timestamp' => '1346297429',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(
      '1028' => array(
        'tid' => '1028',
        'vid' => '10',
        'name' => 'get involved',
        'description' => '',
        'weight' => '0',
        'v_weight_unused' => '0',
      ),
      '1029' => array(
        'tid' => '1029',
        'vid' => '10',
        'name' => 'volunteer',
        'description' => '',
        'weight' => '0',
        'v_weight_unused' => '0',
      ),
      '1030' => array(
        'tid' => '1030',
        'vid' => '10',
        'name' => 'volunteering',
        'description' => '',
        'weight' => '0',
        'v_weight_unused' => '0',
      ),
    ),
    'files' => array(),
    '0' => FALSE,
    'probability' => 100,
    'locations' => array(),
    'location' => array(),
    'page_title' => '',
    'uuid' => '7099f429-f252-11e1-937c-003048612c9c',
    'revision_uuid' => '0bf1f1f6-f253-11e1-9c7c-ba5990c3225f',
    'nodewords' => array(
      'abstract' => array(
        'value' => 'Sustainable living in rental accommodation',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => 'Green Renters 2011',
      ),
      'dc.contributor' => array(
        'value' => '',
      ),
      'dc.creator' => array(
        'value' => '',
      ),
      'dc.date' => array(
        'value' => array(
          'day' => '16',
          'month' => '8',
          'year' => '2012',
        ),
      ),
      'dc.title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => 'Volunteer with Green Renters to utilise and learn a wide variety of skills and interests. Anything from admin work to running an entire project in your own time. We\'re keen to hear from you.',
      ),
      'keywords' => array(
        'value' => 'volunteering,volunteer,volunteers,get involved,data entry,admin,projects,marketing,promotion',
      ),
      'location' => array(
        'latitude' => '',
        'longitude' => '',
      ),
      'revisit-after' => array(
        'value' => '1',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'noindex' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'noodp' => 0,
          'nosnippet' => 0,
          'noydir' => 0,
        ),
        'use_default' => 0,
      ),
      'shorturl' => array(
        'value' => '',
      ),
    ),
    'pathauto_perform_alias' => FALSE,
    'date' => '2012-08-16 17:24:20 +1000',
    'uuid_term' => array(
      '0' => '97452ab0-f252-11e1-937c-003048612c9c',
      '1' => '97454b94-f252-11e1-937c-003048612c9c',
      '2' => '97456276-f252-11e1-937c-003048612c9c',
    ),
  );
  return $nodes;
}
