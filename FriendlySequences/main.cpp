#include <iostream>
#include "FriendlySequences.hpp"

int main() {
    FriendlySequences fs;

    std::vector<std::vector<int>> testCases = {
        {112, 12, 21, 354, 534345, 345, 2221},
        {10, 1100, 10101, 111, 1111, 11111, 11, 1, 111},
        {0, 0, 0, 0},
        {123456890, 213456890, 198654320},
        {9}
    };

    std::vector<int> expected = {6, 18, 6, 3, 0};

    for (size_t i = 0; i < testCases.size(); ++i) {
        int result = fs.count(testCases[i]);
        std::cout << "Test case " << i << ": Got " << result
                  << ", Expected " << expected[i]
                  << (result == expected[i] ? " ✅" : " ❌") << std::endl;
    }

    return 0;
}
