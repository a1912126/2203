#include <bits/stdc++.h>

class CountExpressions{
    int res;
    int x;
    int y;
    int val;
    public:
        void recursion(int elements,int cur, int xCnt,int yCnt){
            if (elements ==4){
                if (cur == val){
                    res +=1;
                }
                return;
            }
            if (xCnt<2){
                recursion(elements+1,cur+x,xCnt+1,yCnt);
                recursion(elements+1,cur-x,xCnt+1,yCnt);
                recursion(elements+1,cur*x,xCnt+1,yCnt);
            }
            if (yCnt<2){
                recursion(elements+1,cur+y,xCnt,yCnt+1);
                recursion(elements+1,cur-y,xCnt,yCnt+1);
                recursion(elements+1,cur*y,xCnt,yCnt+1);
            }
        }
        int calcExpressions(int x, int y, int val){
            this-> res=0;
            this->x = x;
            this->y = y;
            this->val=val;
            recursion(1,x,1,0);
            recursion(1,y,0,1);
            return res;
        };
};