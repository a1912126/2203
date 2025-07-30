#include "Inchworm.hpp"
#include <bits/stdc++.h>
int main(){
    Inchworm a;
    std::cout<<a.lunchtime(11,2,4)<<std::endl;
    std::cout<<a.lunchtime(12,6,4)<<std::endl;
    std::cout<<a.lunchtime(20,3,7)<<std::endl;
    std::cout<<a.lunchtime(21,7,3)<<std::endl;
    std::cout<<a.lunchtime(15,16,5)<<std::endl;
    std::cout<<a.lunchtime(1000,3,7)<<std::endl;
    std::cout<<a.lunchtime(1000,7,3)<<std::endl;
    return 0;
}