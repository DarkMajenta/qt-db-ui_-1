#pragma once
#include <QJsonObject>

class JsonSerializable {
public:
    virtual QJsonObject toJson() const = 0;
    virtual void fromJson(const QJsonObject& obj) = 0;
    virtual ~JsonSerializable() {}
};
