#pragma once
#include <QString>
#include <QJsonDocument>

namespace JsonHelper {
    QJsonDocument loadJsonFromFile(const QString& path);
    bool saveJsonToFile(const QString& path, const QJsonDocument& doc);
}

QString generateId();
