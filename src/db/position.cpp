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

int
checkers::db::position::
get_x() const
{
    return m_x;
}

int
checkers::db::position::
get_y() const
{
    return m_y;
}

checkers::db::position::
position()
    : m_x(0)
    , m_y(0)
{
//    std::cout << "DEBUG: default constructor poistion\n";
}

checkers::db::position::
position(int x, int y)
{
//    std::cout << "DEBUG: parameterized constructor poistion\n";
    assert(BOARD_WIDTH > y && 0 <= y);
    assert(BOARD_WIDTH > x && 0 <= x);
    m_y = y;
    m_x = x;
}

checkers::db::position::
position(const position& p)
{
    std::cout << "DEBUG: P: p_x:" << p.get_x()
            << " p_y:" << p.get_y() << std::endl;
    assert(this != &p);
    m_x = p.get_x();
    m_y = p.get_y();
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

bool
checkers::db::position::
operator!=(const position& p)
{
    assert(this != &p);
    if (m_x != p.m_x || m_y != p.m_y) {
        return true;
    }
    return false;
}
