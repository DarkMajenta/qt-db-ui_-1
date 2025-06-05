#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    testEditor = new TestEditor(this);
    testViewer = new TestViewer(this);
    testPasser = new TestPasser(this);
    settingsDialog = new SettingsDialog(this);
    ui->stackedWidget->addWidget(testEditor);
    ui->stackedWidget->addWidget(testViewer);
    ui->stackedWidget->addWidget(testPasser);
    ui->stackedWidget->addWidget(settingsDialog);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setCurrentUser(const User& user) {
    currentUser = user;
    if (user.canCreate) {
        ui->stackedWidget->setCurrentWidget(testEditor);
    } else if (user.canView) {
        ui->stackedWidget->setCurrentWidget(testViewer);
    } else if (user.canPass) {
        ui->stackedWidget->setCurrentWidget(testPasser);
    }
}

void MainWindow::on_loginButton_clicked() {
    LoginWindow loginWindow(this);
    connect(&loginWindow, &LoginWindow::loginSuccessful, this, &MainWindow::setCurrentUser);
    loginWindow.exec();
}

void MainWindow::on_createTestButton_clicked() {
    if (currentUser.canCreate) {
        ui->stackedWidget->setCurrentWidget(testEditor);
    }
}

void MainWindow::on_viewTestsButton_clicked() {
    if (currentUser.canView) {
        ui->stackedWidget->setCurrentWidget(testViewer);
    }
}

void MainWindow::on_passTestButton_clicked() {
    if (currentUser.canPass) {
        ui->stackedWidget->setCurrentWidget(testPasser);
    }
}

void MainWindow::on_settingsButton_clicked() {
    ui->stackedWidget->setCurrentWidget(settingsDialog);
}
