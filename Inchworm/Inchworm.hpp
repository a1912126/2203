#include <bits/stdc++.h>
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;
    int i = 0;
    while(i<branch+1){
        if (i%leaf ==0){
            res++;
        }
        i+= rest;
    }
    return res;  
  }
};

