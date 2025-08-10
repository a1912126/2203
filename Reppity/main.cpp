#include <bits/stdc++.h>
#include "Reppity.hpp"

int main(){
    Reppity a;
    std::cout<<a.longestRep(	
"ABCDEXXXYYYZZZABCDEZZZYYYXXX")<<std::endl;
    std::cout<<a.longestRep("abcdabcdabcdabCD"
)<<std::endl;
    std::cout<<a.longestRep(	
"abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy"
)<<std::endl;
    std::cout<<a.longestRep("againANDagainANDagainANDagainANDagainANDagain")<<std::endl;
    std::cout<<a.longestRep("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX")<<std::endl;

}