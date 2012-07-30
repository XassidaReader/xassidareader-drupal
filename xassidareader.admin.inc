<?php



/**
 * xassidareader_admin_form
 *
 * Displays a form to configure xassidareader
 * 
 * @author Papa Pathe SENE
 * 
 * @return void
 * 
 **/
function xassidareader_admin_form($form, &$form_state)
{

	/**
	 * the url to the api server
	 */
	$form['xassidareader_apiurl'] =  array(
		'#type'  => 'textfield',
		'#description' => 'The url of the server hosting the api.',
		'#title' => t('Api Url'),
		'#default_value' => 'xassidareader.herokuapp.com'
	);

	/**
	 * audio support
	 */
	$form['xassidareader_audio'] = array(
		'#type'   => 'checkboxes', 
		'#title'  => 'Multimedia',
		'#description' => 'Check if you want to support audio reading of xassaides.',
		'#options' => array(
			'audio' => t('audio is enabled')
		)
	);

	/**
	 * data formats
	 */
	$form['xassidareader_formats'] = array(
		'#type'   => 'radios', 
		'#title'  => 'Data Format',
		'#description' => 'Choose the format used to fetch data from the api.',
		'#options' => array(
			'json' => t('JSON'),
			'xml'  => t('XML')
		)
	);

	return system_settings_form($form);
}