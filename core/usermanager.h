#pragma once
#include "user.h"
#include <QVector>

class UserManager {
public:
    QVector<User> users;

    bool load(const QString& filePath);
    bool save(const QString& filePath);
    User* findByLogin(const QString& login);
};
