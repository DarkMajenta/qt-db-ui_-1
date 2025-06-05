#include "testeditor.h"
#include "ui_testeditor.h"
#include "../core/utils.h"

TestEditor::TestEditor(QWidget *parent)
    : QWidget(parent), ui(new Ui::TestEditor) {
    ui->setupUi(this);
}

TestEditor::~TestEditor() {
    delete ui;
}

void TestEditor::on_addQuestionButton_clicked() {
    Question q;
    q.text = ui->questionTextEdit->text();
    q.type = ui->questionTypeCombo->currentText();
    if (q.type != "text") {
        Answer ans;
        ans.text = ui->optionEdit->text();
        q.options.append(ans);
    } else {
        q.answer = ui->answerEdit->text();
    }
    currentTest.questions.append(q);
    ui->questionTextEdit->clear();
    ui->optionEdit->clear();
    ui->answerEdit->clear();
}

void TestEditor::on_saveTestButton_clicked() {
    currentTest.title = ui->testTitleEdit->text();
    currentTest.description = ui->testDescriptionEdit->toPlainText();
    QString filePath = QString("data/tests/%1.json").arg(generateId());
    testManager.saveTest(filePath, currentTest);
}
