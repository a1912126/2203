#include <bits/stdc++.h>

class TomekPhone{
    public:
        	int minKeystrokes(std::vector<int> frequencies, std::vector<int> keySizes){
                int res = 0;
                int n = int(frequencies.size());
                std::sort(frequencies.begin(),frequencies.end(),std::greater<int>());
                std::vector<int> slots;
                for (int k : keySizes) {
                    for (int pos = 1; pos <= k; ++pos) {
                        slots.push_back(pos);
                    }
                }
                std::sort(slots.begin(), slots.end());
                if (int(slots.size())<n){
                    return -1;
                }
                for (int i = 0; i < n; i++) {
                    res += frequencies[i] * slots[i];
                }
                return res;
            }
};