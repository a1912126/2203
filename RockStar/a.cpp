#include <bits/stdc++.h>
#include "RockStar.hpp"

int main(){
    RockStar m;
    std::cout<<m.getNumSongs(100,0,0,200)<<std::endl;
    std::cout<<m.getNumSongs(0,0,20,200)<<std::endl;
    std::cout<<m.getNumSongs(1,2,1,1)<<std::endl;
    std::cout<<m.getNumSongs(192,279,971,249)<<std::endl;
}
