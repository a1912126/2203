#include <bits/stdc++.h>
#include "RGBStreet.hpp"  // Assuming your class is saved in RGBStreet.hpp

using namespace std;

int main() {
    RGBStreet solver;

    vector<vector<string>> testCases = {
        {"1 100 100", "100 1 100", "100 100 1"},
        {"1 100 100", "100 100 100", "1 100 100"},
        {"26 40 83", "49 60 57", "13 89 99"},
        {"30 19 5", "64 77 64", "15 19 97", "4 71 57", "90 86 84", "93 32 91"},
        {"71 39 44", "32 83 55", "51 37 63", "89 29 100",
         "83 58 11", "65 13 15", "47 25 29", "60 66 19"}
    };

    vector<int> expected = {3, 102, 96, 208, 253};

    for (size_t i = 0; i < testCases.size(); i++) {
        int result = solver.estimateCost(testCases[i]);
        cout << "Test case " << i << ": got " << result 
             << ", expected " << expected[i] 
             << (result == expected[i] ? " ✅" : " ❌") << endl;
    }

    return 0;
}
