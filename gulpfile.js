'use strict';

var gulp = require('gulp');
try {
  var gulpConfig = require('./gulpconfig');
} catch (error) {
  console.log('Copy gulpconfig.example.js to gulpconfig.js and configure browserSyncOptions.proxy parameter.');
  process.exit()
}
var path = require('path');

// Gulp tasks
require('gulp-task-sass')(gulp, gulpConfig);


gulp.task('default', [
  'build',
  'watch'
]);

gulp.task('build', [
  'sass'
]);

gulp.task('watch', [
  'sass-watch'
]);
