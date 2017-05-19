var path = require('path');

module.exports = {
  stylesheets: {
    'files' : [
      {
        src: './sites/default/themes/custom/vp_specific_theme/sass/**/*.scss',
        dest: './sites/default/themes/custom/vp_specific_theme/css'
      }
    ]
  },
  browserSync: {
    init: true,
    browserSyncOptions: {
      proxy: "localsite.dev"
    }
  }
};
