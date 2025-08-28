#include <bits/stdc++.h>

class MagicSpell{
    public:
        std::string fixTheSpell(std::string spell){
            std::vector<char> chars;
            int n = int(spell.size());
            for (char c :spell){
                chars.push_back(c);
            }
            int l =0;
            int r = n-1;
            while (l<r){
                if(spell[l] != 'A' && spell[l]!='Z'){
                    l+=1;
                }
                else if (spell[r]!= 'A' && spell[r] !='Z'){
                    r-=1;
                }
                else{
                    char tmp = chars[l];
                    chars[l] = chars[r];
                    chars[r] = tmp;
                    l+=1;
                    r-=1;
                }
            }
            std::string res;
            for (char c:chars){
                res +=c;
            }
            return res;
        }
};

