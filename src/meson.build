# SPDX-License-Identifier: BSD-3-Clause
qt5 = import('qt5')
qt5Libs = dependency('qt5', modules: ['Core', 'Gui', 'Widgets'])

if target_machine.system() == 'windows'
	qt5Libs += dependency('qt5', modules: ['Main'])
endif

specterSrcs = [
	'mainWindow.cxx',
	'specter.cxx'
]

specterSrcs += qt5.preprocess(
	ui_files: [
		'ui/specter.ui'
	]
)

executable(
	'specter',
	specterSrcs,
	dependencies: [qt5Libs, threading, substrate],
	gnu_symbol_visibility: 'inlineshidden',
	build_by_default: true,
	install: true,
)
