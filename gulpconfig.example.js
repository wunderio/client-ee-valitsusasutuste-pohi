var path = require('path');

module.exports = {
  stylesheets: {
    'files' : [
      {
        src: './profiles/vp_profile/themes/vp_theme/sass/**/*.scss',
        dest: './profiles/vp_profile/themes/vp_theme/css'
      },
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
