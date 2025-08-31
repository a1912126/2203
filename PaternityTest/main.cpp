#include <iostream>
#include "PaternityTest.hpp"

void printVector(const std::vector<int>& vec) {
    std::cout << "{ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i + 1 < vec.size()) std::cout << ", ";
    }
    std::cout << " }";
}

int main() {
    PaternityTest pt;

    std::vector<std::tuple<std::string, std::string, std::vector<std::string>>> testCases = {
        { "ABCD", "AXCY", { "SBTD", "QRCD" } },
        { "ABCD", "ABCX", { "ABCY", "ASTD", "QBCD" } },
        { "ABABAB", "ABABAB", { "ABABAB", "ABABCC", "ABCCDD", "CCDDEE" } },
        { "YZGLSYQT", "YUQRWYQT", { "YZQLDPWT", "BZELSWQM", "OZGPSFKT", "GZTKFYQT", "WQJLSMQT" } },
        { "WXETPYCHUWSQEMKKYNVP", "AXQTUQVAUOSQEEKCYNVP", {
            "WNELPYCHXWXPCMNKDDXD",
            "WFEEPYCHFWDNPMKKALIW",
            "WSEFPYCHEWEFGMPKIQCK",
            "WAEXPYCHAWEQXMSKYARN",
            "WKEXPYCHYWLLFMGKKFBB"
        } }
    };

    std::vector<std::vector<int>> expected = {
        { 0 },
        { 1, 2 },
        { 0, 1 },
        { },
        { 1, 3 }
    };

    for (size_t i = 0; i < testCases.size(); ++i) {
        auto [child, mother, men] = testCases[i];
        std::vector<int> result = pt.possibleFathers(child, mother, men);
        std::cout << "Test case " << i << ": Got ";
        printVector(result);
        std::cout << ", Expected ";
        printVector(expected[i]);
        if (result == expected[i]) std::cout << " ✅";
        else std::cout << " ❌";
        std::cout << std::endl;
    }

    return 0;
}
