#include "usermanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>

bool UserManager::load(const QString& path) {
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) return false;

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    if (!doc.isArray()) return false;

    users.clear();
    for (auto value : doc.array()) {
        if (value.isObject()) {
            User user;
            user.fromJson(value.toObject());
            users.append(user);
        }
    }
    return true;
}

bool UserManager::save(const QString& path) {
    QJsonArray array;
    for (const auto& user : users)
        array.append(user.toJson());

    QFile file(path);
    if (!file.open(QIODevice::WriteOnly)) return false;

    file.write(QJsonDocument(array).toJson());
    return true;
}

User* UserManager::findByLogin(const QString& login) {
    for (auto& user : users) {
        if (user.login == login)
            return &user;
    }
    return nullptr;
}
