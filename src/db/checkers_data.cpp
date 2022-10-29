// Headers from this project
#include "checkers_data.hpp"

// Headers from standard libraries
#include <iostream>
#include <cassert>

checkers::db::checkers_data&
checkers::db::checkers_data::
get()
{
    static checkers_data o;
    return o;
}

void
checkers::db::checkers_data::
set_db()
{
    
}

void
checkers::db::checkers_data::
clear_db()
{
    for (auto w : white_soldiers)
        delete w;

    for (auto b : black_soldiers)
        delete b;
}

const soldiers&
checkers::db::checkers_data::
get_white_soldiers()
{
}

const checkers::db::checkers_data::soldiers&
checkers::db::checkers_data::
get_black_soldiers()
{
}

void
checkers::db::checkers_data::
kill_soldier(soldier& s)
{
}

void
checkers::db::checkers_data::
move_soldier(soldier& s, position p)
{
}

void
checkers::db::checkers_data::
change_type(soldier& s, position p)
{
}

checkers::db::checkers_data::
checkers_data()
{
    set_db();
}

checkers::db::checkers_data::
~checkers_data()
{
    clear_db();
}


