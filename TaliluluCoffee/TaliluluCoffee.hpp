#include <bits/stdc++.h>

class TaliluluCoffee{
    public:
        int maxTip(std::vector<int> tips){
           int n = int(tips.size()); 
           std::sort(tips.begin(),tips.end());
           int l = 0;
           int r = n-1;
           int res= 0 ;
           int time = 0;
           while (l<=r){
            if (tips[r]>n-time-1){
                res += std::max(0,tips[r]-time);
                r -=1;
            }
            else{
                while (l<n && tips[l]-time<=0){
                    l +=1;
                }
                if (l == n){
                    break;
                }
                res += std::max(0,tips[l]-time);
                l +=1;
            }
            time +=1;
           }
           return res;
        }
};