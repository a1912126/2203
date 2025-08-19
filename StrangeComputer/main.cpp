#include <iostream>
#include "StrangeComputer.hpp"
using namespace std;

int main() {
    StrangeComputer a;

    std::cout<<a.setMemory("0011")<<std::endl;
    std::cout<<a.setMemory("000")<<std::endl;
    std::cout<<a.setMemory("0100")<<std::endl;
    std::cout<<a.setMemory("111000111")<<std::endl;
    return 0;
}