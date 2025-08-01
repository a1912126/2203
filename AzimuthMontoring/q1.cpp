#include "AzimuthMonitoring.hpp"
#include <bits/stdc++.h>
int main(){
    AzimuthMonitoring a;
    std::cout<<a.getAzimuth({"RIGHT"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getAzimuth({"LEFT", "LEFT", "TURN AROUND"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getAzimuth({"LEFT 5", "RIGHT 10", "LEFT 15", "RIGHT 20", "LEFT 25", "RIGHT 30", "LEFT 35", "RIGHT 40"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getAzimuth({"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getAzimuth({"TURN AROUND", "HALT", "LEFT 5", "HALT", "LEFT 5", "HALT"})<<std::endl;
    std::cout<<std::endl;
    std::cout<<a.getAzimuth({"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"})<<std::endl;
    std::cout<<std::endl;
    return 0;
}