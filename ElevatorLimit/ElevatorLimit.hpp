#include <bits/stdc++.h>

class ElevatorLimit{
    public:
        bool binSearch(int start,std::vector<int> enter,std::vector<int>exit,int physicalLimit){
            int curIn = start;
            int n = int(enter.size());
            for (int i =0;i<n;i++){
                curIn -= exit[i];
                curIn += enter[i];
                if(curIn>physicalLimit){
                    return false;
                }
            }
            return true;
        }
        std::vector<int> getRange(std::vector<int> enter, std::vector<int> exit, int physicalLimit){
            int minRes = 0;
            int maxAt = 0;
            int curIn =0;
            int n = int(enter.size());
            std::vector<int> res;
            for (int i =0;i<n;i++){
                if (curIn<exit[i]){
                    minRes += exit[i]-curIn;
                }
                curIn -= exit[i];
                curIn = std::max(curIn,0);
                curIn += enter[i];
            }
            maxAt = -1;
            int left = minRes;
            int right = physicalLimit;
            while (left<=right){
                int m = (left+right)/2;
                if (binSearch(m,enter,exit,physicalLimit)){
                    maxAt = m;
                    left = m+1;
                }
                else{
                    right = m-1;
                }
            }
            if (maxAt ==-1){
                return res;
            }
            res.push_back(minRes);
            res.push_back(maxAt);
            return res;

        }
};