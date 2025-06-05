#pragma once
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestPasser {
public:
    QVBoxLayout *verticalLayout;
    QPushButton *loadTestsButton;
    QListWidget *testListWidget;
    QLabel *questionLabel;
    QVBoxLayout *optionsLayout;
    QPushButton *submitButton;

    void setupUi(QWidget *TestPasser) {
        if (TestPasser->objectName().isEmpty())
            TestPasser->setObjectName(QString::fromUtf8("TestPasser"));
        verticalLayout = new QVBoxLayout(TestPasser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadTestsButton = new QPushButton(TestPasser);
        loadTestsButton->setObjectName(QString::fromUtf8("loadTestsButton"));
        loadTestsButton->setText(QString::fromUtf8("Load Tests"));
        verticalLayout->addWidget(loadTestsButton);
        testListWidget = new QListWidget(TestPasser);
        testListWidget->setObjectName(QString::fromUtf8("testListWidget"));
        verticalLayout->addWidget(testListWidget);
        questionLabel = new QLabel(TestPasser);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        verticalLayout->addWidget(questionLabel);
        optionsLayout = new QVBoxLayout();
        optionsLayout->setObjectName(QString::fromUtf8("optionsLayout"));
        verticalLayout->addLayout(optionsLayout);
        submitButton = new QPushButton(TestPasser);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setText(QString::fromUtf8("Submit"));
        verticalLayout->addWidget(submitButton);

        retranslateUi(TestPasser);
        QMetaObject::connectSlotsByName(TestPasser);
    }

    void retranslateUi(QWidget *TestPasser) {
        TestPasser->setWindowTitle(QCoreApplication::translate("TestPasser", "TestPasser", nullptr));
        loadTestsButton->setText(QCoreApplication::translate("TestPasser", "Load Tests", nullptr));
        submitButton->setText(QCoreApplication::translate("TestPasser", "Submit", nullptr));
    }
};

namespace Ui {
    class TestPasser: public Ui_TestPasser {};
} // namespace Ui

QT_END_NAMESPACE
