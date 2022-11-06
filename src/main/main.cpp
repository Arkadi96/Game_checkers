// Headers from this project
#include "../gui/main_window.hpp"

// Headers from third party libraries
#include <QMainWindow>
#include <QApplication>

// Headers from standard libraries
#include <iostream>
#include <cassert>
#include <csignal>

void signal_handler(int signum) {
    // Here we can finish tasks before program exit
    exit(signum);
}

int main(int argc, char** argv) {
    signal(SIGINT, signal_handler);
    QApplication app(argc, argv);
    using main_window = checkers::gui::main_window;
    main_window* m = new main_window();
    m->show();
    return app.exec();
}
