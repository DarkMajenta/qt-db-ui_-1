#pragma once
#include <QMainWindow>
#include "core/user.h"
#include "gui/loginwindow.h"
#include "gui/testeditor.h"
#include "gui/testviewer.h"
#include "gui/testpasser.h"
#include "gui/settingsdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setCurrentUser(const User& user);

private slots:
    void on_loginButton_clicked();
    void on_createTestButton_clicked();
    void on_viewTestsButton_clicked();
    void on_passTestButton_clicked();
    void on_settingsButton_clicked();

private:
    Ui::MainWindow *ui;
    User currentUser;
    TestEditor *testEditor;
    TestViewer *testViewer;
    TestPasser *testPasser;
    SettingsDialog *settingsDialog;
};
