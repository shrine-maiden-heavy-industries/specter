# SPDX-License-Identifier: BSD-3-Clause
project(
	'specter',
	'cpp',
	default_options: [
		'buildtype=release',
		'cpp_std=c++17',
		'warning_level=3',
		'b_ndebug=if-release',
		'b_lto=true',
		'strip=true'
	],
	license: 'BSD-3-Clause',
	version: '0.0.1',
	meson_version: '>= 0.53',
	subproject_dir: 'deps'
)

cxx = meson.get_compiler('cpp')
threading = dependency('threads')
substrate = subproject(
	'substrate',
	required: true,
	default_options: [
		'build_tests=false'
	]
).get_variable('substrate_dep')

subdir('src')
