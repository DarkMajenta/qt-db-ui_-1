#pragma once
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow {
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *loginEdit;
    QPushButton *loginButton;
    QLabel *statusLabel;

    void setupUi(QDialog *LoginWindow) {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(400, 200);
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LoginWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Login:"));
        verticalLayout->addWidget(label);
        loginEdit = new QLineEdit(LoginWindow);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));
        verticalLayout->addWidget(loginEdit);
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setText(QString::fromUtf8("Вход"));
        verticalLayout->addWidget(loginButton);
        statusLabel = new QLabel(LoginWindow);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        verticalLayout->addWidget(statusLabel);

        retranslateUi(LoginWindow);
        QMetaObject::connectSlotsByName(LoginWindow);
    }

    void retranslateUi(QDialog *LoginWindow) {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Login:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Вход", nullptr));
    }
};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE
