#include <bits/stdc++.h>

class StreetParking{
    public: 
        int freeParks(std::string street){
            int cnt = 0;
            int n = int(street.size());
            for (int i = 0;i<n;i++){
                if (street[i] =='D' || street[i]=='B'|| street[i]=='S'){
                    continue;
                }
                if ((i+1<n && street[i+1]=='B')||(i+2<n && street[i+2]=='B')){
                    continue;
                }
                if ((i-1>=0 && street[i-1]=='S')||(i+1<n && street[i+1]=='S')){
                    continue;
                }

                cnt ++;
            }
            return cnt;
        }
};