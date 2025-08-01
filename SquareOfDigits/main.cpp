#include "SquareOfDigits.hpp"
#include <bits/stdc++.h>
int main(){
    SquareOfDigits a;
    std::cout<<a.getMax({"12","34"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getMax({"1255","3455"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getMax({"42101", "22100", "22101"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getMax({"1234567890"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getMax({"9785409507", "2055103694", "0861396761", "3073207669", "1233049493", "2300248968", "9769239548", "7984130001", "1670020095", "8894239889", "4053971072"})<<std::endl;
    std::cout<<std::endl;
    return 0;
}