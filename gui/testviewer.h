#pragma once
#include <QWidget>
#include "core/testmanager.h"

namespace Ui {
class TestViewer;
}

class TestViewer : public QWidget {
    Q_OBJECT
public:
    explicit TestViewer(QWidget *parent = nullptr);
    ~TestViewer();

private slots:
    void on_loadTestsButton_clicked();

private:
    Ui::TestViewer *ui;
    TestManager testManager;
};
