#include <bits/stdc++.h>
#include "AlternateColors.hpp"
using namespace std;

struct TestCase {
    long long r, g, b, k;
    string expected;
};

int main() {
    AlternateColors ac;

    vector<TestCase> tests = {
        {1, 1, 1, 3, "BLUE"},
        {3, 4, 5, 4, "RED"},
        {7, 7, 1, 7, "GREEN"},
        {1000000000000LL, 1, 1, 1000000000002LL, "RED"},
        {653, 32, 1230, 556, "BLUE"},
        {35, 41, 37, 106,"GREEN"}
    };

    int testNum = 1;
    for (auto &t : tests) {
        string result = ac.getColor(t.r, t.g, t.b, t.k);
        cout << "Test " << testNum++ << ": ";
        if (result == t.expected) {
            cout << "PASSED\n";
        } else {
            cout << "FAILED\nExpected: " << t.expected 
                 << " Got: " << result << "\n";
        }
    }

    return 0;
}
