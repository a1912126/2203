#include <iostream>
#include "ExerciseMachine.hpp"

int main() {
    ExerciseMachine a;

    std::cout<<a.getPercentages("00:30:00")<<std::endl;
    std::cout<<a.getPercentages("00:28:00"
)<<std::endl;
    std::cout<<a.getPercentages("23:59:59")<<std::endl;
    std::cout<<a.getPercentages("00:14:10"
)<<std::endl;
    std::cout<<a.getPercentages("00:19:16")<<std::endl;
    return 0;
}