#include <bits/stdc++.h>

class MonstersValley2{
    int res;
    int n;
    void recursion(int index,int curPow,int curSpent,std::vector<int> dread,std::vector<int>price){
        if (index ==n){
            res = std::min(res,curSpent);
            return;
        }
        if (curPow>dread[index]){
            recursion(index+1,curPow,curSpent,dread,price);
        }
        recursion(index+1,curPow+dread[index],curSpent+price[index],dread,price);
    }
    public:
        int minimumPrice( std::vector<int>dread, std::vector<int> price){
            res = std::numeric_limits<int>::max();
            n = int(dread.size());
            recursion(0,0,0,dread,price);
            return res;
       }
 
};