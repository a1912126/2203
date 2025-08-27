#include <bits/stdc++.h>

class QuickSums{
    std::string numbers;
    int res;
    int n;
    int sum;
    public:
        void count(int index, int prev, int cur, int cnt){
            if (cur+prev>sum){
                return;
            }
            if (index ==n){
                cnt +=1;
                cur +=prev;
                if (cur==sum){
                    res = std::min(res,cnt);
                }
                return;
            }
            int val = numbers[index]-'0';
            if (index!= 0){
                count(index+1,val,cur+prev,cnt+1);
            }
            count(index+1,prev*10+val,cur,cnt);
            
        }
        int minSums(std::string numbers, int sum){
            this->numbers = numbers;
            this->n = int(numbers.size());
            this->res = n;
            this->sum = sum;
            count(0,0,0,-1);
            if (this->res == n){
                return -1;
            }
            return this->res;
        }
};