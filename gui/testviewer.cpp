#include "testviewer.h"
#include "./ui_testviewer.h"

TestViewer::TestViewer(QWidget *parent)
    : QWidget(parent), ui(new Ui::TestViewer) {
    ui->setupUi(this);
    testManager.loadTests("data/tests/");
}

TestViewer::~TestViewer() {
    delete ui;
}

void TestViewer::on_loadTestsButton_clicked() {
    ui->testListWidget->clear();
    for (const auto& test : testManager.tests) {
        ui->testListWidget->addItem(test.title);
    }
}
