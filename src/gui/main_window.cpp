// Headers from this project
#include "main_window.hpp"

// Headers from other projects
#include "../controller/manager.hpp"

// Headers from standard libraries
#include <iostream>

void
checkers::gui::main_window::
start_game()
{
    // creating game window and so on
    emit start_game_is_pressed();
}

void
checkers::gui::main_window::
connect_to_manager()
{
    controller::manager& m = controller::manager::get();
    connect(this, &main_window::start_game_is_pressed,
            &m, &controller::manager::start);
}

QVBoxLayout*
checkers::gui::main_window::
create_menu_layout()
{
    QPushButton* start_game_btn = new QPushButton("Start");
    QVBoxLayout* menu_lyt = new QVBoxLayout();
    menu_lyt->addWidget(start_game_btn);
    connect(start_game_btn, &QPushButton::clicked, this, &main_window::start_game);
    return menu_lyt;
}

checkers::gui::main_window::
main_window()
    : QMainWindow()
{
    setWindowTitle("checkes game");
    setFixedSize(300,300);
    QVBoxLayout* hl_menu = create_menu_layout();
    QWidget* cw = new QWidget(this);
    setCentralWidget(cw);
    cw->setLayout(hl_menu);
    connect_to_manager();
}

checkers::gui::main_window::
~main_window()
{
}
