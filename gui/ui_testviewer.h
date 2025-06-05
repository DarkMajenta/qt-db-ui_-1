#pragma once
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestViewer {
public:
    QVBoxLayout *verticalLayout;
    QPushButton *loadTestsButton;
    QListWidget *testListWidget;

    void setupUi(QWidget *TestViewer) {
        if (TestViewer->objectName().isEmpty())
            TestViewer->setObjectName(QString::fromUtf8("TestViewer"));
        verticalLayout = new QVBoxLayout(TestViewer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadTestsButton = new QPushButton(TestViewer);
        loadTestsButton->setObjectName(QString::fromUtf8("loadTestsButton"));
        loadTestsButton->setText(QString::fromUtf8("Load Tests"));
        verticalLayout->addWidget(loadTestsButton);
        testListWidget = new QListWidget(TestViewer);
        testListWidget->setObjectName(QString::fromUtf8("testListWidget"));
        verticalLayout->addWidget(testListWidget);

        retranslateUi(TestViewer);
        QMetaObject::connectSlotsByName(TestViewer);
    }

    void retranslateUi(QWidget *TestViewer) {
        TestViewer->setWindowTitle(QCoreApplication::translate("TestViewer", "TestViewer", nullptr));
        loadTestsButton->setText(QCoreApplication::translate("TestViewer", "Load Tests", nullptr));
    }
};

namespace Ui {
    class TestViewer: public Ui_TestViewer {};
} // namespace Ui

QT_END_NAMESPACE
