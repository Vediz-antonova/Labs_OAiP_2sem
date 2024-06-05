#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QFormLayout>
#include <QLineEdit>
#include <QCheckBox>
#include <QSpinBox>
#include <QDialogButtonBox>

#include "Car.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initUserInput();
    Car& getUserInitRef();

    Car user;

    void dialog(){
        QDialog dialog(this);
        QFormLayout form(&dialog);

        // Добавление полей для ввода
        QLineEdit *yearInput = new QLineEdit(&dialog);
        QLineEdit *costInput = new QLineEdit(&dialog);
        QLineEdit *typeInput = new QLineEdit(&dialog);
        QCheckBox *isSummerTiresInput = new QCheckBox(&dialog);
        QLineEdit *modelInput = new QLineEdit(&dialog);

        QSpinBox *wheelsYearInput0 = new QSpinBox(&dialog);
        wheelsYearInput0->setMaximum(9999);
        QSpinBox *wheelsYearInput1 = new QSpinBox(&dialog);
        wheelsYearInput1->setMaximum(9999);
        QSpinBox *wheelsYearInput2 = new QSpinBox(&dialog);
        wheelsYearInput2->setMaximum(9999);
        QSpinBox *wheelsYearInput3 = new QSpinBox(&dialog);
        wheelsYearInput3->setMaximum(9999);

        form.addRow("Year", yearInput);
        form.addRow("Cost", costInput);
        form.addRow("Type", typeInput);
        form.addRow("isSummerTires", isSummerTiresInput);
        form.addRow("Model", modelInput);
        form.addRow("Wheels Year 0", wheelsYearInput0);
        form.addRow("Wheels Year 1", wheelsYearInput1);
        form.addRow("Wheels Year 2", wheelsYearInput2);
        form.addRow("Wheels Year 3", wheelsYearInput3);

        // Добавление кнопок Ок и Отмена
        QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &dialog);
        form.addRow(&buttonBox);
        QObject::connect(&buttonBox, SIGNAL(accepted()), &dialog, SLOT(accept()));
        QObject::connect(&buttonBox, SIGNAL(rejected()), &dialog, SLOT(reject()));

        // Отображение диалогового окна
        if (dialog.exec() == QDialog::Accepted) {
            int year = yearInput->text().toInt();
            double cost = costInput->text().toDouble();
            QChar type = typeInput->text().at(0);
            bool isSummerTires = isSummerTiresInput->isChecked();
            QString modelString = modelInput->text();
            QChar model[50];
            for (int i = 0; i < modelString.size() && i < 50; ++i) {
                model[i] = modelString.at(i);
            }

            int wheelsYear[4];
            wheelsYear[0] = wheelsYearInput0->value();
            wheelsYear[1] = wheelsYearInput1->value();
            wheelsYear[2] = wheelsYearInput2->value();
            wheelsYear[3] = wheelsYearInput3->value();

            user.year = year;
            user.cost = cost;
            user.type = type;
            user.isSummerTires = isSummerTires;
            for (int i = 0; i < 50; ++i) {
                user.model[i] = model[i];
            }
            for (int i = 0; i < 4; ++i) {
                user.wheelsYear[i] = wheelsYear[i];
            }
        }
    }

public slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    Car strInit;
    Car codeInit;
    Car ptrInit;
    Car refInit;
    Car *ptr = &ptrInit;
    Car &ref = refInit;

    void initWithStr();
    void initWithCode();
    void initWithPtr();
    void initWithRef();
};
#endif // MAINWINDOW_H
