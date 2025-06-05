#pragma once
#include <QWidget>
#include "../core/test.h"
#include "../core/testmanager.h"

namespace Ui {
class TestEditor;
}

class TestEditor : public QWidget {
    Q_OBJECT
public:
    explicit TestEditor(QWidget *parent = nullptr);
    ~TestEditor();

private slots:
    void on_addQuestionButton_clicked();
    void on_saveTestButton_clicked();

private:
    Ui::TestEditor *ui;
    TestManager testManager;
    Test currentTest;
};
