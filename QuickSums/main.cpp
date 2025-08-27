#include <bits/stdc++.h>
#include "QuickSums.hpp"
int main(){
    QuickSums q;
    std::cout<<q.minSums("99999",45)<<std::endl;
    std::cout<<q.minSums("1110",3)<<std::endl;
    std::cout<<q.minSums("0123456789",45)<<std::endl;
    std::cout<<q.minSums("99999",100)<<std::endl;
    std::cout<<q.minSums("382834",100)<<std::endl;
    std::cout<<q.minSums("9230560001",71)<<std::endl;
}