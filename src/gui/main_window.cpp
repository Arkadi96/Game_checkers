// Headers from this project
#include "main_window.hpp"

// Headers from other projects
#include "../db/checkers_data.hpp"

// Headers from standard libraries
#include <iostream>

void
checkers::gui::main_window::
create_game_canvas()
{
    std::cout<<"creating game canvas .../n";
}

void
checkers::gui::main_window::
connect_to_db()
{
    db::checkers_data& db = db::checkers_data::get();
    (void)db;
    //connect(this, &main_window::start_game_is_selected,
    //        &db, &db::checkers_data::print_db); // TODO
}

QVBoxLayout*
checkers::gui::main_window::
create_menu_layout()
{
    QPushButton* start_game_btn = new QPushButton("Start");
    QVBoxLayout* menu_lyt = new QVBoxLayout();
    menu_lyt->addWidget(start_game_btn);
    connect(start_game_btn, &QPushButton::clicked, this, &main_window::create_game_canvas);
    return menu_lyt;
}

checkers::gui::main_window::
main_window()
    : QMainWindow()
{
    setWindowTitle("checkes game");
    setFixedSize(300,300);
    QVBoxLayout* hl_menu = create_menu_layout();
   // QVBoxLayout* vlayout = new QVBoxLayout();
   // vlayout->addLayout(hl_menu);
    QWidget* cw = new QWidget(this);
    setCentralWidget(cw);
    cw->setLayout(hl_menu);
    connect_to_db(); // TODO later need to connect to a manager
}

checkers::gui::main_window::
~main_window()
{
}
