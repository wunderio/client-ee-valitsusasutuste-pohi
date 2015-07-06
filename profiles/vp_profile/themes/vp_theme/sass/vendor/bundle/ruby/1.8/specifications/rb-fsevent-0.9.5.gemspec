# -*- encoding: utf-8 -*-

Gem::Specification.new do |s|
  s.name = %q{rb-fsevent}
  s.version = "0.9.5"

  s.required_rubygems_version = Gem::Requirement.new(">= 0") if s.respond_to? :required_rubygems_version=
  s.authors = ["Thibaud Guillaume-Gentil", "Travis Tilley"]
  s.date = %q{2015-05-20}
  s.description = %q{FSEvents API with Signals catching (without RubyCocoa)}
  s.email = ["thibaud@thibaud.gg", "ttilley@gmail.com"]
  s.files = [".gitignore", "Gemfile", "Guardfile", "LICENSE.txt", "README.md", "Rakefile", "bin/fsevent_watch", "ext/LICENSE", "ext/fsevent_watch/FSEventsFix.c", "ext/fsevent_watch/FSEventsFix.h", "ext/fsevent_watch/TSICTString.c", "ext/fsevent_watch/TSICTString.h", "ext/fsevent_watch/cli.c", "ext/fsevent_watch/cli.h", "ext/fsevent_watch/common.h", "ext/fsevent_watch/compat.c", "ext/fsevent_watch/compat.h", "ext/fsevent_watch/defines.h", "ext/fsevent_watch/main.c", "ext/rakefile.rb", "lib/rb-fsevent.rb", "lib/rb-fsevent/fsevent.rb", "lib/rb-fsevent/version.rb", "rb-fsevent.gemspec", "spec/fixtures/custom 'path/.gitignore", "spec/fixtures/folder1/file1.txt", "spec/fixtures/folder1/folder2/file2.txt", "spec/rb-fsevent/fsevent_spec.rb", "spec/spec_helper.rb"]
  s.homepage = %q{http://rubygems.org/gems/rb-fsevent}
  s.licenses = ["MIT"]
  s.require_paths = ["lib"]
  s.rubygems_version = %q{1.3.7}
  s.summary = %q{Very simple & usable FSEvents API}
  s.test_files = ["spec/fixtures/custom 'path/.gitignore", "spec/fixtures/folder1/file1.txt", "spec/fixtures/folder1/folder2/file2.txt", "spec/rb-fsevent/fsevent_spec.rb", "spec/spec_helper.rb"]

  if s.respond_to? :specification_version then
    current_version = Gem::Specification::CURRENT_SPECIFICATION_VERSION
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<bundler>, ["~> 1.0"])
      s.add_development_dependency(%q<rspec>, ["~> 2.11"])
      s.add_development_dependency(%q<guard-rspec>, ["~> 4.2"])
    else
      s.add_dependency(%q<bundler>, ["~> 1.0"])
      s.add_dependency(%q<rspec>, ["~> 2.11"])
      s.add_dependency(%q<guard-rspec>, ["~> 4.2"])
    end
  else
    s.add_dependency(%q<bundler>, ["~> 1.0"])
    s.add_dependency(%q<rspec>, ["~> 2.11"])
    s.add_dependency(%q<guard-rspec>, ["~> 4.2"])
  end
end
