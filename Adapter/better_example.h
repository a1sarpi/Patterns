#ifndef PATTERNS_BETTER_EXAMPLE_H
#define PATTERNS_BETTER_EXAMPLE_H

#include <iostream>
using std::cout, std::endl;

class JSON{
public:
    virtual void parse(){
        cout << "JSON parse" << endl;
    }
};

class YAML{
public:
    virtual void parse(){
        cout << "YAML parse" << endl;
    }
};

class JSONAdapter : public JSON{
    YAML *yaml;
public:
    JSONAdapter(YAML *yaml) : yaml(yaml) {}
    virtual void parse() override {
        yaml->parse();
    }
};

void function(JSON *json){
    json->parse();
}

void client(){
    YAML *yaml = new YAML;
//    function(yaml); // нельзя
    auto *json = new JSONAdapter(yaml);
    function(json);
}
#endif //PATTERNS_BETTER_EXAMPLE_H
