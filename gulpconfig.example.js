var path = require('path');

module.exports = {
  stylesheets: {
    'files' : [
      {
        src: './profiles/vp_profile/themes/vp_theme/sass/**/*.scss',
        dest: './profiles/vp_profile/themes/vp_theme/css'
      },
      {
        src: './web/themes/custom/ekt/assets/sass/**/*.scss',
        dest: './web/themes/custom/ekt/assets/css'
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
