#pragma once
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestEditor {
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *testTitleEdit;
    QTextEdit *testDescriptionEdit;
    QComboBox *questionTypeCombo;
    QLineEdit *questionTextEdit;
    QLineEdit *optionEdit;
    QLineEdit *answerEdit;
    QPushButton *addQuestionButton;
    QPushButton *saveTestButton;

    void setupUi(QWidget *TestEditor) {
        if (TestEditor->objectName().isEmpty())
            TestEditor->setObjectName(QString::fromUtf8("TestEditor"));
        verticalLayout = new QVBoxLayout(TestEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        testTitleEdit = new QLineEdit(TestEditor);
        testTitleEdit->setObjectName(QString::fromUtf8("testTitleEdit"));
        testTitleEdit->setPlaceholderText(QString::fromUtf8("Test Title"));
        verticalLayout->addWidget(testTitleEdit);
        testDescriptionEdit = new QTextEdit(TestEditor);
        testDescriptionEdit->setObjectName(QString::fromUtf8("testDescriptionEdit"));
        testDescriptionEdit->setPlaceholderText(QString::fromUtf8("Test Description"));
        verticalLayout->addWidget(testDescriptionEdit);
        questionTypeCombo = new QComboBox(TestEditor);
        questionTypeCombo->setObjectName(QString::fromUtf8("questionTypeCombo"));
        questionTypeCombo->addItem(QString::fromUtf8("single"));
        questionTypeCombo->addItem(QString::fromUtf8("multi"));
        questionTypeCombo->addItem(QString::fromUtf8("text"));
        verticalLayout->addWidget(questionTypeCombo);
        questionTextEdit = new QLineEdit(TestEditor);
        questionTextEdit->setObjectName(QString::fromUtf8("questionTextEdit"));
        questionTextEdit->setPlaceholderText(QString::fromUtf8("Question Text"));
        verticalLayout->addWidget(questionTextEdit);
        optionEdit = new QLineEdit(TestEditor);
        optionEdit->setObjectName(QString::fromUtf8("optionEdit"));
        optionEdit->setPlaceholderText(QString::fromUtf8("Option (for single/multi)"));
        verticalLayout->addWidget(optionEdit);
        answerEdit = new QLineEdit(TestEditor);
        answerEdit->setObjectName(QString::fromUtf8("answerEdit"));
        answerEdit->setPlaceholderText(QString::fromUtf8("Answer (for text)"));
        verticalLayout->addWidget(answerEdit);
        addQuestionButton = new QPushButton(TestEditor);
        addQuestionButton->setObjectName(QString::fromUtf8("addQuestionButton"));
        addQuestionButton->setText(QString::fromUtf8("Add Question"));
        verticalLayout->addWidget(addQuestionButton);
        saveTestButton = new QPushButton(TestEditor);
        saveTestButton->setObjectName(QString::fromUtf8("saveTestButton"));
        saveTestButton->setText(QString::fromUtf8("Save Test"));
        verticalLayout->addWidget(saveTestButton);

        retranslateUi(TestEditor);
        QMetaObject::connectSlotsByName(TestEditor);
    }

    void retranslateUi(QWidget *TestEditor) {
        TestEditor->setWindowTitle(QCoreApplication::translate("TestEditor", "TestEditor", nullptr));
        testTitleEdit->setPlaceholderText(QCoreApplication::translate("TestEditor", "Test Title", nullptr));
        testDescriptionEdit->setPlaceholderText(QCoreApplication::translate("TestEditor", "Test Description", nullptr));
        questionTypeCombo->setItemText(0, QCoreApplication::translate("TestEditor", "single", nullptr));
        questionTypeCombo->setItemText(1, QCoreApplication::translate("TestEditor", "multi", nullptr));
        questionTypeCombo->setItemText(2, QCoreApplication::translate("TestEditor", "text", nullptr));
        questionTextEdit->setPlaceholderText(QCoreApplication::translate("TestEditor", "Question Text", nullptr));
        optionEdit->setPlaceholderText(QCoreApplication::translate("TestEditor", "Option (for single/multi)", nullptr));
        answerEdit->setPlaceholderText(QCoreApplication::translate("TestEditor", "Answer (for text)", nullptr));
        addQuestionButton->setText(QCoreApplication::translate("TestEditor", "Add Question", nullptr));
        saveTestButton->setText(QCoreApplication::translate("TestEditor", "Save Test", nullptr));
    }
};

namespace Ui {
    class TestEditor: public Ui_TestEditor {};
} // namespace Ui

QT_END_NAMESPACE
