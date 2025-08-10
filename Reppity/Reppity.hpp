#include<bits/stdc++.h>

class Reppity{
    public:
        int longestRep(std::string input){
            int res=  0;
            int n = int(input.size());
            int l = 1;
            int r = n/2;
            while (l<=r){
                bool found = false;
                int m = (l+r)/2;
                for (int i =0;i<n-m+1;i++){
                    for (int j =i+m;j<n-m+1;j++){
                        int  k =0;
                        while (k<m && input[k+i] == input[k+j]){
                            k +=1;
                        }
                        if (k == m){
                        found = true;
                        break;
                    }
                    }
                }
                if (found){
                    res = m;
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
            return res;
        }
};