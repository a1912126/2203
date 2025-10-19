#include <bits/stdc++.h>

class MinimalDifference{
    public:
        int takeDigitSum(int num){
            int sum =0;
            while (num){
                sum += num%10;
                num /=10;
            }
            return sum;
        }
        int findNumber(int A, int B, int C){
            int sumC = takeDigitSum(C);
            int res = -1;
            int ans = -1;
            for (int val=B;val>=A;val--){
                int v = takeDigitSum(val);
                if (res == -1 || std::abs(v-sumC)<=res){
                    ans = val;
                    res = std::abs(v-sumC);
                }
            }
            return ans;
        }
};