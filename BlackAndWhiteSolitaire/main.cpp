#include <bits/stdc++.h>
#include "BlackAndWhiteSolitaire.hpp"  // Make sure your class is defined in this header
using namespace std;

int main() {
    BlackAndWhiteSolitaire solver;

    // Test cases
    vector<pair<string, int>> tests = {
        {"BBBW", 1},
        {"WBWBW", 0},
        {"WWWWWWWWW", 4},
        {"BBWBWWBWBWWBBBWBWBWBBWBBW", 10}
    };

    for (size_t i = 0; i < tests.size(); i++) {
        string input = tests[i].first;
        int expected = tests[i].second;

        int result = solver.minimumTurns(input);

        cout << "Test case " << i << ": \"" << input << "\" -> "
             << result << " (expected " << expected << ") "
             << (result == expected ? "✅" : "❌") << endl;
    }

    return 0;
}
