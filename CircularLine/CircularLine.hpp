#include <bits/stdc++.h>

class CircularLine{
    public: 
        int longestTravel(std::vector<int> t){
            int total = 0;
            for (int val:t){
                total +=val;
            }
            int res= -1;
            int n = int(t.size());
            for (int i=0;i<n;i++){
                int cur =0;
                for (int j =i+1;j<n;j++){
                    cur += t[j];
                    int val = std::min(cur,total-cur);
                    if (res==-1){
                        res =val;
                    }
                    res = std::max(res,val);
                }
            }
            return res;
        }
};