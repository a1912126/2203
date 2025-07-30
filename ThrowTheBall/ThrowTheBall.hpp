#include <bits/stdc++.h>

class ThrowTheBall{
    public:
        int timesThrown(int N, int M, int L){
            std::vector<int> recv(N, 0);
            recv[0] +=1;
            int cnt = 0;
            int cur =0;
            while (true){
                if (recv[cur]==M){
                    return cnt;
                }
                cnt+=1;
                if (recv[cur]%2==0){
                    cur = (cur+N-L)%N;
                    recv[cur] +=1;
                }
                else{
                    cur = (cur+L)%N;
                    recv[cur] +=1;
                }
            }
        }
};