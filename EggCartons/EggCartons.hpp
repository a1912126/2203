#include<bits/stdc++.h>

class EggCartons{
    public:
        int minCartons(int n){
            std::vector<int>cnt;
            for (int i =0;i<n+1;i++){
                cnt.push_back(n+1);
            }
            cnt[0] = 0;
            int sizes[] = {6,8};
            for (int s:sizes){
                for (int i =s;i<n+1;i++){
                    cnt[i] =std::min(cnt[i],cnt[i-s]+1);
                }
            }
            if (cnt[n] ==n+1){
                return -1;
            }
            return cnt[n];
        }
};