#include "answer.h"

QJsonObject Answer::toJson() const {
    QJsonObject obj;
    obj["text"] = text;
    obj["selected"] = selected;
    return obj;
}

void Answer::fromJson(const QJsonObject& obj) {
    text = obj["text"].toString();
    selected = obj["selected"].toBool();
}
