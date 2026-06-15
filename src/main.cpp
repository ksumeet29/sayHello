#include <iostream>
#include <string>
#include "helloworld.hpp"

int main() {
    std::string name;
        
    std::cout<<"Enter your first name\n";
    getline(cin,name);

    sayHello(name);

    return 0;
}