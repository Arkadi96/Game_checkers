#ifndef SRC_CONTROLLER_MANAGER_HPP
#define SRC_CONTROLLER_MANAGER_HPP

// Headers from this project

// Headers from other projects

// Headers from third party libraries
#include <QObject>
//#include <QCheckBox>
//#include <QFileDialog>
//#include <QGroupBox>
//#include <QHBoxLayout>
//#include <QLabel>
//#include <QLineEdit>
//#include <QMainWindow>
//#include <QPushButton>
//#include <QScrollArea>
//#include <QString>
//#include <QStringList>
//#include <QVBoxLayout>
//#include <QWidget>
//#include <QCloseEvent>


namespace checkers {
    namespace controller {
        class manager;
    }
}

class checkers::controller::manager : public QObject {
    Q_OBJECT

    public slots:
        void start();

    signals:
        void db_is_ready();

    public:
        static manager& get();

    public:
        manager();
        ~manager();
        manager(const manager&) = delete;
        manager& operator=(manager&) = delete;
};

#endif
