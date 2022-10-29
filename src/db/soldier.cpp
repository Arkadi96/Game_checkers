// Headers from this project
#include "soldier.hpp"

// Headers from standard libraries
#include <iostream>
#include <cassert>

void
checkers::db::soldier::
set_valid(bool v)
{
    assert(m_alive != v);
    m_alive = v;
}

void
checkers::db::soldier::
set_type(string s)
{
    assert(m_type != s);
    assert(s == "solider" || s == "queen");
    m_type = s;
}

void
checkers::db::soldier::
set_pos(position p)
{
    assert(m_pos != p);
    m_pos = p;
}

const bool
checkers::db::soldier::
is_alive()
{
    return m_alive;
}

const string
checkers::db::soldier::
get_type()
{
    return m_type;
}

const position&
checkers::db::soldier::
get_pos()
{
    return m_type;
}

const position&
checkers::db::soldier::
get_pos()
{
    return m_type;
}

