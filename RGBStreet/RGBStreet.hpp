#include <bits/stdc++.h>

class RGBStreet{
    public:
        int estimateCost(std::vector<std::string> houses){
            int redEnd= 0;
            int blueEnd = 0;
            int greenEnd =0;
            int n = int(houses.size());
            for (auto s:houses){
                std::stringstream ss(s);
                std::string color;
                ss>>color;
                int redVal = std::stoi(color);
                ss>>color;
                int greenVal = std::stoi(color);
                ss>>color;
                int blueVal = std::stoi(color);
                int oldRed = redEnd;
                int oldBlue = blueEnd;
                int oldGreen= greenEnd;
                redEnd = std::min(oldGreen,oldBlue) + redVal;
                blueEnd = std::min(oldGreen,oldRed) + blueVal;
                greenEnd = std::min(oldBlue,oldRed) + greenVal;
            }
            int res = redEnd;
            res = std::min(blueEnd,res);
            res = std::min(res,greenEnd);
            return res;
        }
};