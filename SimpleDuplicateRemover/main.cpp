#include <bits/stdc++.h>
#include "SimpleDuplicateRemover.hpp"

void printList(std::vector<int> val){
    for (int v:val){
        std::cout<<v<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    SimpleDuplicateRemover s;
    printList(s.process({1,5,5,1,6,1}));
    printList(s.process({2,4,2,4,4}));
    printList(s.process({6,6,6,6,6,6}));
    printList(s.process({1,2,3,4,2,2,3}));
    printList(s.process({100,100,100,99,99,99,100,100,100}));
}