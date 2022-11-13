// Headers from this project
#include "soldier.hpp"

// Headers from standard libraries
#include <iostream>
#include <cassert>

void
checkers::db::soldier::
set_valid(bool v)
{
    m_alive = v;
}

void
checkers::db::soldier::
set_type(const string& s)
{
    assert(s == string("soldier") || s == string("qween"));
    m_type = s;
}

void
checkers::db::soldier::
set_pos(const position& p)
{
    //std::cout << "DEBUG: S: p_x:" << p.get_x()
    //        << " p_y:" << p.get_y() << std::endl;
    m_pos = p;
}

bool
checkers::db::soldier::
is_alive()
{
    return m_alive;
}

std::string
checkers::db::soldier::
get_type() const
{
    return m_type;
}

checkers::db::position&
checkers::db::soldier::
get_pos()
{
    return m_pos;
}

checkers::db::soldier::
soldier()
    : m_alive(false)
    , m_type("")
    , m_pos()
{
    //std::cout << "DEBUG: default constructor soldier\n";
}

checkers::db::soldier::
soldier(const string s, const position& p)
{
   //std::cout << "DEBUG: parameterized constructor soldier\n";
    set_type(s);
    set_valid(true);
    set_pos(p);
}
