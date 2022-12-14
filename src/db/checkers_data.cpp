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
        for (j = 0; j < 8; ++j) {
            if (en) {
                position p = position(j, i);
                m_white_soldiers.push_back(new soldier("soldier", p));
            }
            if (j == 7) {
                en = en;
            } else {
                en = !en;
            }
        }
    }

    en = false;

    for (i = 5; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            if (en) {
                position p = position(j, i);
                m_black_soldiers.push_back(new soldier("soldier", p));
            }
            if (j == 7) {
                en = en;
            } else {
                en = !en;
            }
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
    (void)s;
    std::cout << "kill soldier\n";
}

void
checkers::db::checkers_data::
move_soldier(soldier& s, position p)
{
    (void)s;
    (void)p;
    std::cout << "move soldier\n";
}

void
checkers::db::checkers_data::
change_type(soldier& s)
{
    (void)s;
    std::cout << "change type\n";
}

void
checkers::db::checkers_data::
print_db()
{
    std::cout << "White soldiers" << std::endl;
    for (auto w : m_white_soldiers)
        std::cout << " " << w->get_pos().get_x()
            << "," << w->get_pos().get_y();
    std::cout << std::endl;

    std::cout << "Black soldiers" << std::endl;
    for (auto w : m_black_soldiers)
        std::cout << " " << w->get_pos().get_x()
            << "," << w->get_pos().get_y();
    std::cout << std::endl;
}

checkers::db::checkers_data::
checkers_data()
    : m_white_soldiers()
    , m_black_soldiers()
{
    //std::cout << "DEBUG: default constructor checkers_data\n";
    set_db();
    print_db();
}

checkers::db::checkers_data::
~checkers_data()
{
    clear_db();
}
