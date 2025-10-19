#include <bits/stdc++.h>

class VeryInterestingMovie{
    public:
        int maximumPupils (std::vector<std::string> seats){
            int res = 0;
            int n = int(seats[0].size());
            for (std::string row:seats){
                int index = 0;
                while (index<n){
                    int count = 0;
                    while (index<n && row[index] == 'Y'){
                        count +=1;
                        index +=1;
                    }
                    index +=1;
                    res += (count+1)/2;
                }
            }
            return res;
        }
};