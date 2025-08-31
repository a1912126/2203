#include <bits/stdc++.h>

class TimeTravellingCellar{
    public:
        int determineProfit(std::vector<int> profit, std::vector<int> decay){
            int indexLargest = -1;
            int indexSecLargest = -1;
            int indexSmallest = -1;
            int indexSecSmallest = -1;
            int n = int(size(profit));
            for (int i =0;i<n;i++){
                if (indexSecLargest==-1 || profit[i]>profit[indexSecLargest]){
                    if (indexLargest == -1 ||profit[indexLargest]<profit[i]){
                        indexSecLargest= indexLargest;
                        indexLargest = i;
                    }
                    else{
                        indexSecLargest = i;
                    }
                }
                if (indexSecSmallest==-1 || decay[i]<decay[indexSecSmallest]){
                    if (indexSmallest == -1 ||decay[indexSmallest]>decay[i]){
                        indexSecSmallest= indexSmallest;
                        indexSmallest = i;
                    }
                    else{
                        indexSecSmallest = i;
                    }
                }
            }
            std::cout<<indexLargest<<" "<<indexSecLargest<<" "<<indexSmallest<<" "<< indexSecSmallest;
            if (indexLargest == indexSmallest){
                return std::max(profit[indexLargest]-decay[indexSecSmallest],profit[indexSecLargest]-decay[indexSmallest]);
            }
            return profit[indexLargest] - decay[indexSmallest];
        };
};