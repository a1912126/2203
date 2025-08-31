#include <iostream>
#include "ImportantTasks.hpp"

void runTest(const std::vector<int>& complexity, const std::vector<int>& computers, int expected) {
    ImportantTasks taskSolver;
    int result = taskSolver.maximalCost(complexity, computers);
    std::cout << "Result: " << result << ", Expected: " << expected 
              << " --> " << (result == expected ? "PASSED" : "FAILED") << std::endl;
}

int main() {
    std::cout << "Running test cases...\n";

    runTest({1, 2, 3}, {2, 2, 2}, 2);
    runTest({1, 2, 3}, {3}, 1);
    runTest({3, 5, 1, 7}, {9, 4, 1, 1, 1}, 3);
    runTest({5, 2, 7, 8, 6, 4, 2, 10, 2, 3}, {4, 1, 3, 6, 2, 10, 11, 1, 1, 3, 4, 2}, 8);
    runTest({100}, {100, 100}, 1);

    return 0;
}
