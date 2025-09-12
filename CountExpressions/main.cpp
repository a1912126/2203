#include <bits/stdc++.h>
#include "CountExpressions.hpp"
int main(){
    CountExpressions c;
    std::cout<<c.calcExpressions(7,8,16)<<std::endl;
    std::cout<<c.calcExpressions(3,5,7)<<std::endl;
    std::cout<<c.calcExpressions(99,100,98010000)<<std::endl;
    std::cout<<c.calcExpressions(-99,42,-1764)<<std::endl;
    std::cout<<c.calcExpressions(100,-100,-100000000)<<std::endl;
    std::cout<<c.calcExpressions(1,2,5)<<std::endl;

}