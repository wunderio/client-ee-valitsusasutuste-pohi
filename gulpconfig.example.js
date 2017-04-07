var path = require('path');

module.exports = {
  stylesheets: {
    'files' : [
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
