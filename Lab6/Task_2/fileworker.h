#ifndef FILEWORKER_H
#define FILEWORKER_H

#include <QStringList>
#include <QFile>
#include <QTextBrowser>
#include <QTextStream>
#include <fstream>
#include <QMessageBox>
#include <QInputDialog>

#include "../Task_1/Car.h"
#include "../Task_1/mainwindow.h"

class FileWorker
{
public:
    FileWorker(QTextBrowser*);

    QString inputText;

    const QStringList files = {"AntonavaLab6.txt", "AntonavaLab6_0.txt",
                               "AntonavaLab6_1.txt", "AntonavaLab6_2.bin", "AntonavaLab6_3.txt"};
    void CreateNonExistingFiles();

    void SaveTextToFile(const QString&);
    void LoadTextFromFile(const QString&);

    void SaveArrayToFile(const QString&);
    void LoadArrayFromFile(const QString&);

    void SaveStructToFile(const QString&);
    void LoadStructsFromFile(const QString&);

    void SaveStructToBinaryFile(const QString&);
    void LoadStructsFromBinaryFile(const QString&);

    void SaveSentenceToFile(const QString&);
    void LoadSentencesFromFile(const QString&);
private:
    Car a;

    QTextBrowser* output;
    QTextStream outputStream;
    QString outputText;
};

#endif // FILEWORKER_H
