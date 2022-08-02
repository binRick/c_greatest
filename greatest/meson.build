greatest_srcs = [
  'greatest.c',
]
greatest_link_flags = []
greatest_c_args = [
]
greatest_deps = [
  parson_dep,
]
greatest_dirs = [
  '.',
  inc,
]


greatest_lib = static_library('greatest',
  greatest_srcs,
  install: false,
  dependencies: greatest_deps,
  c_args: greatest_c_args,
  include_directories: greatest_dirs,
  link_args: greatest_link_flags,
  )
greatest_dep = declare_dependency(
  include_directories: greatest_dirs,
   link_with: greatest_lib,
  link_args: greatest_link_flags,
)
