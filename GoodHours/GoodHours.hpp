#include <bits/stdc++.h>

class GoodHours{
    public:
        int howMany(std::string beforeTime, std::string afterTime){
            std::cout<<1<<std::endl;
            int res = 0;
            int startHour =beforeTime[0] - '0';
            startHour = startHour*10 + (beforeTime[1]-'0');
            int startMin =beforeTime[3] - '0';
            startMin = startMin*10 + (beforeTime[4]-'0');
            int endHour =afterTime[0] - '0';
            endHour = endHour*10 + (afterTime[1]-'0');
            int endMin =afterTime[3] - '0';
            endMin = endMin*10 + (afterTime[4]-'0');
            if (endHour<startHour || (endHour == startHour && startMin>endMin)){
                for (int i =startHour;i<24;i++){
                    for (int j =0;j<60;j++){
                    if ((i == startHour && j<startMin)){
                        continue;
                    }
                    int a1,a2,a3,a4;
                    a2 = i%10;
                    a1 = i/10;
                    a3 = j/10;
                    a4 = j%10;
                    if (a1 == a2*a3*a4 || a1*a2 == a3*a4 || a1*a2*a3 == a4 ){
                        res +=1;
                    }
                }
            }
                startHour =0;
                startMin =0;
            }
            for (int i =startHour;i<endHour+1;i++){
                for (int j =0;j<60;j++){
                    if ((i == startHour && j<startMin) || (i==endHour && j>endMin)){
                        continue;
                    }
                    int a1,a2,a3,a4;
                    a2 = i%10;
                    a1 = i/10;
                    a3 = j/10;
                    a4 = j%10;
                    if (a1 == a2*a3*a4 || a1*a2 == a3*a4 || a1*a2*a3 == a4 ){
                        res +=1;
                    }
                }
            }
            return res;
        }
};