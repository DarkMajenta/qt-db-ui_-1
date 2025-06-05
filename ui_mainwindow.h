#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *loginButton;
    QPushButton *createTestButton;
    QPushButton *viewTestsButton;
    QPushButton *passTestButton;
    QPushButton *settingsButton;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setText(QString::fromUtf8("Login"));
        verticalLayout->addWidget(loginButton);
        createTestButton = new QPushButton(centralwidget);
        createTestButton->setObjectName(QString::fromUtf8("createTestButton"));
        createTestButton->setText(QString::fromUtf8("Create Test"));
        verticalLayout->addWidget(createTestButton);
        viewTestsButton = new QPushButton(centralwidget);
        viewTestsButton->setObjectName(QString::fromUtf8("viewTestsButton"));
        viewTestsButton->setText(QString::fromUtf8("View Tests"));
        verticalLayout->addWidget(viewTestsButton);
        passTestButton = new QPushButton(centralwidget);
        passTestButton->setObjectName(QString::fromUtf8("passTestButton"));
        passTestButton->setText(QString::fromUtf8("Pass Test"));
        verticalLayout->addWidget(passTestButton);
        settingsButton = new QPushButton(centralwidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setText(QString::fromUtf8("Settings"));
        verticalLayout->addWidget(settingsButton);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        verticalLayout->addWidget(stackedWidget);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QMetaObject::connectSlotsByName(MainWindow);
    }

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Test Constructor", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        createTestButton->setText(QCoreApplication::translate("MainWindow", "Create Test", nullptr));
        viewTestsButton->setText(QCoreApplication::translate("MainWindow", "View Tests", nullptr));
        passTestButton->setText(QCoreApplication::translate("MainWindow", "Pass Test", nullptr));
        settingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    }
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE
