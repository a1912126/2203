#include <bits/stdc++.h>

class ExerciseMachine{
    public: 
        int getPercentages(std::string time){
            int totalTime = 0;
            int res = 0;
            int hours = 0;
            hours = time[0] -'0';
            hours = hours*10 + (time[1]-'0');
            int mins = 0;
            mins = time[3] -'0';
            mins = mins*10 + (time[4]-'0');
            int secs = 0;
            secs = time[6]-'0';
            secs = secs*10+(time[7]-'0');
            totalTime = hours*3600 + mins*60 + secs;
            for (int i=1;i<100;i++){
                if ((totalTime*i )%100 ==0){
                    res+=1;
                } 
            }   
            return res;

        }
};