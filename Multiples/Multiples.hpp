#include <bits/stdc++.h>

class Multiples{
    public:
    	int number(int min, int max, int factor){
            int start =min-1;
            for (int i =min;i<=max;i++){
                if (i%factor==0){
                    start = i;
                    break;
                }
            }
            if (start != min-1){
                return (max-start)/factor+1;
            }
            return 0;
        }
};