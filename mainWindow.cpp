#include "mainWindow.h"
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {

    QPixmap quitPixmap("images/quit.png");

    auto *quit = new QAction(quitPixmap, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(quit);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}