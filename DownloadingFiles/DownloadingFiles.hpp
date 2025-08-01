#include <bits/stdc++.h>

class DownloadingFiles{
    public: 
        double actualTime(std::vector<std::string> tasks){
            std::vector<std::pair<int,int>> tasksList;
            for (std::string & task:tasks){
                std::stringstream ss(task);
                int speed,timeLeft;
                ss>>speed>>timeLeft;
                tasksList.push_back({timeLeft,speed});
            }
            std::sort(tasksList.begin(), tasksList.end(), [](std::pair<int, int>& a, std::pair<int, int>& b) {
                return a.first > b.first; });
            double res = 0;
            int freeBand = 0;
            while (!tasksList.empty()){
                std::pair<int, int> task = tasksList.back();
                tasksList.pop_back();
                double timeLeft = task.first*1.0-res;
                res += timeLeft*task.second*1.0/(freeBand+task.second);
                freeBand+=task.second;
                while (!tasksList.empty() && tasksList.back().first <= res){
                    task = tasksList.back();
                    tasksList.pop_back();
                    freeBand+=task.second;
                }

            };
            return res;
        }
};  