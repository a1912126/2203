#include <bits/stdc++.h>

class RugSizes{
    public:
       	int rugCount(int area){
            int count = 0;
            for (int i = 1;i*i<=area;i++){
                if (area%i==0){
                    if (i%2==0 && (area/i)%2==0 && i!= area/i){
                        continue;
                    }
                    count +=1;
                }
            }
            return count;
        } 
};

