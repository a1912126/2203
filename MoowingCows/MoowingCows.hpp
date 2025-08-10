#include <bits/stdc++.h>

class MoowingCows{
    public:
        int dissatisfaction(std::vector<std::string> farmland){
            std::vector<std::pair<int,int>> cor;
            int ROWS = int(farmland.size());
            int COLS = int(farmland[0].size());
            for (int r =0;r<ROWS;r++){
                for(int c = 0;c<COLS;c++){
                    if (farmland[r][c] == 'C'){
                        cor.push_back({r,c});
                    }
                }
            }
            int res = std::numeric_limits<int>::max();
            int k = int(cor.size());
            for (int i = 0;i<k;i++){
                int cur = 0;
                for (int j =0;j<k;j++){
                    cur += (cor[i].first-cor[j].first)*(cor[i].first-cor[j].first) +(cor[i].second-cor[j].second)*(cor[i].second-cor[j].second);
                }
                if (cur<res){
                    res = cur;
                }
            }
            return res;
        }
};