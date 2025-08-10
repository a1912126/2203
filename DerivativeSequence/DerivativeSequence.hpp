#include <bits/stdc++.h>

class DerivativeSequence{
    public:
        std::vector<int> derSeq(std::vector<int> a, int n){
            int length = int(a.size());
            for (int i =0;i<n;i++){
                for (int j =0;j<length-i-1;j++){
                    a[j] = a[j+1] - a[j];
                }
                a.pop_back();
            }
            return a;
        }
};