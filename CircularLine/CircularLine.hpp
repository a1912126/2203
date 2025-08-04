#include <bits/stdc++.h>

class CircularLine{
    public: 
        int longestTravel(std::vector<int> t){
            int total = 0;
            for (int val:t){
                total +=val;
            }
            int res = -1;
            int l = 0;
            int cur = 0;
            int n = int(t.size());
            for (int r=0; r<n; r++){
                cur += t[r];
                while (cur>total*1.0/2){
                    res = std::max(res,total-cur);
                    cur -= t[l];
                    l+=1;
                }
                res = std::max(res,cur);
            }
            return res;
        }
};