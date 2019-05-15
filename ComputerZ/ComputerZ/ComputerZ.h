#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ComputerZ.h"
#ifdef WIN32
#include <windows.h>
#endif // WIN32

struct cpuCore {
	DWORD deax;
	DWORD debx;
	DWORD decx;
	DWORD dedx;
};
class ComputerZ : public QMainWindow
{
	Q_OBJECT

public:
	ComputerZ(QWidget *parent = Q_NULLPTR);

	public slots:
	void getCPUInfos();
private:
	Ui::ComputerZClass ui;


};
