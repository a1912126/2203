#include <bits/stdc++.h>
#include "ChangingString.hpp"

int main(){
    ChangingString a;
    std::cout<<a.distance("ab","ba",2)<<std::endl;
    std::cout<<a.distance("aa","aa",2)<<std::endl;
    std::cout<<a.distance("aaa","baz",1)<<std::endl;
    std::cout<<a.distance("fdfdfdfdfdsfabasd","jhlakfjdklsakdjfk",8)<<std::endl;
    std::cout<<a.distance("aa","bb",2)<<std::endl;

}