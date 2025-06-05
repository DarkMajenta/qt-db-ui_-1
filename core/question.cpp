#include "question.h"
#include <QJsonArray>

QJsonObject Question::toJson() const {
    QJsonObject obj;
    obj["text"] = text;
    obj["type"] = type;
    if (type == "text") {
        obj["answer"] = answer;
    } else {
        QJsonArray optionsArray;
        for (const auto& opt : options) {
            optionsArray.append(opt.toJson());
        }
        obj["options"] = optionsArray;
    }
    return obj;
}

void Question::fromJson(const QJsonObject& obj) {
    text = obj["text"].toString();
    type = obj["type"].toString();
    if (type == "text") {
        answer = obj["answer"].toString();
    } else {
        options.clear();
        QJsonArray optionsArray = obj["options"].toArray();
        for (const auto& val : optionsArray) {
            Answer ans;
            ans.fromJson(val.toObject());
            options.append(ans);
        }
    }
}
