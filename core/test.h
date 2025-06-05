#pragma once
#include <QString>
#include <QList>
#include "question.h"
#include "jsonserializable.h"

struct Test : public JsonSerializable {
    QString title;
    QString description;
    QList<Question> questions;

    QJsonObject toJson() const override;
    void fromJson(const QJsonObject& obj) override;
};
