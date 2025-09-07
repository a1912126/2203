#include <bits/stdc++.h>

class UnsealTheSafe{
    public:
        long countPasswords(int N){
            std::vector<long> freq;
            for (int i = 0;i<10;i++){
                freq.push_back(1);
            }
            N -=1;
            for (int i =0;i<N;i++){
                std::vector<long>old;
                for (int j = 0;j<10;j++){
                    old.push_back(freq[j]);
                }
                freq[0] = old[7];
                freq[1] = old[2] + old[4];
                freq[2] = old[1] +old[5] + old[3];
                freq[3] = old[2] + old[6];
                freq[4] = old[1] + old[5] + old[7];
                freq[5] = old[2] + old[4] + old[6] + old[8];
                freq[6] = old[3] + old[5] +old[9];
                freq[7] = old[4] + old[0] + old[8];
                freq[8] = old[5] + old[7] + old[9];
                freq[9] = old[6] + old[8];
            }
            long res =0;
            for (int i=0;i<10;i++){
                res += freq[i];
            }
            return res;
        }
};