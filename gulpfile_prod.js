'use strict';

var gulp = require('gulp');
var gulpConfig = require('./gulpconfig');
gulpConfig['stylesheets']['sourcemaps'] = false;

// Gulp tasks
require('gulp-task-postcss')(gulp, gulpConfig);
require('gulp-task-svg-stack')(gulp, gulpConfig);

gulp.task('default', [
  'postcss',
  'svg-stack'
]);

