#ifndef SRC_DB_CHECKERS_DATA_HPP
#define SRC_DB_CHECKERS_DATA_HPP

// Headers from this project
#include "soldier.hpp"
#include "position.hpp"

// Headers from standard libraries
#include <string>
#include <vector>

namespace checkers {
    namespace db {
        class checkers_data;
    }
}

class checkers::db::checkers_data {
    public:
        using string = std::string;
        using soldiers = std::vector<soldier*>;
    private:
        soldiers m_white_soldiers;
        soldiers m_black_soldiers;
    private:
        void set_db();
        void clear_db();
    public:
        const soldiers& get_white_soldiers();
        const soldiers& get_black_soldiers();
        void kill_soldier(soldier&);
        void move_soldier(soldier&, position);
        void change_type(soldier&);
        void print_db();

    public:
        static checkers_data& get();
    private:
        checkers_data();
        ~checkers_data();
        checkers_data(const checkers_data& o) = delete;
        checkers_data& operator=(const checkers_data& o) = delete;

};

#endif
