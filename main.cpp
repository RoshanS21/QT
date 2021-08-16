#include "calculator.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Calculator window;

    window.resize(1000, 800);
    window.setWindowTitle("Calculator");
    window.show();

    return app.exec();
}