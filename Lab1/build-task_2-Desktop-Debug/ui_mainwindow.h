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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *CenterX;
    QLabel *CenterY;
    QGridLayout *gridLayout;
    QPushButton *LineButton;
    QPushButton *HexagonButton;
    QPushButton *CircleButton;
    QPushButton *ClearButton;
    QPushButton *SquareButton;
    QPushButton *RhombusButton;
    QPushButton *TriangleButton;
    QPushButton *StarButton;
    QPushButton *RectangleButton;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(873, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CenterX = new QLabel(centralwidget);
        CenterX->setObjectName(QString::fromUtf8("CenterX"));

        horizontalLayout->addWidget(CenterX);

        CenterY = new QLabel(centralwidget);
        CenterY->setObjectName(QString::fromUtf8("CenterY"));

        horizontalLayout->addWidget(CenterY);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LineButton = new QPushButton(centralwidget);
        LineButton->setObjectName(QString::fromUtf8("LineButton"));

        gridLayout->addWidget(LineButton, 1, 0, 1, 1);

        HexagonButton = new QPushButton(centralwidget);
        HexagonButton->setObjectName(QString::fromUtf8("HexagonButton"));

        gridLayout->addWidget(HexagonButton, 3, 1, 1, 1);

        CircleButton = new QPushButton(centralwidget);
        CircleButton->setObjectName(QString::fromUtf8("CircleButton"));

        gridLayout->addWidget(CircleButton, 2, 0, 1, 1);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        gridLayout->addWidget(ClearButton, 0, 0, 1, 1);

        SquareButton = new QPushButton(centralwidget);
        SquareButton->setObjectName(QString::fromUtf8("SquareButton"));

        gridLayout->addWidget(SquareButton, 2, 1, 1, 1);

        RhombusButton = new QPushButton(centralwidget);
        RhombusButton->setObjectName(QString::fromUtf8("RhombusButton"));

        gridLayout->addWidget(RhombusButton, 3, 0, 1, 1);

        TriangleButton = new QPushButton(centralwidget);
        TriangleButton->setObjectName(QString::fromUtf8("TriangleButton"));

        gridLayout->addWidget(TriangleButton, 1, 1, 1, 1);

        StarButton = new QPushButton(centralwidget);
        StarButton->setObjectName(QString::fromUtf8("StarButton"));

        gridLayout->addWidget(StarButton, 4, 1, 1, 1);

        RectangleButton = new QPushButton(centralwidget);
        RectangleButton->setObjectName(QString::fromUtf8("RectangleButton"));

        gridLayout->addWidget(RectangleButton, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_2->addWidget(graphicsView, 1, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 873, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CenterX->setText(QCoreApplication::translate("MainWindow", "CenterX:", nullptr));
        CenterY->setText(QCoreApplication::translate("MainWindow", "CenterY:", nullptr));
        LineButton->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        HexagonButton->setText(QCoreApplication::translate("MainWindow", "Hexagon", nullptr));
        CircleButton->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        SquareButton->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        RhombusButton->setText(QCoreApplication::translate("MainWindow", "Rhombus", nullptr));
        TriangleButton->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        StarButton->setText(QCoreApplication::translate("MainWindow", "Star", nullptr));
        RectangleButton->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Click me", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
