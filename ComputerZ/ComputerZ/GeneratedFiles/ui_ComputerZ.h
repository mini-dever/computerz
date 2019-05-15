/********************************************************************************
** Form generated from reading UI file 'ComputerZ.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTERZ_H
#define UI_COMPUTERZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComputerZClass
{
public:
    QWidget *centralWidget;
    QPushButton *allInfo;
    QPushButton *cpuInfo;
    QPushButton *gpuInfo;
    QTextBrowser *cpuTextBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ComputerZClass)
    {
        if (ComputerZClass->objectName().isEmpty())
            ComputerZClass->setObjectName(QString::fromUtf8("ComputerZClass"));
        ComputerZClass->resize(600, 400);
        centralWidget = new QWidget(ComputerZClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        allInfo = new QPushButton(centralWidget);
        allInfo->setObjectName(QString::fromUtf8("allInfo"));
        allInfo->setGeometry(QRect(30, 20, 75, 23));
        cpuInfo = new QPushButton(centralWidget);
        cpuInfo->setObjectName(QString::fromUtf8("cpuInfo"));
        cpuInfo->setGeometry(QRect(30, 70, 75, 23));
        gpuInfo = new QPushButton(centralWidget);
        gpuInfo->setObjectName(QString::fromUtf8("gpuInfo"));
        gpuInfo->setGeometry(QRect(30, 120, 75, 23));
        cpuTextBrowser = new QTextBrowser(centralWidget);
        cpuTextBrowser->setObjectName(QString::fromUtf8("cpuTextBrowser"));
        cpuTextBrowser->setGeometry(QRect(170, 20, 256, 192));
        ComputerZClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ComputerZClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        ComputerZClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ComputerZClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ComputerZClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ComputerZClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ComputerZClass->setStatusBar(statusBar);

        retranslateUi(ComputerZClass);
        QObject::connect(cpuInfo, SIGNAL(clicked()), ComputerZClass, SLOT(getCPUInfos()));

        QMetaObject::connectSlotsByName(ComputerZClass);
    } // setupUi

    void retranslateUi(QMainWindow *ComputerZClass)
    {
        ComputerZClass->setWindowTitle(QApplication::translate("ComputerZClass", "ComputerZ", nullptr));
        allInfo->setText(QApplication::translate("ComputerZClass", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        cpuInfo->setText(QApplication::translate("ComputerZClass", "CPU", nullptr));
        gpuInfo->setText(QApplication::translate("ComputerZClass", "\346\230\276\345\215\241", nullptr));
        cpuTextBrowser->setHtml(QApplication::translate("ComputerZClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComputerZClass: public Ui_ComputerZClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTERZ_H
