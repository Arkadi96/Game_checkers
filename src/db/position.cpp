// Headers from this project
#include "position.hpp"

// Headers from standard libraries
#include <iostream>
#include <cassert>

void
checkers::db::position::
set_x(int x)
{
    assert(BOARD_WIDTH > x && 0 <= x);
    m_x = x;
}

void
checkers::db::position::
set_y(int y)
{
    assert(BOARD_WIDTH > y && 0 <= y);
    m_y = y;
}

const int
checkers::db::position::
get_x()
{
    return m_x;
}

const int
checkers::db::position::
get_y()
{
    return m_y;
}

checkers::db::position::
position()
    : m_x{0}
    , m_y{0}
{
}

checkers::db::position::
~position()
{
}

checkers::db::position::
position(const position& p)
{
    assert(this != &p);
    m_x = p.m_x;
    m_y = p.m_y;
}

checkers::db::position&
checkers::db::position::
operator=(const position& p)
{
    assert(this != &p);
    m_x = p.m_x;
    m_y = p.m_y;
    return *this;
}

bool
checkers::db::position::
operator==(const position& p)
{
    assert(this != &p);
    if (m_x == p.m_x && m_y == p.m_y) {
        return true;
    }
    return false;
}




