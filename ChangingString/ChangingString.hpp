#include <bits/stdc++.h>

class ChangingString{
    public:
        int distance(std::string A, std::string B, int K){
            std::vector<int> diff;
            int n = int(A.size());
            for (int i =0;i<n;i++){
                diff.push_back(std::abs(A[i]-B[i]));
            }
            int res = 0;
            std::sort(diff.begin(),diff.end());
            int l =0;
            int r = n-1;
            while (K>0){
                if (diff[r] >= 1){
                    diff[r] = 0;
                    r-=1;
                }
                else{
                    diff[l] = 1;
                    l+=1;
                }
                K -=1;
            }
            for (int val :diff){
                res +=val;
            }
            return res;
        }
};