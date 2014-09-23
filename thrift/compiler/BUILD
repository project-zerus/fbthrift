cc_library(
  name = 'thriftcompilerbase',
  srcs = [
    'common.cc',
    'parse/t_type.cc',
    'parse/t_typedef.cc',
  ],
  deps = [
    '//fbthrift:headers',
  ]
)

cc_library(
  name = 'parse',
  srcs = [
    'thriftl.cc',
    'thrifty.cc',
  ],
  deps = [
    '//fbthrift:headers',
  ]
)

cc_binary(
  name = 'thrift1',
  srcs = [
    'main.cc',
    'generate/t_generator.cc',
    'generate/t_cpp_generator.cc',
    'generate/t_java_generator.cc',
  ],
  deps = [
    ':parse',
    ':thriftcompilerbase',
  ]
)

cc_plugin(
  name = 'frontend',
  srcs = [
    'py/compiler.cc',
  ],
  deps = [
    ':parse',
    ':thriftcompilerbase',
    '//boost:python',
  ]
)
