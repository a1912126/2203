#include <bits/stdc++.h>

class FairWorkload{
    public:
        std::vector<int>folderss;
        int workerss;
        int res;
        void dfs(int index,int prev,int cut,int curMax){
            // std::cout<<index<<" "<<prev<<" "<<cut<<" "<<curMax<<std::endl;
            if (cut == workerss+1){
                return ;
            }
            if (index == int(folderss.size())){
                cut +=1;
                if (cut==workerss && prev != 0){
                    curMax = std::max(curMax,prev);
                    res = std::min(res,curMax);
                }
                return;
            }
            if (prev!=0){
                dfs(index+1,folderss[index],cut+1,std::max(curMax,prev));
            }
            dfs(index+1,prev+folderss[index],cut,curMax);

        }
        int getMostWork(std::vector<int> folders, int workers){
            folderss = folders;
            workerss = workers;
            res = std::numeric_limits<int>::max();
            dfs(0,0,0,0);
            return res;
        }
};