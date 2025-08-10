#include <bits/stdc++.h>
#include "MoowingCows.hpp"

int main(){
    MoowingCows a;
    std::cout<<a.dissatisfaction({"C..",
 ".C.",
 ".C."}
)<<std::endl;
    std::cout<<a.dissatisfaction({"CCCC",
 "CCCC",
 "CCCC"}
)<<std::endl;
    std::cout<<a.dissatisfaction(    	
{"C"}
)<<std::endl;
    std::cout<<a.dissatisfaction({"CCC....",
 "C......",
 "....C.C",
 ".C.CC..",
 "C......"})<<std::endl;
}