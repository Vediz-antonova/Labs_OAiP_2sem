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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_getSize;
    QLineEdit *lineEdit;
    QPushButton *pushButton_count;
    QPushButton *pushButton_any;
    QSpinBox *spinBox_reset;
    QPushButton *pushButton_ulong;
    QPushButton *pushButton_resetArg;
    QSpinBox *spinBox_flip;
    QPushButton *pushButton_setArg;
    QPushButton *pushButton_all;
    QLabel *label;
    QPushButton *pushButton_ullong;
    QSpinBox *spinBox_test;
    QSpinBox *spinBox_set;
    QLabel *label_ans;
    QPushButton *pushButton_set;
    QPushButton *pushButton_flipArg;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_testArg;
    QPushButton *pushButton_none;
    QPushButton *pushButton_flip;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_getSize = new QPushButton(centralwidget);
        pushButton_getSize->setObjectName(QString::fromUtf8("pushButton_getSize"));
        pushButton_getSize->setGeometry(QRect(150, 180, 80, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(140, 40, 601, 24));
        lineEdit->setReadOnly(true);
        pushButton_count = new QPushButton(centralwidget);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));
        pushButton_count->setGeometry(QRect(40, 220, 80, 24));
        pushButton_any = new QPushButton(centralwidget);
        pushButton_any->setObjectName(QString::fromUtf8("pushButton_any"));
        pushButton_any->setGeometry(QRect(40, 180, 80, 24));
        spinBox_reset = new QSpinBox(centralwidget);
        spinBox_reset->setObjectName(QString::fromUtf8("spinBox_reset"));
        spinBox_reset->setGeometry(QRect(460, 220, 42, 25));
        spinBox_reset->setMinimum(0);
        spinBox_reset->setMaximum(9);
        pushButton_ulong = new QPushButton(centralwidget);
        pushButton_ulong->setObjectName(QString::fromUtf8("pushButton_ulong"));
        pushButton_ulong->setGeometry(QRect(150, 260, 80, 24));
        pushButton_resetArg = new QPushButton(centralwidget);
        pushButton_resetArg->setObjectName(QString::fromUtf8("pushButton_resetArg"));
        pushButton_resetArg->setGeometry(QRect(350, 220, 80, 24));
        spinBox_flip = new QSpinBox(centralwidget);
        spinBox_flip->setObjectName(QString::fromUtf8("spinBox_flip"));
        spinBox_flip->setGeometry(QRect(460, 140, 42, 25));
        spinBox_flip->setMinimum(0);
        spinBox_flip->setMaximum(9);
        pushButton_setArg = new QPushButton(centralwidget);
        pushButton_setArg->setObjectName(QString::fromUtf8("pushButton_setArg"));
        pushButton_setArg->setGeometry(QRect(350, 180, 80, 24));
        pushButton_all = new QPushButton(centralwidget);
        pushButton_all->setObjectName(QString::fromUtf8("pushButton_all"));
        pushButton_all->setGeometry(QRect(40, 140, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 61, 21));
        pushButton_ullong = new QPushButton(centralwidget);
        pushButton_ullong->setObjectName(QString::fromUtf8("pushButton_ullong"));
        pushButton_ullong->setGeometry(QRect(150, 220, 80, 24));
        spinBox_test = new QSpinBox(centralwidget);
        spinBox_test->setObjectName(QString::fromUtf8("spinBox_test"));
        spinBox_test->setGeometry(QRect(460, 260, 42, 25));
        spinBox_test->setMinimum(0);
        spinBox_test->setMaximum(9);
        spinBox_set = new QSpinBox(centralwidget);
        spinBox_set->setObjectName(QString::fromUtf8("spinBox_set"));
        spinBox_set->setGeometry(QRect(460, 180, 42, 25));
        spinBox_set->setMinimum(0);
        spinBox_set->setMaximum(9);
        label_ans = new QLabel(centralwidget);
        label_ans->setObjectName(QString::fromUtf8("label_ans"));
        label_ans->setGeometry(QRect(80, 80, 511, 16));
        pushButton_set = new QPushButton(centralwidget);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));
        pushButton_set->setGeometry(QRect(150, 140, 80, 24));
        pushButton_flipArg = new QPushButton(centralwidget);
        pushButton_flipArg->setObjectName(QString::fromUtf8("pushButton_flipArg"));
        pushButton_flipArg->setGeometry(QRect(350, 140, 80, 24));
        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(40, 300, 80, 24));
        pushButton_testArg = new QPushButton(centralwidget);
        pushButton_testArg->setObjectName(QString::fromUtf8("pushButton_testArg"));
        pushButton_testArg->setGeometry(QRect(350, 260, 80, 24));
        pushButton_none = new QPushButton(centralwidget);
        pushButton_none->setObjectName(QString::fromUtf8("pushButton_none"));
        pushButton_none->setGeometry(QRect(40, 260, 80, 24));
        pushButton_flip = new QPushButton(centralwidget);
        pushButton_flip->setObjectName(QString::fromUtf8("pushButton_flip"));
        pushButton_flip->setGeometry(QRect(150, 300, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_getSize->setText(QCoreApplication::translate("MainWindow", "getSize", nullptr));
        pushButton_count->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        pushButton_any->setText(QCoreApplication::translate("MainWindow", "Any", nullptr));
        pushButton_ulong->setText(QCoreApplication::translate("MainWindow", "To_ulong", nullptr));
        pushButton_resetArg->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_setArg->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_all->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bitset:", nullptr));
        pushButton_ullong->setText(QCoreApplication::translate("MainWindow", "To_ullong", nullptr));
        label_ans->setText(QString());
        pushButton_set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        pushButton_flipArg->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_testArg->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        pushButton_none->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        pushButton_flip->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
