#include "../db/checkers_data.hpp"

int main() {

    checkers::db::checkers_data& ob = checkers::db::checkers_data::get();
    ob.print_db();

    return 1;
}
