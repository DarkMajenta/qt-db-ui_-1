#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SettingsDialog) {
    ui->setupUi(this);
}

SettingsDialog::~SettingsDialog() {
    delete ui;
}

void SettingsDialog::on_colorButton_clicked() {
    QColor color = QColorDialog::getColor();
    if (color.isValid()) {
        QString style = QString("QWidget { background-color: %1; }").arg(color.name());
        QFile file("resources/styles/themes.qss");
        if (file.open(QIODevice::WriteOnly)) {
            file.write(style.toUtf8());
        }
        qApp->setStyleSheet(style);
    }
}
