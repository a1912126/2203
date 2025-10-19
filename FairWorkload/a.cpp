#include <iostream>
#include "FairWorkload.hpp"

int main() {
    FairWorkload fw;

    // Test Case 1
    std::vector<int> folders1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int workers1 = 3;
    std::cout << fw.getMostWork(folders1, workers1) << std::endl;  // Expected Output: 170

    // Test Case 2
    std::vector<int> folders2 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int workers2 = 5;
    std::cout << fw.getMostWork(folders2, workers2) << std::endl;  // Expected Output: 110

    // Test Case 3
    std::vector<int> folders3 = {568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782};
    int workers3 = 4;
    std::cout << fw.getMostWork(folders3, workers3) << std::endl;  // Expected Output: 1785

    // Test Case 4
    std::vector<int> folders4 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    int workers4 = 2;
    std::cout << fw.getMostWork(folders4, workers4) << std::endl;  // Expected Output: 1000

    // Test Case 5
    std::vector<int> folders5 = {50, 50, 50, 50, 50, 50, 50};
    int workers5 = 2;
    std::cout << fw.getMostWork(folders5, workers5) << std::endl;  // Expected Output: 200

    // Test Case 6
    std::vector<int> folders6 = {1, 1, 1, 1, 100};
    int workers6 = 5;
    std::cout << fw.getMostWork(folders6, workers6) << std::endl;  // Expected Output: 100

    // Test Case 7
    std::vector<int> folders7 = {950, 650, 250, 250, 350, 100, 650, 150, 150, 700};
    int workers7 = 6;
    std::cout << fw.getMostWork(folders7, workers7) << std::endl;  // Expected Output: 950

    return 0;
}
