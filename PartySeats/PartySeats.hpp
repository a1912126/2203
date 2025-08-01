#include <bits/stdc++.h>

class PartySeats{
    public: 
        std::vector<std::string> seating(std::vector<std::string> attendees){
            std::vector<std::string>res ;
            std::vector<std::string>boys;
            std::vector<std::string> girls;
            for(std::string &a:attendees){
                std::stringstream ss(a);
                std::string name;
                std::string gender;
                ss>>name;
                ss>>gender;
                if (gender=="girl"){
                    girls.push_back(name);
                }
                else{
                    boys.push_back(name);
                }
            }
            int girlSize = int(girls.size());
            int boySize = int(boys.size());
            if (girlSize==0 || girlSize!=boySize|| girlSize%2==1 || boySize%2==1){
                return res;
            }
            std::sort(girls.begin(), girls.end());
            std::sort(boys.begin(), boys.end());
            res.push_back("HOST");
            for (int i=0;i<girlSize/2;i++){
                res.push_back(girls[i]);
                res.push_back(boys[i]);
            }
            res.push_back("HOSTESS");
            for (int i=girlSize/2;i<girlSize;i++){
                res.push_back(boys[i]);
                res.push_back(girls[i]);
            }
            return res;
        }
};