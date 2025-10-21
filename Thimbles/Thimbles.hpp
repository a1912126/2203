#include <bits/stdc++.h>

class Thimbles{
    public:
        int thimbleWithBall(std::vector<std::string> swaps){
            int res = 1;
            for (const auto& swap : swaps){
                if (swap[0]-'0' == res){
                    res = swap[2]-'0'; 
                }
                else if (swap[2]-'0' == res){
                    res = swap[0]-'0';
                }
            }
            return res;
        }
};