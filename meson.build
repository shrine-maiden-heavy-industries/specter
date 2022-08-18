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
isWindows = target_machine.system() == 'windows'

extended_warnings = [
	'-Wdouble-promotion',
	'-Wformat=2',
	'-Wformat-overflow=2',
	'-Wformat-signedness',
	'-Wformat-truncation',
	'-Wnull-dereference',
	'-Wmissing-attributes',
	'-Wmissing-braces',
	'-Wsequence-point',
	'-Wreturn-type',
	'-Wunused',
	'-Wunused-local-typedefs',
	'-Wunused-const-variable=2',
	'-Wmaybe-uninitialized',
	'-Wunknown-pragmas',
	'-Wstrict-aliasing',
	'-Wstrict-overflow=3',
	'-Wstring-compare',
	'-Wstringop-overflow',
	'-Warith-conversion',
	'-Wvla-parameter',
	'-Wduplicated-branches',
	'-Wshadow=local',
	'-Wunsafe-loop-optimizations',
	'-Wbad-function-cast',
	'-Wcast-qual',
	'-Wcast-align=strict',
	'-Wcast-function-type',
	#'-Wconversion',
	'-Wdangling-else',
	#'-Wsign-conversion',
	'-Wfloat-conversion',
	'-Wpacked',
	#'-Wpadded',
	'-Wredundant-decls',
	'-Winline',
	'-Wvla',
	'-Wstack-protector',
	'-Wunsuffixed-float-constant',
	'-Wimplicit-fallthrough',
]

add_project_arguments(
	cxx.get_supported_arguments(extended_warnings),
	language: 'cpp'
)

if isWindows
	add_project_arguments(
		'-DWIN32',
		'-D_WIN32',
		'-D_WINDOWS',
		'-D_CRT_NONSTDC_NO_DEPRECATE',
		'-D_CRT_SECURE_NO_WARNINGS',
		language: 'cpp'
	)

	if target_machine.cpu_family() == 'x86_64' or target_machine.cpu_family() == 'aarch64'
		add_project_arguments('-D_WIN64', language: 'cpp')
	endif
endif

subdir('src')
