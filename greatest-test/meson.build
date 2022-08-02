greatest_test_srcs = [
  'greatest-test.c',
]
greatest_include_dirs = [
  '.',
  '../greatest',
  inc,
]
greatest_include_cargs = [
  ]
greatest_test_deps = [
  greatest_dep,
]
if get_option('enable-binaries')
  greatest_test_exec = executable('greatest-test',
     greatest_test_srcs,
     dependencies: greatest_test_deps,
     include_directories: greatest_include_dirs,
     c_args: greatest_include_cargs,
  )
  if get_option('enable-binary-tests')
    test('greatest-test', passh_program, args: [greatest_test_exec,'-a','-v'])
    test('greatest-test JSON MODE', passh_program, args: [greatest_test_exec,'-a','-v','-j','-l'])
  endif
endif
