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
    bool en = true;
    int i, j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 7; ++j) {
            if (en) {
                position p = position(j, i);
                m_white_soldiers.push_back(new soldier("soldier", p));
            }
            en = !en;
        }
    }

    en = false;

    for (i = 5; i < 8; ++i) {
        for (j = 0; j < 7; ++j) {
            if (en) {
                position p = position(j, i);
                m_black_soldiers.push_back(new soldier("soldier", p));
            }
            en = !en;
        }
    }
}

void
checkers::db::checkers_data::
clear_db()
{
    for (auto w : m_white_soldiers)
        delete w;

    for (auto b : m_black_soldiers)
        delete b;
}

const checkers::db::checkers_data::soldiers&
checkers::db::checkers_data::
get_white_soldiers()
{
    return m_white_soldiers;
}

const checkers::db::checkers_data::soldiers&
checkers::db::checkers_data::
get_black_soldiers()
{
    return m_black_soldiers;
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

void
checkers::db::checkers_data::
change_type(soldier& s, position p)
{
    std::cout << "White soldiers" << std::endl;
    for (auto w : m_white_soldiers)
        std::cout << " " << w.get_pos().get_x()
            << "," << w.get_pos().get_y();

    std::cout << "Black soldiers" << std::endl;
    for (auto w : m_black_soldiers)
        std::cout << " " << w.get_pos().get_x()
            << "," << w.get_pos().get_y();
}

checkers::db::checkers_data::
checkers_data()
    : m_white_soldiers{0}
    , m_black_soldiers{0}
{
    set_db();
}

checkers::db::checkers_data::
~checkers_data()
{
    clear_db();
}
