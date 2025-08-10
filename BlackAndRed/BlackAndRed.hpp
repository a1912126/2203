#include<bits/stdc++.h>

class BlackAndRed{
    public:
        int cut(std::string deck){
            int n = int(deck.size());
            for (int i =0;i<n;i++){
                int bCnt =0;
                int rCnt = 0;
                bool found= true;
                for (int j =i;j<n;j++){
                    if (deck[j] == 'R'){
                        rCnt+=1;
                    }
                    else{
                        bCnt +=1;
                    }
                    if (rCnt>bCnt){
                        found = false;
                        break;
                    }
                }
                for (int j =0;j<i;j++){
                    if (deck[j] == 'R'){
                        rCnt+=1;
                    }
                    else{
                        bCnt +=1;
                    }
                    if (rCnt>bCnt){
                        found = false;
                        break;
                    }
                }
                if (found){
                    return i;
                }
            }
            return -1;
        }
};