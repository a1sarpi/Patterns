#include "Database.h"

int main() {
    auto database = Database::getInstance();
    database->query("SELECT * FROM DATABASE");

    // Это будет содержать тот же объект, что и переменная
    // database
    auto other_database = Database::getInstance();
    other_database->query("SELECT OTHER FROM DATABASE");

    return 0;
}