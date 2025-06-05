#include "loginwindow.h"
#include "./ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);
    userManager.load("data/users.json");
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginWindow::handleLogin);
}

LoginWindow::~LoginWindow() {
    delete ui;
}

void LoginWindow::handleLogin() {
    QString login = ui->loginEdit->text();
    auto user = userManager.findByLogin(login);
    if (user && user->active) {
        emit loginSuccessful(*user);
        accept();
    } else {
        ui->statusLabel->setText("Пользователь не найден или отключён");
    }
}
