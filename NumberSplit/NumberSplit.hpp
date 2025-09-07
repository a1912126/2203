#include <bits/stdc++.h>

class NumberSplit{
    std::queue<std::pair<std::string,int>>numSet;
    std::unordered_map<std::string,int> numMap;
    int res ;
    public:
        void createNums(int index,std::string num,int cur,int prev,int steps,bool isSplitted){
            int n = int(num.size());
            if (index == n){
                if (!isSplitted){
                    return;
                }
                cur *= prev;
                std::string newNum = std::to_string(cur);
                if (numMap[newNum]!=0 && numMap[newNum]>=steps){
                    return;
                }
                numMap[newNum] =steps;
                numSet.push({newNum,steps});
                return;
            }
            if (index!=0){
                createNums(index+1,num,cur*prev,num[index]-'0',steps,true);
            }
            createNums(index+1,num,cur,prev*10 + (num[index]-'0'),steps,isSplitted);
        }
        int longestSequence(int start){
            res = 0;
            numSet = {};
            numMap = {};
            std::string nstart = std::to_string(start);
            numSet.push({nstart,1});
            numMap[nstart] = 1;
            while (!numSet.empty()){
                auto p = numSet.front();
                numSet.pop();
                if (int(p.first.size())==1){
                    res =std::max(res,p.second);
                    continue;
                }
                createNums(0,p.first,1,0,p.second+1,false);
            }
            return res;
        }
};