#include <bits/stdc++.h>

class PaternityTest{
    public:
        std::vector<int> possibleFathers(std::string child, std::string mother,std::vector<std::string> men){
            std::vector<int> res;
            int length = int(size(child));
            int menLength = int(size(men));
            for (int j =0;j<menLength;j++ ){
                auto m = men[j];
                int momCnt = 0;
                int common = 0;
                int dadCnt = 0;
                for (int i = 0;i<length;i++){
                    if (child[i] == mother[i] && child[i] == m[i]){
                        common +=1;
                    }
                    else if(child[i]==mother[i]){
                        momCnt +=1;
                    }
                    else if(child[i] == m[i]){
                        dadCnt +=1;
                    }
                    else{
                        break;
                    }
                }
                    if (length/2 -dadCnt>common){
                        continue;
                    }
                    common -= length/2 - dadCnt;
                    if (common + momCnt != length/2){
                        continue;
                    }
                    res.push_back(j);
                }
            return res;
        }
};