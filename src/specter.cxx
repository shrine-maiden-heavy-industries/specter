// SPDX-License-Identifier: BSD-3-Clause
#include <QtWidgets/QApplication>
#include "mainWindow.hxx"

int main(int argCount, char **argList)
{
	QApplication app{argCount, argList};
	Specter specter{};
	specter.show();
	return app.exec();
}
