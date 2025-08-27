#include <bits/stdc++.h>

class Barbecue{
    public:
    	int eliminate(int n, std::vector<int> voter, std::vector<int> excluded){
            std::vector<int> voterCount;
            std::vector<int> exclCount;
            for (int i =0;i<n;i++){
                voterCount.push_back(0);
                exclCount.push_back(0);
            }
            int length = int(voter.size());
            for (int i =0;i<length;i++){
                voterCount[voter[i]] +=1;
                exclCount[excluded[i]] +=1;
            }
            int res = 0;
            for (int i=1;i<n;i++){
                if (exclCount[i]==exclCount[res]){
                    if (voterCount[i]>voterCount[res]){
                        res = i;
                    }
                }
                else if(exclCount[i]>exclCount[res]){
                    res = i;
                }
            }
            return res;
        }
};