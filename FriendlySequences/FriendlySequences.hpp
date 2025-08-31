#include <bits/stdc++.h>

class FriendlySequences{
    public:
        int count(std::vector<int> array){
            std::vector<int> bitmap;
            int n = int(size(array));
            for (int i =0;i<n;i++){
                int val = array[i];
                int cur = 0;
                while (val!= 0){
                    int v = val %10;
                    cur |= 1<<v;
                    val /=10;
                }
                bitmap.push_back(cur);
            }
            int res = 0;
            int index = 0;
            while (index <n){
                int val =  bitmap[index];
                int cnt = 1;
                index +=1;
                while (index<n && bitmap[index]==val){
                    cnt +=1;
                    index +=1;
                }
                res += ((cnt-1)) * cnt/2;
            }
            return res;
        }
};