// Headers from this project
#include "manager.hpp"

// Headers from other projects
#include "../db/checkers_data.hpp"
#include "../gui/main_window.hpp"

// Headers from third party libraries
#include <iostream>
#include <cassert>

checkers::controller::manager&
checkers::controller::manager::
get()
{
    static manager m;
    return m;
}

void
checkers::controller::manager::
start()
{
    checkers::db::checkers_data& db = checkers::db::checkers_data::get();
    (void)db;
    emit db_is_ready();
}


checkers::controller::manager::
manager()
{
}

checkers::controller::manager::
~manager()
{
}
