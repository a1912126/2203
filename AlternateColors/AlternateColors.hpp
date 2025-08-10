#include <bits/stdc++.h>

class AlternateColors{
    public:
        std::string getColor(long r, long g, long b, long k){
            k -=1;
            std::string colors[] = {"RED","GREEN","BLUE"};
            long minCor = std::min(r, std::min(g, b));
            if (minCor*3<k){
                b -= minCor;
                g -= minCor;
                r -= minCor;
                k -= minCor*3;
                std::vector<int> lastTwo;
                int larger ;
                if (r ==0){
                    lastTwo.push_back(1);
                    lastTwo.push_back(2);
                    minCor = std::min(g,b);
                    if (g>b){
                        larger = 1;
                    }
                    else{
                        larger = 2;
                    }
                }
                else if (g==0){
                    lastTwo.push_back(0);
                    lastTwo.push_back(2);
                    minCor = std::min(r,b);
                    if (r>b){
                        larger = 0;
                    }
                    else{
                        larger = 2;
                    }
                }
                else{
                    lastTwo.push_back(0);
                    lastTwo.push_back(1);
                    minCor = std::min(g,r);
                    if (g>r){
                        larger = 1;
                    }
                    else{
                        larger = 0;
                    }
                }
                if (minCor*2<k){
                    return colors[larger];
                }
                else{
                    return colors[lastTwo[k%2]];
                }
            }
            else{
                return colors[k%3];
            }
        }
};