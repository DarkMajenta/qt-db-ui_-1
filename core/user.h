#pragma once
#include <QString>
#include <QJsonObject>
#include "jsonserializable.h"

class User : public JsonSerializable {
public:
    QString login;
    bool active;
    bool canCreate;
    bool canView;
    bool canPass;

    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& obj) override;
};
