
// Register the plugin within the editor.
CKEDITOR.plugins.add('vp_static_75_25_2columns', {
	// This plugin requires the Widgets System defined in the 'widget' plugin.
	requires: 'widget',

	// The plugin initialization logic goes inside this method.
	init: function( editor ) {
		// Register the widget.
		editor.widgets.add('vp_static_75_25_2columns', {
			// Allow all HTML elements, classes, and styles that this widget requires.
			// Read more about the Advanced Content Filter here:
			// * http://docs.ckeditor.com/#!/guide/dev_advanced_content_filter
			// * http://docs.ckeditor.com/#!/guide/plugin_sdk_integration_with_acf
			allowedContent:
			'div(!static-75-25-2columns,!clearfix,!static,static-75-25-2columns_has-separator);' +
			'img;',

			// Minimum HTML which is required by this widget to work.
			requiredContent: 'div(static-75-25-2columns)',

			// Define two nested editable areas.
			editables: {
				col1: {
					// Define CSS selector used for finding the element inside widget element.
					selector: '.col.first'
					//allowedContent: ''
				},
				col2: {
					// Define CSS selector used for finding the element inside widget element.
					selector: '.col.last',
					//allowedContent: ''
				}
			},

			// Define the template of a new widget.
			// Usualy template will be used when creating new instances widget.
			// For our widget this is only for documentation.
			//template:
			//	'<div class="template-custom-gallery">' +
			//		'<img src="/sites/default/themes/vp_theme_ecaa/img/example-content/gallery-img01.jpg">' +
			//		'<img src="/sites/default/themes/vp_theme_ecaa/img/example-content/gallery-img02.jpg">' +
			//	'</div>',

			// Check the elements that need to be converted to widgets.
			//
			// Note: The "element" argument is an instance of http://docs.ckeditor.com/#!/api/CKEDITOR.htmlParser.element
			// so it is not a real DOM element yet. This is caused by the fact that upcasting is performed
			// during data processing which is done on DOM represented by JavaScript objects.
			upcast: function( element ) {


				// Return "true" (that element needs to converted to a Simple Box widget)
				// for all <div> elements with a "simplebox" class.
				return element.name == 'div' && element.hasClass('static-75-25-2columns');
			}
		});

		// Add the button for the widget to properly trigger all rules for ACF and
		// later hide the button with css.
		editor.ui.addButton && editor.ui.addButton('vp_static_75_25_2columns_button', {
			label: 'Dummy label',
			command: 'vp_static_75_25_2columns'
		});
	}
});
