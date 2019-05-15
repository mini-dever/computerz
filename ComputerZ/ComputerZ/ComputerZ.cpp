#include "ComputerZ.h"
#include "Tools.h"
#include <QMessageBox>
ComputerZ::ComputerZ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void ComputerZ::getCPUInfos() 
{
	std::string cpu = getCpuInfo();
	ui.cpuTextBrowser->setText(cpu.c_str());
}