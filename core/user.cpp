#include "user.h"

QJsonObject User::toJson() const {
    QJsonObject p;
    p["can_create"] = canCreate;
    p["can_view"] = canView;
    p["can_pass"] = canPass;

    QJsonObject obj;
    obj["login"] = login;
    obj["active"] = active;
    obj["permissions"] = p;
    return obj;
}

void User::fromJson(const QJsonObject& obj) {
    login = obj["login"].toString();
    active = obj["active"].toBool();
    auto p = obj["permissions"].toObject();
    canCreate = p["can_create"].toBool();
    canView = p["can_view"].toBool();
    canPass = p["can_pass"].toBool();
}
