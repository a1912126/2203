#include <bits/stdc++.h>
#include "Arrows.hpp"

int main(){
    Arrows a;
    std::cout<<a.longestArrow("<--->--==>")<<std::endl;
    std::cout<<a.longestArrow("<<<<<<<<<<")<<std::endl;
    std::cout<<a.longestArrow("----==-")<<std::endl;
    std::cout<<a.longestArrow("<----=====>")<<std::endl;

}