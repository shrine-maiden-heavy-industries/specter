# SPDX-License-Identifier: BSD-3-Clause
specterSrcs = [
	'specter.cxx'
]

executable(
	'specter',
	specterSrcs,
	dependencies: [threading, substrate],
	gnu_symbol_visibility: 'inlineshidden',
	build_by_default: true,
	install: true,
)
