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
//#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
//#include <QScrollArea>
//#include <QString>
//#include <QStringList>
#include <QVBoxLayout>
#include <QWidget>
//#include <QCloseEvent>


namespace checkers {
    namespace gui {
        class main_window;
    }
}

class checkers::gui::main_window : public QMainWindow {
    Q_OBJECT

    public slots:
        void create_game_canvas();

    signals:
        void start_game_is_selected();

    private:
        void connect_to_db();
        QVBoxLayout* create_menu_layout();
//      QPushButton* m_start nullptr;
//      QLineEdit* m_game_title = nullptr;
    public:
        main_window();
        ~main_window();
};

#endif
