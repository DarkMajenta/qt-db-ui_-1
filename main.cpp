#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QLatin1String>
#include "core/usermanager.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QFile file(":/styles/themes.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    a.setStyleSheet(styleSheet);

    UserManager userManager;
    userManager.load("data/users.json");

    MainWindow w;
    #ifdef QT_DEBUG
        User* testUser = userManager.findByLogin("admin");
        if (testUser) {
            w.setCurrentUser(*testUser);
        }
    #endif
    w.show();
    return a.exec();
}
