#pragma once
#include <QString>
#include "jsonserializable.h"

struct Answer : public JsonSerializable {
    QString text;
    bool selected = false;

    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& obj) override;
};
