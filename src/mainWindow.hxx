// SPDX-License-Identifier: BSD-3-Clause
#ifndef MAIN_WINDOW_HXX
#define MAIN_WINDOW_HXX

#include <QtWidgets/QMainWindow>
#include <ui_specter.h>

struct Specter final : public QMainWindow
{
private:
	Ui_Specter ui{};

public:
	Specter();
	~Specter() noexcept = default;
};

#endif /*MAIN_WINDOW_HXX*/
