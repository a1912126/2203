#include <bits/stdc++.h>

class FewestFactors{
    public:
        std::vector<int> createPermutation(std::vector<int> nums ){
            std::vector<int> values;
            int n = int(nums.size());
            if (n==1){
                return nums;
            }
            for (int i = 0;i<n;i++){
                int val = nums[i];
                std::vector<int> left;
                for (int j = 0;j<i;j++){
                    left.push_back(nums[j]);
                }
                for (int j=i+1;j<n;j++){
                    left.push_back(nums[j]);
                }
                std::vector<int> perms = createPermutation(left);
                for (int cur:perms){
                    cur = cur*10 +val;
                    values.push_back(cur);
                }
            } 
            return values;   

        }
        int number(std::vector<int> digits){
            std::vector<int> perms = createPermutation(digits);
            int res = 100000;
            int cnt = std::numeric_limits<int>::max();
            for (int val:perms){
                int count = 0;
                for (int i=1;i*i<=val;i++){
                    if (val%i==0){
                        if (i==val/i){
                            count +=1;
                        }
                        else{
                            count +=2;
                        }
                    }
                }
                if (count<cnt){
                    res = val;
                    cnt = count;
                }
                else if(count == cnt){
                    res = std::min(val,res);
                }
            }
            return res;
        }
};

