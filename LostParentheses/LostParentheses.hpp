#include <bits/stdc++.h>

class LostParentheses{
    public:
        int minResult(std::string e){
            std::vector<char> signStack;
            std::vector<int> numStack;
            int cur = 0;
            int n = int(e.size());
            for (int i = 0;i<n;i++){
                if (e[i] == '+' || e[i] == '-'){
                    signStack.push_back(e[i]);
                    numStack.push_back(cur);
                    cur = 0;
                    continue;
                }
                cur = cur*10 + e[i]-'0';
            }
            numStack.push_back(cur);
            int res = numStack[0];
            int index = 0;
            while (index<(signStack.size())){
                if (signStack[index] == '+'){
                    res += numStack[index+1];
                    index +=1;
                    continue;
                } 
                int cur = numStack[index+1];
                index +=1;
                while (index<int(signStack.size()) && signStack[index]=='+'){
                    cur += numStack[index+1];
                    index +=1;
                }
                res -= cur;
            }   
            return res;
        }
};