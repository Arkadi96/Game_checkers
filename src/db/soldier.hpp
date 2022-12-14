#ifndef SRC_DB_SOLDIER_HPP
#define SRC_DB_SOLDIER_HPP

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
        void set_type(const string&);
        void set_pos(const position&);
        bool is_alive();
        string get_type() const;
        position& get_pos();

    public:
        soldier();
        ~soldier() = default;
        soldier(const string, const position&);
        soldier(const soldier&) = delete;
        soldier& operator=(const soldier&);
        soldier& operator==(const soldier&);
};

#endif
