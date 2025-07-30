#include "CircularLine.hpp"
#include <bits/stdc++.h>
int main(){
    CircularLine a;
    std::cout<<a.longestTravel({1,1,1,1})<<std::endl;
    std::cout<<a.longestTravel({1,4,4,1,5})<<std::endl;
    std::cout<<a.longestTravel({1,1,1000})<<std::endl;
    std::cout<<a.longestTravel({1,1000,1,1000})<<std::endl;
    std::cout<<a.longestTravel({1,1,1,1,4})<<std::endl;
    return 0;
}