#include "helloworld.hpp"

uint_8 sayHello(std::string& name) {
    std::cout<<"Congratulations %s. You just ran your first Bazel Project"<<name<<std::endl;
    return 0;
}