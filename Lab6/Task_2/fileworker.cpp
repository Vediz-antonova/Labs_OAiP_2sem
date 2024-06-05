#include "fileworker.h"

FileWorker::FileWorker(QTextBrowser* browser)
    : outputStream(&outputText)
{
    output = browser;
}

void FileWorker::CreateNonExistingFiles()
{
    for (auto fileName : files)
    {
        QFile file(fileName);
        if (!file.exists())
        {
            if (!file.open(QIODevice::WriteOnly))
            {
                QMessageBox::warning(nullptr, QMessageBox::tr("File Creation"), "Failed to create file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
                return;
            }
            file.close();
        }
    }
}

void FileWorker::SaveTextToFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    QString text = QInputDialog::getText(nullptr, QInputDialog::tr("Input"), "Enter text:");
    for (int i = 0; i < text.length(); ++i)
    {
        fileStream << text[i];
    }
    file.close();
}

void FileWorker::LoadTextFromFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    while (!fileStream.atEnd())
    {
        QChar c;
        fileStream >> c;
        outputStream << c;
    }
    file.close();

    output->setText(outputText);
    outputText.clear();
}

void FileWorker::SaveArrayToFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }

    int size = QInputDialog::getInt(nullptr, QInputDialog::tr("Array creation"), "Enter number of array elements:");
    float f;

    for (int i = 0; i < size; ++i)
    {
        f = QInputDialog::getDouble(nullptr, QInputDialog::tr("Input"), "Enter element #" + QString::number(i) + ":");
        fileStream << f << '_';
    }
    file.close();
}

void FileWorker::LoadArrayFromFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    while (!fileStream.atEnd())
    {
        QString data = fileStream.readAll();
        QStringList floats = data.split("_", Qt::SkipEmptyParts);
        for (auto f : floats)
        {
            outputStream << f << " ";
        }
    }
    file.close();

    output->setText(outputText);
    outputText.clear();
}

void FileWorker::SaveSentenceToFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    QString text = QInputDialog::getText(nullptr, QInputDialog::tr("Input"), "Enter sentence:");;
    fileStream << text << "\n";
    file.close();
}

void FileWorker::LoadSentencesFromFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    while (!fileStream.atEnd())
    {
        QString s = fileStream.readLine();
        outputStream << s << "\n";
    }
    file.close();

    output->setText(outputText);
    outputText.clear();
}

void FileWorker::SaveStructToFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    MainWindow mainWindow;
    mainWindow.dialog();
    Car temp = mainWindow.user;

    QString text = QString::number(temp.year) + "\n" + QString::number(temp.cost) + "\n" + QString(temp.type) + "\n" + (temp.isSummerTires ? "true" : "false") + "\n" + QString(temp.model) + "\n";
    for (int i = 0; i < 4; ++i)
    {
        text += QString::number(temp.wheelsYear[i]) + "\n";
    }
    fileStream << text;
    file.close();
}

void FileWorker::LoadStructsFromFile(const QString &fileName)
{
    QFile file(fileName);
    QTextStream fileStream(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    while (!fileStream.atEnd())
    {
        QStringList data;
        for (int i = 0; i < 9; ++i)
        {
            data.append(fileStream.readLine());
        }

        Car temp;
        temp.year = data[0].toInt();
        temp.cost = data[1].toDouble();
        temp.type = data[2][0].toLatin1();
        temp.isSummerTires = data[3] == "true" ? true : false;
        for (int i = 0; i < 50 - 1; ++i)
        {
            temp.model[i] = data[4][i].toLatin1();
            temp.model[i + 1] = '\0';
        }
        for (int i = 0; i < 4; ++i)
        {
            temp.wheelsYear[i] = data[i + 5].toInt();
        }

        outputStream << temp.year << "|" << temp.cost << "|" << QString(temp.type) << "|" << (temp.isSummerTires ? "true" : "false") << "|" << QString(temp.model) << "|";
        for (int i = 0; i < 4; ++i)
        {
            outputStream << temp.wheelsYear[i] << (i == 4 - 1 ? "\n" : "|");
        }
    }
    file.close();

    output->setText(outputText);
    outputText.clear();
}

void FileWorker::SaveStructToBinaryFile(const QString &fileName)
{
    QFile file(fileName);
    QDataStream fileStream(&file);

    if (!file.open(QIODevice::Append))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    MainWindow mainWindow;
    mainWindow.dialog();
    Car temp = mainWindow.user;

    const char* data = reinterpret_cast<const char*>(&temp); // преобразование указателя
    int size = sizeof(temp); // получение размера структуры
    fileStream.writeRawData(data, size); // запись данных в файл

    file.close();
}

void FileWorker::LoadStructsFromBinaryFile(const QString &fileName)
{
    QFile file(fileName);
    QDataStream fileStream(&file);

    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(nullptr, QMessageBox::tr("File Open"), "Failed to open file: " + fileName, QMessageBox::Ok | QMessageBox::NoButton);
        return;
    }
    while (!fileStream.atEnd())
    {
        Car temp;
        fileStream.readRawData(reinterpret_cast<char*>(&temp) ,sizeof(temp));
        outputStream << temp.year << "|" << temp.cost << "|" << QString(temp.type) << "|" << (temp.isSummerTires ? "true" : "false") << "|" << QString(temp.model) << "|";
        for (int i = 0; i < 4; ++i)
        {
            outputStream << temp.wheelsYear[i] << (i == 4 - 1 ? "\n" : "|");
        }
    }
    file.close();
    output->setText(outputText);
    outputText.clear();
}
