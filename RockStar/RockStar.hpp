#include <bits/stdc++.h>

class RockStar{
    public:
        int getNumSongs(int ff, int fs, int sf, int ss){
            if (ff ==0  && fs==0){
                return ss + (sf!=0);
            }
            int res = ff;
            if (fs==0 ){
                return res;
            }
            else if (sf ==0){
                return res +1 +ss;
            }
            return res + std::min(fs,sf)*2 +(fs>sf)+ss;


        }
};

