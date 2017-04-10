
// Register the plugin within the editor.
CKEDITOR.plugins.add('vp_template_custom_infoblock_with_icon', {
  // This plugin requires the Widgets System defined in the 'widget' plugin.
  requires: 'widget',

  // The plugin initialization logic goes inside this method.
  init: function( editor ) {
    // Register the widget.
    editor.widgets.add('vp_template_custom_infoblock_with_icon', {
      // Allow all HTML elements, classes, and styles that this widget requires.
      // Read more about the Advanced Content Filter here:
      // * http://docs.ckeditor.com/#!/guide/dev_advanced_content_filter
      // * http://docs.ckeditor.com/#!/guide/plugin_sdk_integration_with_acf
      allowedContent:
        'div(!template-custom-infoblock-with-icon);' +
        'div(!template-custom-infoblock-with-icon__icon);' +
        'div(!template-custom-infoblock-with-icon__content);' +
        'h3(!template-custom-infoblock-with-icon__content-title);' +
        'div(!template-custom-infoblock-with-icon__content-content);',

      // Minimum HTML which is required by this widget to work.
      requiredContent: 'div(static-simple-2columns)',

      // Define two nested editable areas.
      editables: {
        title: {
          // Define CSS selector used for finding the element inside widget element.
          selector: 'h3.template-custom-infoblock-with-icon__content-title',
          allowedContent: 'h3'
        },
        content: {
          // Define CSS selector used for finding the element inside widget element.
          selector: 'div.template-custom-infoblock-with-icon__content-content'
        }
      },

      // Define the template of a new widget.
      // Usualy template will be used when creating new instances widget.
      // For our widget this is only for documentation.
      template:
        '<div class="template-custom-infoblock-with-icon">' +
          '<div class="template-custom-infoblock-with-icon__icon template-custom-infoblock-with-icon__icon_pregnancy">&nbsp;</div>' +
          '<div class="template-custom-infoblock-with-icon__content">' +
          '<h3 class="template-custom-infoblock-with-icon__content-title">Rasedus ja lapsed</h3>' +
          '<div class="template-custom-infoblock-with-icon__content-content">' +
            '<p>Üldjuhul ei ole lennukis olev keskkond rasedusele ohtlik.' +
              'Tavalisel lennukõrgusel on õhusõiduki õhus piisavalt hapniku nii' +
              'rasedale kui lootele. Siiski on soovitav arvestada teatud' +
              'ettevaatusabinõudega. Kõrgematel kõrgustel toimub kõhus gaasi' +
              'paisumine, mis võib põhjustada ebamugavustunnet. Seetõttu on paar' +
              'päeva enne reisi soovitatav mitte süüa gaasi tekitavaid toiduaineid.' +
              '</p>' +
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
        return element.name == 'div' && element.hasClass('template-custom-infoblock-with-icon');
      }
    });

    // Add the button for the widget to properly trigger all rules for ACF and
    // later hide the button with css.
    editor.ui.addButton && editor.ui.addButton('vp_template_custom_infoblock_with_icon_button', {
      label: 'Dummy label',
      command: 'vp_template_custom_infoblock_with_icon'
    });
  }
});
