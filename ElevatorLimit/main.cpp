#include <bits/stdc++.h>
#include "ElevatorLimit.hpp"

int main (){
    ElevatorLimit s;
    std::vector<int> val1  = s.getRange({1,0},{0,1},1);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({1,0},{0,1},2);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({0,1},{1,0},1);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({0,2},{1,0},1);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({6, 85, 106, 1, 199, 76, 162, 141},{38, 68, 62, 83, 170, 12, 61, 114},668);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({179, 135, 104, 90, 97, 186, 187, 47, 152, 100, 119, 28, 193, 11, 103, 100,
 179, 11, 80, 163, 50, 131, 103, 50, 142, 51, 112, 62, 69, 72, 88, 3, 162,
 93, 190, 85, 79, 86, 146, 71, 65, 131, 179, 119, 66, 111},{134, 81, 178, 168, 86, 128, 1, 165, 62, 46, 188, 70, 104, 111, 3, 47, 144,
 69, 163, 21, 101, 126, 169, 84, 146, 165, 198, 1, 65, 181, 135, 99, 100,
 195, 171, 47, 16, 54, 79, 69, 6, 97, 154, 80, 151, 76},954);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }

    val1  = s.getRange({2},{3},2);
    if (int(val1.size()) ==0){
        std::cout<<"Empty"<<std::endl;
    }
    else{
        std::cout<<val1[0]<<" "<<val1[1]<<std::endl;
    }
}