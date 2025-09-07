#include <bits/stdc++.h>

class HouseBuilding{
    public:
        int getMinimum(std::vector<std::string> area){
            std::vector<int> freq(10,0);
            for (auto rows:area){
                for (auto element:rows){
                    freq[element-'0'] +=1;
                }
            }
            int res = std::numeric_limits<int>::max();
            for (int i =0;i<9;i++){
                int cur = 0;
                for (int j=0;j<10;j++){
                    int minMod = std::abs(i-j);
                    minMod = std::min(std::abs(i+1-j),minMod);
                    cur += minMod*freq[j];
                }
                res = std::min(res,cur);
            }
            return res;
        };
};