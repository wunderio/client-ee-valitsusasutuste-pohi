
// Note: This automatic widget to dialog window binding (the fact that every field is set up from the widget
// and is committed to the widget) is only possible when the dialog is opened by the Widgets System
// (i.e. the widgetDef.dialog property is set).
// When you are opening the dialog window by yourself, you need to take care of this by yourself too.

CKEDITOR.dialog.add( 'vp_static_simple_2columns', function( editor ) {
	return {
		title: 'Edit Simple 2 Columns',
		minWidth: 200,
		minHeight: 100,
		contents: [
			{
				id: 'info',
				elements: [
					{
						id: 'hasSpacer',
						type: 'checkbox',
						label: 'Has spacer',
						setup: function( widget ) {
							if (widget.hasClass('has-spacer')) {
								this.setValue(true);
							}
							else {
								this.setValue(false);
							}
						},
						// When committing (saving) this field, set its value to the widget data.
						commit: function( widget ) {
							if (this.getValue() == true) {
								widget.addClass('has-spacer');
							}
							else {
								widget.removeClass('has-spacer');
							}
						}
					}
				]
			}
		]
	};
} );
