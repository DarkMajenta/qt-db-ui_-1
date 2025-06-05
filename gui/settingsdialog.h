#pragma once
#include <QDialog>
#include <QColorDialog>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog {
    Q_OBJECT
public:
    explicit SettingsDialog(QWidget *parent = nullptr);
    ~SettingsDialog();

private slots:
    void on_colorButton_clicked();

private:
    Ui::SettingsDialog *ui;
};
