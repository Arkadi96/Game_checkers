#ifndef POSITION_HPP
#define POSITION_HPP

#define BOARD_WIDTH 8

namespace checkers {
    namespace db {
        class position;
    }
}

class checkers::db::position {
    private:
        int m_x;
        int m_y;

    public:
        void set_x(int);
        void set_y(int);
        int get_y();
        int get_x();
    public:
        position();
        position(int, int);
        ~position() = default;
        position(const position&);
        position& operator=(const position&);
        bool operator==(const position&);
};

#endif
