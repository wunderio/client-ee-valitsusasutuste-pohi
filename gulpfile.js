'use strict';

var gulp = require('gulp');
var gulpConfig = require('./gulpconfig');
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
