#include <bits/stdc++.h>

class RunLengthEncoding{
    public:
        std::string decode(std::string text){
            std::string res = "";
            int index = 0;
            int length = int(text.size());
            int n = 0;
            while (index<length){
                if (text[index]>='A' && text[index]<='Z'){
                    res += text[index];
                    index +=1;
                    continue;
                }
                int mul = 0;
                while (index<length && text[index]>='0' && text[index]<='9'){
                    mul = mul*10 + (text[index]-'0');
                    index+=1;
                }
                if (mul + n>50){
                    return "TOO LONG";
                }
                n += mul;
                char c = text[index];
                index +=1;
                for (int i =0;i<mul;i++){
                    res += c;
                } 

            }

            return res;
        }
};