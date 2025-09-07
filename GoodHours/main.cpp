#include <bits/stdc++.h>
#include "GoodHours.hpp"
using namespace std;

int main() {
    GoodHours gh;

    // Sample test cases from the problem
    vector<tuple<string, string, int>> tests = {
        {"11:11", "11:11", 1},
        {"00:56", "12:32", 164},
        {"00:00", "00:59", 60},
        {"10:10", "10:20", 2},
        {"23:10", "01:23", 75}
    };

    for (size_t i = 0; i < tests.size(); i++) {
        string beforeTime, afterTime;
        int expected;
        tie(beforeTime, afterTime, expected) = tests[i];

        int result = gh.howMany(beforeTime, afterTime);
        cout << "Test case " << i << ": from " << beforeTime 
             << " to " << afterTime << " -> " << result
             << " (expected " << expected << ") "
             << (result == expected ? "✅" : "❌") << endl;
    }

    return 0;
}
