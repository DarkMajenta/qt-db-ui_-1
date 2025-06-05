#include "utils.h"
#include <QFile>
#include <QUuid>

namespace JsonHelper {
    QJsonDocument loadJsonFromFile(const QString& path) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly)) return QJsonDocument();
        QByteArray data = file.readAll();
        return QJsonDocument::fromJson(data);
    }

    bool saveJsonToFile(const QString& path, const QJsonDocument& doc) {
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly)) return false;
        file.write(doc.toJson());
        return true;
    }
}

QString generateId() {
    return QUuid::createUuid().toString(QUuid::WithoutBraces);
}
