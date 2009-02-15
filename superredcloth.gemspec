Gem::Specification.new do |s|
  s.name = %q{superredcloth}
  s.version = "1.160"
  s.date = %q{2007-02-04}
  s.summary = %q{a fast library for formatting Textile and Markdown as HTML}
  s.email = %q{why@ruby-lang.org}
  s.homepage = %q{http://code.whytheluckystiff.net/redcloth/}
  s.description = %q{a fast library for formatting Textile and Markdown as HTML}
  s.has_rdoc = true
  s.authors = ["why the lucky stiff"]
  s.files = ["COPYING", "README", "Rakefile", "test/test_parser.rb", "test/poignant.yml", "test/links.yml", "test/textile_hard_breaks.yml", "test/images.yml", "test/table.yml", "test/filter_html.yml", "test/code.yml", "test/instiki.yml", "test/sanitize_html.yml", "test/definitions.yml", "test/textism.yml", "test/lists.yml", "lib/superredcloth.rb", "lib/superredcloth_scan.so", "extras/mingw-rbconfig.rb", "ext/superredcloth_scan/superredcloth.h", "ext/superredcloth_scan/superredcloth_scan.c", "ext/superredcloth_scan/superredcloth_inline.c", "ext/superredcloth_scan/extconf.rb", "ext/superredcloth_scan/superredcloth_scan.rl", "ext/superredcloth_scan/superredcloth_inline.rl", "ext/superredcloth_scan/superredcloth_common.rl", "CHANGELOG"]
  s.extra_rdoc_files = ["README", "CHANGELOG", "COPYING"]
  s.extensions = ["ext/superredcloth_scan/extconf.rb"]
end
