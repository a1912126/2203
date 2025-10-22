#include <bits/stdc++.h>

class ProblemsToSolve{
    public:
        int res ;
        std::vector<int>pleasant;
        int vari;
        void doo(int index,int curMax,int curMin, int steps){
            // std::cout<<index<<" "<<curMax<<" "<<curMin<<" "<<steps<<std::endl;
            if (curMax-curMin>=vari){
                if (res == -1 || res>steps){
                    res = steps;
                }
                return;
            }
            if (index + 1 < int(pleasant.size())){
                doo(index+1,std::max(curMax,pleasant[index+1]),std::min(curMin,pleasant[index+1]),steps+1);
            }
            if (index +2 <int(pleasant.size())){
                doo(index+2,std::max(curMax,pleasant[index+2]),std::min(curMin,pleasant[index+2]),steps+1);
                
            }
        }
        int minNumber(std::vector<int> pleasantness, int variety){
            res = -1;    
            pleasant = pleasantness;
            vari = variety;
            doo(0,pleasant[0],pleasant[0],1);
            return res;
        }
};

