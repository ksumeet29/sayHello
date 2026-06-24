#include "helloworld.hpp"

int sayHello(std::string& name) {
    std::cout<<"Congratulations "<<name<<". You just ran your first Bazel Project"<<std::endl;
    return 0;
}