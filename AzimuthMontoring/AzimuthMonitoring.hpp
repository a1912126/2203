#include <bits/stdc++.h>

class AzimuthMonitoring{
    public: 
        int getAzimuth(std::vector<std::string> instructions){
            int res = 0;
            int n = int(instructions.size());
            for (std::string& instruction : instructions) {
                std::stringstream ss(instruction);
                std::string command;
                ss >> command;
                if (command == "LEFT"){
                    if (int(instruction.size()) == 4){
                        res -= 90;
                        res = (res+360) %360;
                    }
                    else{
                        int d;
                        ss>>d;
                        res -= d;
                        res = (res+360)%360;
                    }
                } 
                else if (command=="RIGHT"){
                    if (int(instruction.size()) == 5){
                        res += 90;
                        res = res %360;
                    }
                    else{
                        int d;
                        ss>>d;
                        res += d;
                        res = res%360;
                    }
                }
                else if (instruction == "TURN AROUND"){
                    res += 180;
                    res %=360;
                }
                else if(command == "HALT"){
                    break;
                }
            }
            return res;
            
        }
};