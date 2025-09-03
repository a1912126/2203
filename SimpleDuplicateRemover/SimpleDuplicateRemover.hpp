#include <bits/stdc++.h>

class SimpleDuplicateRemover{
    public:
        std::vector<int> process(std::vector<int>sequence){
            std::unordered_map<int,int> rightMostIndex;
            int n = int(sequence.size());
            for(int i=0;i<n;i++){
                rightMostIndex[sequence[i]] = std::max(rightMostIndex[sequence[i]],i);
            }
            std::vector<std::pair<int,int>> numPairs;
            for (auto p:rightMostIndex){
                numPairs.push_back({p.second,p.first});
            }
            std::vector<int> res;
            std::sort(numPairs.begin(),numPairs.end());
            for (auto p:numPairs){
                res.push_back(p.second);
            }
            return res;
        }
};