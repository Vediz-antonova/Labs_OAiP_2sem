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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horisontalLayout_info;
    QVBoxLayout *verticalLayout_2;
    QLabel *timer;
    QLCDNumber *value_timer;
    QVBoxLayout *verticalLayout_3;
    QLabel *simb;
    QLCDNumber *value_simb;
    QVBoxLayout *verticalLayout_4;
    QLabel *accur;
    QLCDNumber *value_accur;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_menu;
    QCheckBox *checkBox;
    QPushButton *start;
    QPushButton *end;
    QComboBox *comboBox;
    QPushButton *openFile;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_keyboard;
    QHBoxLayout *horizontalLayout;
    QPushButton *bnt_0;
    QPushButton *bnt_1;
    QPushButton *bnt_2;
    QPushButton *bnt_3;
    QPushButton *bnt_4;
    QPushButton *bnt_5;
    QPushButton *bnt_6;
    QPushButton *bnt_7;
    QPushButton *bnt_8;
    QPushButton *bnt_9;
    QPushButton *bnt_10;
    QPushButton *bnt_11;
    QPushButton *bnt_12;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bnt_13;
    QPushButton *bnt_14;
    QPushButton *bnt_15;
    QPushButton *bnt_16;
    QPushButton *bnt_17;
    QPushButton *bnt_18;
    QPushButton *bnt_19;
    QPushButton *bnt_20;
    QPushButton *bnt_21;
    QPushButton *bnt_22;
    QPushButton *bnt_23;
    QPushButton *bnt_24;
    QPushButton *bnt_25;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bnt_26;
    QPushButton *bnt_27;
    QPushButton *bnt_28;
    QPushButton *bnt_29;
    QPushButton *bnt_30;
    QPushButton *bnt_31;
    QPushButton *bnt_32;
    QPushButton *bnt_33;
    QPushButton *bnt_34;
    QPushButton *bnt_35;
    QPushButton *bnt_36;
    QPushButton *bnt_37;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bnt_38;
    QPushButton *bnt_39;
    QPushButton *bnt_40;
    QPushButton *bnt_41;
    QPushButton *bnt_42;
    QPushButton *bnt_43;
    QPushButton *bnt_44;
    QPushButton *bnt_45;
    QPushButton *bnt_46;
    QPushButton *bnt_47;
    QPushButton *bnt_48;
    QPushButton *bnt_49;
    QPushButton *space;
    QLabel *forText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(905, 647);
        QFont font;
        font.setFamilies({QString::fromUtf8("Syamala Ramana")});
        font.setPointSize(12);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 881, 111));
        horisontalLayout_info = new QHBoxLayout(layoutWidget);
        horisontalLayout_info->setObjectName(QString::fromUtf8("horisontalLayout_info"));
        horisontalLayout_info->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        timer = new QLabel(layoutWidget);
        timer->setObjectName(QString::fromUtf8("timer"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Syamala Ramana")});
        font1.setPointSize(25);
        font1.setBold(false);
        timer->setFont(font1);

        verticalLayout_2->addWidget(timer);

        value_timer = new QLCDNumber(layoutWidget);
        value_timer->setObjectName(QString::fromUtf8("value_timer"));

        verticalLayout_2->addWidget(value_timer);


        horisontalLayout_info->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        simb = new QLabel(layoutWidget);
        simb->setObjectName(QString::fromUtf8("simb"));
        simb->setFont(font1);

        verticalLayout_3->addWidget(simb);

        value_simb = new QLCDNumber(layoutWidget);
        value_simb->setObjectName(QString::fromUtf8("value_simb"));

        verticalLayout_3->addWidget(value_simb);


        horisontalLayout_info->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        accur = new QLabel(layoutWidget);
        accur->setObjectName(QString::fromUtf8("accur"));
        accur->setFont(font1);

        verticalLayout_4->addWidget(accur);

        value_accur = new QLCDNumber(layoutWidget);
        value_accur->setObjectName(QString::fromUtf8("value_accur"));

        verticalLayout_4->addWidget(value_accur);


        horisontalLayout_info->addLayout(verticalLayout_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 881, 47));
        horizontalLayout_menu = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_menu->setObjectName(QString::fromUtf8("horizontalLayout_menu"));
        horizontalLayout_menu->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Syamala Ramana")});
        font2.setPointSize(20);
        font2.setBold(false);
        checkBox->setFont(font2);

        horizontalLayout_menu->addWidget(checkBox);

        start = new QPushButton(layoutWidget_2);
        start->setObjectName(QString::fromUtf8("start"));
        start->setEnabled(true);
        start->setFont(font2);

        horizontalLayout_menu->addWidget(start);

        end = new QPushButton(layoutWidget_2);
        end->setObjectName(QString::fromUtf8("end"));
        end->setFont(font2);

        horizontalLayout_menu->addWidget(end);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font2);

        horizontalLayout_menu->addWidget(comboBox);

        openFile = new QPushButton(layoutWidget_2);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        openFile->setFont(font2);
        openFile->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_menu->addWidget(openFile);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 240, 881, 391));
        verticalLayout_keyboard = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_keyboard->setObjectName(QString::fromUtf8("verticalLayout_keyboard"));
        verticalLayout_keyboard->setContentsMargins(0, 10, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        bnt_0 = new QPushButton(verticalLayoutWidget);
        bnt_0->setObjectName(QString::fromUtf8("bnt_0"));
        bnt_0->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bnt_0->sizePolicy().hasHeightForWidth());
        bnt_0->setSizePolicy(sizePolicy);
        bnt_0->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_0);

        bnt_1 = new QPushButton(verticalLayoutWidget);
        bnt_1->setObjectName(QString::fromUtf8("bnt_1"));
        bnt_1->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_1->sizePolicy().hasHeightForWidth());
        bnt_1->setSizePolicy(sizePolicy);
        bnt_1->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_1);

        bnt_2 = new QPushButton(verticalLayoutWidget);
        bnt_2->setObjectName(QString::fromUtf8("bnt_2"));
        bnt_2->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_2->sizePolicy().hasHeightForWidth());
        bnt_2->setSizePolicy(sizePolicy);
        bnt_2->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_2);

        bnt_3 = new QPushButton(verticalLayoutWidget);
        bnt_3->setObjectName(QString::fromUtf8("bnt_3"));
        bnt_3->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_3->sizePolicy().hasHeightForWidth());
        bnt_3->setSizePolicy(sizePolicy);
        bnt_3->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_3);

        bnt_4 = new QPushButton(verticalLayoutWidget);
        bnt_4->setObjectName(QString::fromUtf8("bnt_4"));
        bnt_4->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_4->sizePolicy().hasHeightForWidth());
        bnt_4->setSizePolicy(sizePolicy);
        bnt_4->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_4);

        bnt_5 = new QPushButton(verticalLayoutWidget);
        bnt_5->setObjectName(QString::fromUtf8("bnt_5"));
        bnt_5->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_5->sizePolicy().hasHeightForWidth());
        bnt_5->setSizePolicy(sizePolicy);
        bnt_5->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_5);

        bnt_6 = new QPushButton(verticalLayoutWidget);
        bnt_6->setObjectName(QString::fromUtf8("bnt_6"));
        bnt_6->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_6->sizePolicy().hasHeightForWidth());
        bnt_6->setSizePolicy(sizePolicy);
        bnt_6->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_6);

        bnt_7 = new QPushButton(verticalLayoutWidget);
        bnt_7->setObjectName(QString::fromUtf8("bnt_7"));
        bnt_7->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_7->sizePolicy().hasHeightForWidth());
        bnt_7->setSizePolicy(sizePolicy);
        bnt_7->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_7);

        bnt_8 = new QPushButton(verticalLayoutWidget);
        bnt_8->setObjectName(QString::fromUtf8("bnt_8"));
        bnt_8->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_8->sizePolicy().hasHeightForWidth());
        bnt_8->setSizePolicy(sizePolicy);
        bnt_8->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_8);

        bnt_9 = new QPushButton(verticalLayoutWidget);
        bnt_9->setObjectName(QString::fromUtf8("bnt_9"));
        bnt_9->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_9->sizePolicy().hasHeightForWidth());
        bnt_9->setSizePolicy(sizePolicy);
        bnt_9->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_9);

        bnt_10 = new QPushButton(verticalLayoutWidget);
        bnt_10->setObjectName(QString::fromUtf8("bnt_10"));
        bnt_10->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_10->sizePolicy().hasHeightForWidth());
        bnt_10->setSizePolicy(sizePolicy);
        bnt_10->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_10);

        bnt_11 = new QPushButton(verticalLayoutWidget);
        bnt_11->setObjectName(QString::fromUtf8("bnt_11"));
        bnt_11->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_11->sizePolicy().hasHeightForWidth());
        bnt_11->setSizePolicy(sizePolicy);
        bnt_11->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_11);

        bnt_12 = new QPushButton(verticalLayoutWidget);
        bnt_12->setObjectName(QString::fromUtf8("bnt_12"));
        bnt_12->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_12->sizePolicy().hasHeightForWidth());
        bnt_12->setSizePolicy(sizePolicy);
        bnt_12->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout->addWidget(bnt_12);


        verticalLayout_keyboard->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        bnt_13 = new QPushButton(verticalLayoutWidget);
        bnt_13->setObjectName(QString::fromUtf8("bnt_13"));
        bnt_13->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_13->sizePolicy().hasHeightForWidth());
        bnt_13->setSizePolicy(sizePolicy);
        bnt_13->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_13);

        bnt_14 = new QPushButton(verticalLayoutWidget);
        bnt_14->setObjectName(QString::fromUtf8("bnt_14"));
        bnt_14->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_14->sizePolicy().hasHeightForWidth());
        bnt_14->setSizePolicy(sizePolicy);
        bnt_14->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_14);

        bnt_15 = new QPushButton(verticalLayoutWidget);
        bnt_15->setObjectName(QString::fromUtf8("bnt_15"));
        bnt_15->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_15->sizePolicy().hasHeightForWidth());
        bnt_15->setSizePolicy(sizePolicy);
        bnt_15->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_15);

        bnt_16 = new QPushButton(verticalLayoutWidget);
        bnt_16->setObjectName(QString::fromUtf8("bnt_16"));
        bnt_16->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_16->sizePolicy().hasHeightForWidth());
        bnt_16->setSizePolicy(sizePolicy);
        bnt_16->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_16);

        bnt_17 = new QPushButton(verticalLayoutWidget);
        bnt_17->setObjectName(QString::fromUtf8("bnt_17"));
        bnt_17->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_17->sizePolicy().hasHeightForWidth());
        bnt_17->setSizePolicy(sizePolicy);
        bnt_17->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_17);

        bnt_18 = new QPushButton(verticalLayoutWidget);
        bnt_18->setObjectName(QString::fromUtf8("bnt_18"));
        bnt_18->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_18->sizePolicy().hasHeightForWidth());
        bnt_18->setSizePolicy(sizePolicy);
        bnt_18->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_18);

        bnt_19 = new QPushButton(verticalLayoutWidget);
        bnt_19->setObjectName(QString::fromUtf8("bnt_19"));
        bnt_19->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_19->sizePolicy().hasHeightForWidth());
        bnt_19->setSizePolicy(sizePolicy);
        bnt_19->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_19);

        bnt_20 = new QPushButton(verticalLayoutWidget);
        bnt_20->setObjectName(QString::fromUtf8("bnt_20"));
        bnt_20->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_20->sizePolicy().hasHeightForWidth());
        bnt_20->setSizePolicy(sizePolicy);
        bnt_20->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_20);

        bnt_21 = new QPushButton(verticalLayoutWidget);
        bnt_21->setObjectName(QString::fromUtf8("bnt_21"));
        bnt_21->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_21->sizePolicy().hasHeightForWidth());
        bnt_21->setSizePolicy(sizePolicy);
        bnt_21->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_21);

        bnt_22 = new QPushButton(verticalLayoutWidget);
        bnt_22->setObjectName(QString::fromUtf8("bnt_22"));
        bnt_22->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_22->sizePolicy().hasHeightForWidth());
        bnt_22->setSizePolicy(sizePolicy);
        bnt_22->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_22);

        bnt_23 = new QPushButton(verticalLayoutWidget);
        bnt_23->setObjectName(QString::fromUtf8("bnt_23"));
        bnt_23->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_23->sizePolicy().hasHeightForWidth());
        bnt_23->setSizePolicy(sizePolicy);
        bnt_23->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_23);

        bnt_24 = new QPushButton(verticalLayoutWidget);
        bnt_24->setObjectName(QString::fromUtf8("bnt_24"));
        bnt_24->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_24->sizePolicy().hasHeightForWidth());
        bnt_24->setSizePolicy(sizePolicy);
        bnt_24->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_24);

        bnt_25 = new QPushButton(verticalLayoutWidget);
        bnt_25->setObjectName(QString::fromUtf8("bnt_25"));
        bnt_25->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_25->sizePolicy().hasHeightForWidth());
        bnt_25->setSizePolicy(sizePolicy);
        bnt_25->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_3->addWidget(bnt_25);


        verticalLayout_keyboard->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        bnt_26 = new QPushButton(verticalLayoutWidget);
        bnt_26->setObjectName(QString::fromUtf8("bnt_26"));
        bnt_26->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_26->sizePolicy().hasHeightForWidth());
        bnt_26->setSizePolicy(sizePolicy);
        bnt_26->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_26);

        bnt_27 = new QPushButton(verticalLayoutWidget);
        bnt_27->setObjectName(QString::fromUtf8("bnt_27"));
        bnt_27->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_27->sizePolicy().hasHeightForWidth());
        bnt_27->setSizePolicy(sizePolicy);
        bnt_27->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_27);

        bnt_28 = new QPushButton(verticalLayoutWidget);
        bnt_28->setObjectName(QString::fromUtf8("bnt_28"));
        bnt_28->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_28->sizePolicy().hasHeightForWidth());
        bnt_28->setSizePolicy(sizePolicy);
        bnt_28->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_28);

        bnt_29 = new QPushButton(verticalLayoutWidget);
        bnt_29->setObjectName(QString::fromUtf8("bnt_29"));
        bnt_29->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_29->sizePolicy().hasHeightForWidth());
        bnt_29->setSizePolicy(sizePolicy);
        bnt_29->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_29);

        bnt_30 = new QPushButton(verticalLayoutWidget);
        bnt_30->setObjectName(QString::fromUtf8("bnt_30"));
        bnt_30->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_30->sizePolicy().hasHeightForWidth());
        bnt_30->setSizePolicy(sizePolicy);
        bnt_30->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_30);

        bnt_31 = new QPushButton(verticalLayoutWidget);
        bnt_31->setObjectName(QString::fromUtf8("bnt_31"));
        bnt_31->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_31->sizePolicy().hasHeightForWidth());
        bnt_31->setSizePolicy(sizePolicy);
        bnt_31->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_31);

        bnt_32 = new QPushButton(verticalLayoutWidget);
        bnt_32->setObjectName(QString::fromUtf8("bnt_32"));
        bnt_32->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_32->sizePolicy().hasHeightForWidth());
        bnt_32->setSizePolicy(sizePolicy);
        bnt_32->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_32);

        bnt_33 = new QPushButton(verticalLayoutWidget);
        bnt_33->setObjectName(QString::fromUtf8("bnt_33"));
        bnt_33->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_33->sizePolicy().hasHeightForWidth());
        bnt_33->setSizePolicy(sizePolicy);
        bnt_33->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_33);

        bnt_34 = new QPushButton(verticalLayoutWidget);
        bnt_34->setObjectName(QString::fromUtf8("bnt_34"));
        bnt_34->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_34->sizePolicy().hasHeightForWidth());
        bnt_34->setSizePolicy(sizePolicy);
        bnt_34->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_34);

        bnt_35 = new QPushButton(verticalLayoutWidget);
        bnt_35->setObjectName(QString::fromUtf8("bnt_35"));
        bnt_35->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_35->sizePolicy().hasHeightForWidth());
        bnt_35->setSizePolicy(sizePolicy);
        bnt_35->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_35);

        bnt_36 = new QPushButton(verticalLayoutWidget);
        bnt_36->setObjectName(QString::fromUtf8("bnt_36"));
        bnt_36->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_36->sizePolicy().hasHeightForWidth());
        bnt_36->setSizePolicy(sizePolicy);
        bnt_36->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_36);

        bnt_37 = new QPushButton(verticalLayoutWidget);
        bnt_37->setObjectName(QString::fromUtf8("bnt_37"));
        bnt_37->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_37->sizePolicy().hasHeightForWidth());
        bnt_37->setSizePolicy(sizePolicy);
        bnt_37->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_4->addWidget(bnt_37);


        verticalLayout_keyboard->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        bnt_38 = new QPushButton(verticalLayoutWidget);
        bnt_38->setObjectName(QString::fromUtf8("bnt_38"));
        bnt_38->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_38->sizePolicy().hasHeightForWidth());
        bnt_38->setSizePolicy(sizePolicy);
        bnt_38->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_38);

        bnt_39 = new QPushButton(verticalLayoutWidget);
        bnt_39->setObjectName(QString::fromUtf8("bnt_39"));
        bnt_39->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_39->sizePolicy().hasHeightForWidth());
        bnt_39->setSizePolicy(sizePolicy);
        bnt_39->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_39);

        bnt_40 = new QPushButton(verticalLayoutWidget);
        bnt_40->setObjectName(QString::fromUtf8("bnt_40"));
        bnt_40->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_40->sizePolicy().hasHeightForWidth());
        bnt_40->setSizePolicy(sizePolicy);
        bnt_40->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_40);

        bnt_41 = new QPushButton(verticalLayoutWidget);
        bnt_41->setObjectName(QString::fromUtf8("bnt_41"));
        bnt_41->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_41->sizePolicy().hasHeightForWidth());
        bnt_41->setSizePolicy(sizePolicy);
        bnt_41->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_41);

        bnt_42 = new QPushButton(verticalLayoutWidget);
        bnt_42->setObjectName(QString::fromUtf8("bnt_42"));
        bnt_42->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_42->sizePolicy().hasHeightForWidth());
        bnt_42->setSizePolicy(sizePolicy);
        bnt_42->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_42);

        bnt_43 = new QPushButton(verticalLayoutWidget);
        bnt_43->setObjectName(QString::fromUtf8("bnt_43"));
        bnt_43->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_43->sizePolicy().hasHeightForWidth());
        bnt_43->setSizePolicy(sizePolicy);
        bnt_43->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_43);

        bnt_44 = new QPushButton(verticalLayoutWidget);
        bnt_44->setObjectName(QString::fromUtf8("bnt_44"));
        bnt_44->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_44->sizePolicy().hasHeightForWidth());
        bnt_44->setSizePolicy(sizePolicy);
        bnt_44->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_44);

        bnt_45 = new QPushButton(verticalLayoutWidget);
        bnt_45->setObjectName(QString::fromUtf8("bnt_45"));
        bnt_45->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_45->sizePolicy().hasHeightForWidth());
        bnt_45->setSizePolicy(sizePolicy);
        bnt_45->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_45);

        bnt_46 = new QPushButton(verticalLayoutWidget);
        bnt_46->setObjectName(QString::fromUtf8("bnt_46"));
        bnt_46->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_46->sizePolicy().hasHeightForWidth());
        bnt_46->setSizePolicy(sizePolicy);
        bnt_46->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_46);

        bnt_47 = new QPushButton(verticalLayoutWidget);
        bnt_47->setObjectName(QString::fromUtf8("bnt_47"));
        bnt_47->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_47->sizePolicy().hasHeightForWidth());
        bnt_47->setSizePolicy(sizePolicy);
        bnt_47->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_47);

        bnt_48 = new QPushButton(verticalLayoutWidget);
        bnt_48->setObjectName(QString::fromUtf8("bnt_48"));
        bnt_48->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_48->sizePolicy().hasHeightForWidth());
        bnt_48->setSizePolicy(sizePolicy);
        bnt_48->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_48);

        bnt_49 = new QPushButton(verticalLayoutWidget);
        bnt_49->setObjectName(QString::fromUtf8("bnt_49"));
        bnt_49->setEnabled(false);
        sizePolicy.setHeightForWidth(bnt_49->sizePolicy().hasHeightForWidth());
        bnt_49->setSizePolicy(sizePolicy);
        bnt_49->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(bnt_49);


        verticalLayout_keyboard->addLayout(horizontalLayout_5);

        space = new QPushButton(verticalLayoutWidget);
        space->setObjectName(QString::fromUtf8("space"));
        space->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(space->sizePolicy().hasHeightForWidth());
        space->setSizePolicy(sizePolicy1);
        space->setStyleSheet(QString::fromUtf8("border-radius: 20px;  \n"
"border: 2px solid #094065;\n"
"background-color: rgb(246, 245, 244);"));

        verticalLayout_keyboard->addWidget(space);

        forText = new QLabel(centralwidget);
        forText->setObjectName(QString::fromUtf8("forText"));
        forText->setGeometry(QRect(16, 180, 871, 51));
        forText->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 905, 27));
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
        timer->setText(QCoreApplication::translate("MainWindow", "Time, sec", nullptr));
        simb->setText(QCoreApplication::translate("MainWindow", "Simbols in minute", nullptr));
        accur->setText(QCoreApplication::translate("MainWindow", "Accuracy, %", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        end->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Belarusian", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "German", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "French", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "English", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\241hinesse", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Arabic", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Hebrew", nullptr));

        openFile->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        bnt_0->setText(QString());
        bnt_1->setText(QString());
        bnt_2->setText(QString());
        bnt_3->setText(QString());
        bnt_4->setText(QString());
        bnt_5->setText(QString());
        bnt_6->setText(QString());
        bnt_7->setText(QString());
        bnt_8->setText(QString());
        bnt_9->setText(QString());
        bnt_10->setText(QString());
        bnt_11->setText(QString());
        bnt_12->setText(QString());
        bnt_13->setText(QString());
        bnt_14->setText(QString());
        bnt_15->setText(QString());
        bnt_16->setText(QString());
        bnt_17->setText(QString());
        bnt_18->setText(QString());
        bnt_19->setText(QString());
        bnt_20->setText(QString());
        bnt_21->setText(QString());
        bnt_22->setText(QString());
        bnt_23->setText(QString());
        bnt_24->setText(QString());
        bnt_25->setText(QString());
        bnt_26->setText(QString());
        bnt_27->setText(QString());
        bnt_28->setText(QString());
        bnt_29->setText(QString());
        bnt_30->setText(QString());
        bnt_31->setText(QString());
        bnt_32->setText(QString());
        bnt_33->setText(QString());
        bnt_34->setText(QString());
        bnt_35->setText(QString());
        bnt_36->setText(QString());
        bnt_37->setText(QString());
        bnt_38->setText(QString());
        bnt_39->setText(QString());
        bnt_40->setText(QString());
        bnt_41->setText(QString());
        bnt_42->setText(QString());
        bnt_43->setText(QString());
        bnt_44->setText(QString());
        bnt_45->setText(QString());
        bnt_46->setText(QString());
        bnt_47->setText(QString());
        bnt_48->setText(QString());
        bnt_49->setText(QString());
        space->setText(QCoreApplication::translate("MainWindow", "space", nullptr));
        forText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
