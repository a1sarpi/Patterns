#pragma once

#include <iostream>

using std::cout, std::endl, std::string;

class Database {
private:

    Database() {
        cout << "Connecting to server" << endl;
    }

    ~Database() {
        cout << "Disconnecting from server" << endl;
    }

public:
    Database(const Database &) = delete;

    Database &operator=(const Database &) = delete;

    static Database *getInstance() {
        // синглтон Мейерса
        static Database db;
        return &db;
    }

    void query(string SQL) {
        cout << "~Some SQL query, and "
                "programming logic for it~" << endl;
        cout << "Your query: " << endl
             << SQL << endl;
    }
};
