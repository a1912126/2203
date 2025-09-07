#include <bits/stdc++.h>

class BlackAndWhiteSolitaire{
    public:
        int minimumTurns(std::string cardFront){
            int n = int(cardFront.size());
            int count = 0;
            char prev = cardFront[0];
            for (int i =1;i<n;i++){
                if (cardFront[i] == prev){
                    if (prev == 'B'){
                        prev = 'W';
                    }
                    else{
                        prev = 'B';
                    }
                    count +=1;
                    continue;
                }
                prev = cardFront[i];
            }
            return std::min(count,n-count);
        }
};