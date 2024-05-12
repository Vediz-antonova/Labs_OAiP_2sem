/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *DateTable;
    QPushButton *BithdayButton;
    QPushButton *AddDateButton;
    QPushButton *OpenFileButton;
    QPushButton *ChangeDateButton;
    QLabel *label;
    QPushButton *ExitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1095, 624);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DateTable = new QTableWidget(centralwidget);
        DateTable->setObjectName(QString::fromUtf8("DateTable"));
        DateTable->setGeometry(QRect(0, 0, 751, 571));
        BithdayButton = new QPushButton(centralwidget);
        BithdayButton->setObjectName(QString::fromUtf8("BithdayButton"));
        BithdayButton->setGeometry(QRect(790, 60, 279, 25));
        AddDateButton = new QPushButton(centralwidget);
        AddDateButton->setObjectName(QString::fromUtf8("AddDateButton"));
        AddDateButton->setGeometry(QRect(790, 90, 279, 25));
        OpenFileButton = new QPushButton(centralwidget);
        OpenFileButton->setObjectName(QString::fromUtf8("OpenFileButton"));
        OpenFileButton->setGeometry(QRect(790, 150, 279, 25));
        ChangeDateButton = new QPushButton(centralwidget);
        ChangeDateButton->setObjectName(QString::fromUtf8("ChangeDateButton"));
        ChangeDateButton->setGeometry(QRect(790, 120, 279, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(790, 240, 191, 17));
        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(880, 530, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1095, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(ExitButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BithdayButton->setText(QCoreApplication::translate("MainWindow", "Enter your Bithday date", nullptr));
        AddDateButton->setText(QCoreApplication::translate("MainWindow", "Add date to file", nullptr));
        OpenFileButton->setText(QCoreApplication::translate("MainWindow", "Open file with dates", nullptr));
        ChangeDateButton->setText(QCoreApplication::translate("MainWindow", "Change date in file", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bithday:", nullptr));
        ExitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
