#include "StreetParking.hpp"
#include <bits/stdc++.h>
int main(){
    StreetParking a;
    std::cout<<a.freeParks("---B--S-D--S--")<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.freeParks("DDBDDBDDBDD")<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.freeParks("--S--S--S--S--")<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.freeParks("SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D")<<std::endl;
    std::cout<<std::endl;
    return 0;
}