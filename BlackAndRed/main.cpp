#include <bits/stdc++.h>
#include "BlackAndRed.hpp"

int main(){
    BlackAndRed a;
    std::cout<<a.cut("BRBRBR")<<std::endl;
    std::cout<<a.cut("RBRBRB")<<std::endl;
    std::cout<<a.cut("BBBRRRRB")<<std::endl;
    std::cout<<a.cut("BR")<<std::endl;
    std::cout<<a.cut("RBRBBRRRRBBBRBBRRBRBBRRRBRBBBRBRBRBRBRRB")<<std::endl;

}