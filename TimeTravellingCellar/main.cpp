#include <iostream>
#include "TimeTravellingCellar.hpp"

void runTest(const std::vector<int>& profit, const std::vector<int>& decay, int expected) {
    TimeTravellingCellar cellar;
    int result = cellar.determineProfit(profit, decay);
    std::cout << "Result: " << result << ", Expected: " << expected 
              << " --> " << (result == expected ? "PASSED" : "FAILED") << std::endl;
}

int main() {
    std::cout << "Running test cases for TimeTravellingCellar...\n";

    runTest({1, 2, 3}, {3, 1, 2}, 2);
    runTest({3, 2}, {1, 2}, 1);
    runTest({3, 3, 3}, {1, 1, 1}, 2);
    runTest({1000, 500, 250, 125}, {64, 32, 16, 8}, 992);

    return 0;
}
