#include<bits/stdc++.h>

class BlackAndRed{
    public:
        int cut(std::string deck){
            int n = int(deck.size());
            int blackCount =0;
            int redCount = 0;
            for (char c:deck){
                if (c=='R'){
                    redCount +=1;
                }
                else{
                    blackCount +=1;
                }
            }
            if (redCount>blackCount){
                return -1;
            }
            int res = 0;
            int cur=0;
            for (int i =0;i<n;i++){
                bool found= true;
                if (deck[i] == 'R'){
                    cur +=1;
                }
                else{
                    cur -=1;
                }
                if (cur >0){
                    cur = 0;
                    res = i+1;
                }
            }
            return res;
        }
};