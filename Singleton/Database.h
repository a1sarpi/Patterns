#pragma once
#include <iostream>

using std::cout, std::endl, std::string;

class Database {
private:
    static Database *instance;

    Database() {
        cout << "Connecting to server" << endl;
    }

public:
    static Database *getInstance() {
        if (instance == nullptr) {
            cout << "Creating database" << endl;
            instance = new Database();
        }
        else {
            cout << "Database created" << endl;
        }
        return instance;
    }

    void query(string SQL) {
        cout << "~Some SQL query, and "
                "programming logic for it~" << endl;
        cout << "Your query: " << endl
             << SQL            << endl;
    }
};

Database* Database::instance = nullptr;