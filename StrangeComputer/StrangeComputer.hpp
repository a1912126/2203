#include <bits/stdc++.h>

class StrangeComputer{
    public:
      int setMemory(std::string mem) {
        int flips = 0;
        int cur = 0;
        int n = int(mem.size());
        for (int i = 0;i<n;i++){
            int val = mem[i]-'0';
            if (val!= cur){
                flips +=1;
                cur = 1-cur;
            }
        }
        return flips;
      }
};