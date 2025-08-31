#include <bits/stdc++.h>

class ImportantTasks{
    public:
        int maximalCost(std::vector<int> complexity, std::vector<int> computers){
            std::sort(complexity.begin(),complexity.end());
            std::sort(computers.begin(),computers.end());
            int res = 0;
            int index = 0;
            int cplLength = int(size(complexity));
            int compLength = int(size(computers));
            for (int i =0;i<cplLength;i++){
                while (index<compLength && computers[index]<complexity[i]){
                    index+=1;
                }
                if (index == compLength){
                    break;
                }
                res +=1;
                index+=1;

            }
            return res;
        }
};