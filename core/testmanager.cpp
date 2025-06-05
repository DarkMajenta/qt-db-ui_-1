#include "testmanager.h"
#include <QDir>
#include <QJsonDocument>

bool TestManager::loadTests(const QString& dirPath) {
    QDir dir(dirPath);
    QStringList files = dir.entryList(QStringList() << "*.json", QDir::Files);
    tests.clear();
    for (const QString& file : files) {
        QFile jsonFile(dir.filePath(file));
        if (jsonFile.open(QIODevice::ReadOnly)) {
            QJsonDocument doc = QJsonDocument::fromJson(jsonFile.readAll());
            if (doc.isObject()) {
                Test test;
                test.fromJson(doc.object());
                tests.append(test);
            }
        }
    }
    return !tests.isEmpty();
}

bool TestManager::saveTest(const QString& filePath, const Test& test) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) return false;
    file.write(QJsonDocument(test.toJson()).toJson());
    return true;
}
