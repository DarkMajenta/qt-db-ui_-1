#include "test.h"
#include <QJsonArray>

QJsonObject Test::toJson() const {
    QJsonObject obj;
    obj["title"] = title;
    obj["description"] = description;
    QJsonArray questionsArray;
    for (const auto& q : questions) {
        questionsArray.append(q.toJson());
    }
    obj["questions"] = questionsArray;
    return obj;
}

void Test::fromJson(const QJsonObject& obj) {
    title = obj["title"].toString();
    description = obj["description"].toString();
    questions.clear();
    QJsonArray questionsArray = obj["questions"].toArray();
    for (const auto& val : questionsArray) {
        Question q;
        q.fromJson(val.toObject());
        questions.append(q);
    }
}
