#ifndef SRC_GUI_MAIN_WINDOW_HPP
#define SRC_GUI_MAIN_WINDOW_HPP

// Headers from this project

// Headers from other projects

// Headers from third party libraries
#include <QApplication>
#include <QCheckBox>
#include <QFileDialog>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>


namespace checkers {
    namespace gui {
        class main_window;
    }
}

class checkers::gui::main_window : public QMainWindow {
    Q_OBJECT

    public slots:
        void start_game();

    signals:
        void start_game_is_pressed();

    private:
        void connect_to_manager();
        QVBoxLayout* create_menu_layout();

    public:
        main_window();
        ~main_window();
};

#endif
