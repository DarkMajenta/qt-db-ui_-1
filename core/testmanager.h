#pragma once
#include "test.h"
#include <QVector>

class TestManager {
public:
    QVector<Test> tests;

    bool loadTests(const QString& dirPath);
    bool saveTest(const QString& filePath, const Test& test);
};
