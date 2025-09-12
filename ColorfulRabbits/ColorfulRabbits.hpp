#include <bits/stdc++.h>

class ColorfulRabbits{
    public:
        int getMinimum(std::vector<int> replies){
            std::unordered_map<int,int> count;
            int res = 0;
            for (int v : replies){
                count[v] +=1;
            }
            for (auto p:count ){
                res += ((p.second-1)/(p.first+1)+1)*(p.first+1);
            }

            return res;
        }
};