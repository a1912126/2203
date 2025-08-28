#include <bits/stdc++.h>

class SimpleCompressor{
    public:
        std::string uncompress (std::string data){
            std::vector<std::string> stack;
            stack.push_back("");
            std::vector<int> mul;
            int n = 1;
            for (char c:data){
                if (c == '['){
                    stack.push_back("");
                    n+=1;
                }
                else if(c==']'){
                    std::string ap = stack[n-1];
                    stack.pop_back();
                    n-=1;
                    int m = mul.back();
                    mul.pop_back();
                    for (int i =0;i<m;i++){
                        stack[n-1] +=ap;
                    }
                }
                else if(c>='1' &&c<='9'){
                    mul.push_back(c-'0');
                }
                else{
                    stack[n-1] += c;
                }
            }
            return stack[0];        
        }
};

