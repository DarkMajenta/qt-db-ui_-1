#pragma once
#include <QWidget>
#include "../core/testmanager.h"

namespace Ui {
class TestPasser;
}

class TestPasser : public QWidget {
    Q_OBJECT
public:
    explicit TestPasser(QWidget *parent = nullptr);
    ~TestPasser();

private slots:
    void on_loadTestsButton_clicked();
    void on_submitButton_clicked();

private:
    Ui::TestPasser *ui;
    TestManager testManager;
    int currentQuestionIndex;
};
