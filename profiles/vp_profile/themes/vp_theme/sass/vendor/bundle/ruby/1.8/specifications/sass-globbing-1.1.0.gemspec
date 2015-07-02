# -*- encoding: utf-8 -*-

Gem::Specification.new do |s|
  s.name = %q{sass-globbing}
  s.version = "1.1.0"

  s.required_rubygems_version = Gem::Requirement.new(">= 0") if s.respond_to? :required_rubygems_version=
  s.authors = ["Chris Eppstein"]
  s.date = %q{2013-05-29}
  s.description = %q{Allows use of globs in Sass @import directives.}
  s.email = ["chris@eppsteins.net"]
  s.files = [".gitignore", "CHANGELOG.markdown", "Gemfile", "README.markdown", "Rakefile", "lib/sass-globbing.rb", "lib/sass/globbing.rb", "lib/sass/globbing/importer.rb", "lib/sass/globbing/monkey_patches.rb", "lib/sass/globbing/version.rb", "sass-globbing.gemspec", "test/fixtures/all.sass", "test/fixtures/partials/_partial1.sass", "test/fixtures/partials/nested/_nested.sass", "test/fixtures/partials/nested/_nested_2.sass", "test/fixtures/partials/nested/deeply_nested/_deeply.scss", "test/sass_globbing_test.rb"]
  s.homepage = %q{http://chriseppstein.github.com/}
  s.require_paths = ["lib"]
  s.rubygems_version = %q{1.3.7}
  s.summary = %q{Allows use of globs in Sass @import directives.}
  s.test_files = ["test/fixtures/all.sass", "test/fixtures/partials/_partial1.sass", "test/fixtures/partials/nested/_nested.sass", "test/fixtures/partials/nested/_nested_2.sass", "test/fixtures/partials/nested/deeply_nested/_deeply.scss", "test/sass_globbing_test.rb"]

  if s.respond_to? :specification_version then
    current_version = Gem::Specification::CURRENT_SPECIFICATION_VERSION
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_runtime_dependency(%q<sass>, [">= 3.1"])
    else
      s.add_dependency(%q<sass>, [">= 3.1"])
    end
  else
    s.add_dependency(%q<sass>, [">= 3.1"])
  end
end
