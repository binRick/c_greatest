project('c_greatest', ['c'],default_options: ['warning_level=0','c_std=gnu99',],subproject_dir: 'submodules/c_deps/subprojects',version: '0.0.1')
cc = meson.get_compiler('c')
pwd = meson.current_source_dir()
c_deps_dir = join_paths(meson.current_source_dir(),'submodules/c_deps')
make_program = find_program('make', required: true)
subdir('meson')
inc = [include_directories(
  'greatest',
  'greatest-test',
  'submodules/c_deps/submodules/parson',
  '.',
)]
#############################################################################
subdir('submodules')
#############################################################################
subdir('greatest')
subdir('greatest-test')
#//////////////////////////////////////////////////////////////////////
