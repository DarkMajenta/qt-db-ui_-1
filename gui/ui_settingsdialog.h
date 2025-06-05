#pragma once
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog {
public:
    QVBoxLayout *verticalLayout;
    QPushButton *colorButton;

    void setupUi(QDialog *SettingsDialog) {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(400, 200);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        colorButton = new QPushButton(SettingsDialog);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setText(QString::fromUtf8("Choose Background Color"));
        verticalLayout->addWidget(colorButton);

        retranslateUi(SettingsDialog);
        QMetaObject::connectSlotsByName(SettingsDialog);
    }

    void retranslateUi(QDialog *SettingsDialog) {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        colorButton->setText(QCoreApplication::translate("SettingsDialog", "Choose Background Color", nullptr));
    }
};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE
