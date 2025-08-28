#include <bits/stdc++.h>
#include "SimpleCompressor.hpp"

int main(){
    SimpleCompressor a;
    std::cout<<a.uncompress("C[6AB]C")<<std::endl;
    std::cout<<a.uncompress("C[2[3AB]]C")<<std::endl;
    std::cout<<a.uncompress("CO[1N]TEST")<<std::endl;
    std::cout<<a.uncompress("[2[2AB]]")<<std::endl;
    std::cout<<a.uncompress("AAAAAAAAAAAAAAAAAAAAA")<<std::endl;

}