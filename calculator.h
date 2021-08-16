#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QWidget>
#include "mainWindow.h"

class Calculator: public QWidget {

    public:
        Calculator(MainWindow *parent = nullptr);
    private:
        MainWindow *myMainWindow;
};

#endif // CALCULATOR_H