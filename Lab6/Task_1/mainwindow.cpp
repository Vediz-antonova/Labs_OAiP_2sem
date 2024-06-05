#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initWithStr();
    initWithCode();
    initWithPtr();
    initWithRef();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWithStr()
{
    strInit = {1989, 3000.85, 'P', true, {'T', 'o', 'y', 'o', 't', 'o'}, {1910, 1911, 1911, 1910}};
    QString str = QString::number(strInit.year) + "|" + QString::number(strInit.cost) + "|" + strInit.type + "|" + (strInit.isSummerTires? "true" : "false") + "|" + QString(strInit.model) + "|";

    for (int i = 0; i < 4; ++i)
    {
        str += QString::number(strInit.wheelsYear[i]) + (i == 3 ? "" : ", ");
    }
    ui->textBrowser->setText(str);
}

void MainWindow::initWithCode()
{
    codeInit.year = 2010;
    codeInit.cost = 50000;
    codeInit.type = 'T';
    codeInit.isSummerTires = true;
    char codeInitModel[] = "Volvo";
    for (int i = 0; i < 5; ++i)
    {
        codeInit.model[i] = codeInitModel[i];
    }
    int codeInitwheelsYear[] = {1914,1918,1922,1914};
    for (int i = 0; i < 4; ++i)
    {
        codeInit.wheelsYear[i] = codeInitwheelsYear[i];
    }

    QString str = QString::number(codeInit.year) + "|" + QString::number(codeInit.cost) + "|" + codeInit.type + "|" + (codeInit.isSummerTires ? "true" : "false") + "|" + QString(codeInit.model) + "|";
    for (int i = 0; i < 4; ++i)
    {
        str += QString::number(codeInit.wheelsYear[i]) + (i == 3 ? "" : ", ");
    }
    ui->textBrowser_2->setText(str);
}

void MainWindow::initWithPtr()
{
    ptr->year = 2005;
    ptr->cost = 1000300.5;
    ptr->type = 'P';
    ptr->isSummerTires = false;
    char ptrInitModel[] = "Land Rover";
    for (int i = 0; i < 10; ++i)
    {
        ptr->model[i] = ptrInitModel[i];
    }
    int ptrInitwheelsYear[] = {1924,1925,1925,1925};
    for (int i = 0; i < 4; ++i)
    {
        ptr->wheelsYear[i] = ptrInitwheelsYear[i];
    }

    QString str = QString::number(ptr->year) + "|" + QString::number(ptr->cost) + "|" + ptr->type + "|" + (ptr->isSummerTires ? "true" : "false") + "|" + QString(ptr->model) + "|";
    for (int i = 0; i < 4; ++i)
    {
        str += QString::number(ptr->wheelsYear[i]) + (i == 3 ? "" : ", ");
    }
    ui->textBrowser_3->setText(str);
}

void MainWindow::initWithRef()
{
    ref.year = 1920;
    ref.cost = 230040.2675;
    ref.type = 'S';
    ref.isSummerTires = true;
    char refInitModel[] = "Jaguar";
    for (int i = 0; i < 6; ++i)
    {
        ref.model[i] = refInitModel[i];
    }
    int refInitwheelsYear[] = {1922,1923,1922,1920};
    for (int i = 0; i < 4; ++i)
    {
        ref.wheelsYear[i] = refInitwheelsYear[i];
    }

    QString str = QString::number(ref.year) + "|" + QString::number(ref.cost) + "|" + ref.type + "|" + (ref.isSummerTires ? "true" : "false") + "|" + QString(ref.model)+ "|";
    for (int i = 0; i < 4; ++i)
    {
        str += QString::number(ref.wheelsYear[i]) + (i == 3 ? "" : ", ");
    }
    ui->textBrowser_4->setText(str);
}

void MainWindow::initUserInput()
{
    QString str = QString::number(user.year) + "|" + QString::number(user.cost) + "|" + user.type + "|" + (user.isSummerTires ? "true" : "false") + "|" + QString(user.model) + "|";
    for (int i = 0; i < 4; ++i)
    {
        str += QString::number(user.wheelsYear[i]) + (i == 3 ? "" : ", ");
    }
    ui->textBrowser_5->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    dialog();

    try {
        initUserInput();
    } catch (...){
        return;
    }
}
