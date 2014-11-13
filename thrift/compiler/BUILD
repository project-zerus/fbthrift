cc_library(
  name = 'common',
  warning = 'no',
  srcs = [
    'common.cc',
    'thriftl.cc',
    'thrifty.cc',
    'parse/t_type.cc',
    'parse/t_typedef.cc',
  ],
  deps = [
    '//fbthrift:headers',
    '//folly:folly',
  ]
)

cc_binary(
  name = 'thrift1',
  warning = 'no',
  srcs = [
    'main.cc',
    'generate/t_cocoa_generator.cc',
    'generate/t_cpp_generator.cc',
    'generate/t_csharp_generator.cc',
    'generate/t_d_generator.cc',
    'generate/t_erl_generator.cc',
    'generate/t_generator.cc',
    'generate/t_go_generator.cc',
    'generate/t_hack_generator.cc',
    'generate/t_hs_generator.cc',
    'generate/t_html_generator.cc',
    'generate/t_java_generator.cc',
    'generate/t_js_generator.cc',
    'generate/t_json_generator.cc',
    'generate/t_lua_generator.cc',
    'generate/t_ocaml_generator.cc',
    'generate/t_perl_generator.cc',
    'generate/t_php_generator.cc',
    'generate/t_py_generator.cc',
    'generate/t_rb_generator.cc',
    'generate/t_st_generator.cc',
    'generate/t_xsd_generator.cc',
  ],
  deps = [
    ':common',
    '//fbthrift:headers',
    '//folly:folly',
  ]
)

cc_plugin(
  name = 'frontend',
  srcs = [
    'py/compiler.cc',
  ],
  deps = [
    ':common',
    '//fbthrift:headers',
    '//folly:folly',
    '//thirdparty/boost:python',
  ]
)
