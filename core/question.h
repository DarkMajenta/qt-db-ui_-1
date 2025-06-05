#pragma once
#include <QString>
#include <QList>
#include "answer.h"
#include "jsonserializable.h"

struct Question : public JsonSerializable {
    QString text;
    QString type; // "single", "multi", "text"
    QList<Answer> options;
    QString answer; // For text type questions

    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& obj) override;
};
