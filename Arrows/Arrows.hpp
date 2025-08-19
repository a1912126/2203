#include <bits/stdc++.h>

class Arrows{
    public:
        int longestArrow(std::string s){
            int res = -1;
            int n = int(s.size());
            int  i = 0;
            while (i<n){
                if (s[i]!= '<'){
                    i+=1;
                    continue;
                }
                int cur = 1;
                i+=1;
                char last;
                if (i<n && s[i]!= '<' && s[i] != '>'){
                    last = s[i];
                    cur+=1;
                    i+=1;
                }
                while (i<n &s[i] == last){
                    cur +=1;
                    i+=1;
                }
                res = std::max(res,cur);
            }
               
            i = n-1;
            while (i>=0){
                if (s[i]!= '>'){
                    i-=1;
                    continue;
                }
                int cur = 1;
                i-=1;
                char last;
                if (i>=0 && s[i]!= '<' && s[i] != '>'){
                    last = s[i];
                    cur+=1;
                    i-=1;
                }
                while (i>=0 &s[i] == last){
                    cur +=1;
                    i-=1;
                }
                res = std::max(res,cur);
            }
            
            return res;
        }
};