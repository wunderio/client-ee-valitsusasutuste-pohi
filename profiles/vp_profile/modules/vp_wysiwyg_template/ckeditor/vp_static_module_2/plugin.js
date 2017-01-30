
// Register the plugin within the editor.
CKEDITOR.plugins.add('vp_static_module_2', {
	// This plugin requires the Widgets System defined in the 'widget' plugin.
	requires: 'widget',

	// The plugin initialization logic goes inside this method.
	init: function( editor ) {
		// Register the widget.
		editor.widgets.add('vp_static_module_2', {
			// Allow all HTML elements, classes, and styles that this widget requires.
			// Read more about the Advanced Content Filter here:
			// * http://docs.ckeditor.com/#!/guide/dev_advanced_content_filter
			// * http://docs.ckeditor.com/#!/guide/plugin_sdk_integration_with_acf
			allowedContent:
				'div(!static-module-2,!static);' +
				'div(!static-inner);' +
				'div(!left-col);' +
				'div(!right-col);',

			// Minimum HTML which is required by this widget to work.
			requiredContent: 'div(static-module-2)',

			// Define two nested editable areas.
			editables: {
				contentLeft: {
					selector: '.left-col',
					allowedContent: 'h3 p br ul ol li strong em'
				},
				contentRight: {
					selector: '.right-col',
					allowedContent: 'h3 p br ul ol li strong em'
				}
			},

			// Define the template of a new widget.
			// Usualy template will be used when creating new instances widget.
			// For our widget this is only for documentation.
			template:
				'<div class="static static-module-2">' +
					'<div class="static-inner">' +
						'<div class="left-col">' +
							'<h3>Subtitle</h3>' +
							'<p>Content ....</p>' +
						'</div>' +
						'<div class="right-col">' +
							'<h3>Subtitle</h3>' +
							'<p>Content ....</p>' +
						'</div>' +
					'</div>' +
				'</div>',

			// Check the elements that need to be converted to widgets.
			//
			// Note: The "element" argument is an instance of http://docs.ckeditor.com/#!/api/CKEDITOR.htmlParser.element
			// so it is not a real DOM element yet. This is caused by the fact that upcasting is performed
			// during data processing which is done on DOM represented by JavaScript objects.
			upcast: function( element ) {
				// Return "true" (that element needs to converted to a Simple Box widget)
				// for all <div> elements with a "simplebox" class.
				return element.name == 'div' && element.hasClass('static-module-2');
			}
		});

		// Add the button for the widget to properly trigger all rules for ACF and
		// later hide the button with css.
		editor.ui.addButton && editor.ui.addButton('vp_static_module_2_button', {
			label: 'Dummy label',
			command: 'vp_static_module_2'
		});
	}
});
