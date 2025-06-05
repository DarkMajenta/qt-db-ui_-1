#pragma once
#include <QDialog>
#include "../core/user.h"
#include "../core/usermanager.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog {
    Q_OBJECT
public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

signals:
    void loginSuccessful(const User& user);

private slots:
    void handleLogin();

private:
    Ui::LoginWindow *ui;
    UserManager userManager;
};
