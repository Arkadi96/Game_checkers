#ifndef SOLDIER_HPP
#define SOLDIER_HPP

// Headers from this project
#include "position.hpp"

// Headers from standard libraries
#include <string>

namespace checkers {
    namespace db {
        class soldier;
    }
}

class checkers::db::soldier {
    public:
        using string = std::string;
    private:
        bool m_alive;
        string m_type;
        position m_pos;
    public:
        void set_valid(bool);
        void set_type(string);
        void set_pos(position);
        const bool is_alive();
        const string get_type();
        const position& get_pos();

    public:
        soldier() = delete;
        ~soldier() = default;
        soldier(string, position);
        soldier(const soldier&) = delete;
        soldier& operator=(const soldier&);
        soldier& operator==(const soldier&);
};

#endif
