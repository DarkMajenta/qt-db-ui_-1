#include "testpasser.h"
#include "./ui_testpasser.h"
#include <QCheckBox>

TestPasser::TestPasser(QWidget *parent)
    : QWidget(parent), ui(new Ui::TestPasser), currentQuestionIndex(0) {
    ui->setupUi(this);
    testManager.loadTests("data/tests/");
}

TestPasser::~TestPasser() {
    delete ui;
}

void TestPasser::on_loadTestsButton_clicked() {
    ui->testListWidget->clear();
    for (const auto& test : testManager.tests) {
        ui->testListWidget->addItem(test.title);
    }
}

void TestPasser::on_submitButton_clicked() {
    // Placeholder for submitting answers
    QString resultFile = QString("data/results/%1.json").arg(generateId());
    // Save results logic here
}
