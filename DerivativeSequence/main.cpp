#include <bits/stdc++.h>
#include "DerivativeSequence.hpp"
using namespace std;

void printVector(const vector<int>& v) {
    cout << "{";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 != v.size()) cout << ", ";
    }
    cout << "}";
}

bool checkEqual(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    DerivativeSequence ds;

    struct TestCase {
        vector<int> input;
        int n;
        vector<int> expected;
    };

    vector<TestCase> tests = {
        {{5,6,3,9,-1}, 1, {1, -3, 6, -10}},
        {{5,6,3,9,-1}, 2, {-4, 9, -16}},
        {{5,6,3,9,-1}, 4, {-38}},
        {{4,4,4,4,4,4,4,4}, 3, {0,0,0,0,0}},
        {{-100,100}, 0, {-100,100}},
        {{7}, 0, {7}},
        {{42}, 0, {42}},
        {{-5,5}, 1, {10}},
        {{2,-2,5,-5,10}, 3, {-28, 42}},
        {{10,8,6,4,2}, 2, {0,0,0}},
        {{3,1,4}, 2, {5}}
    };

    int testNum = 1;
    for (auto &t : tests) {
        vector<int> result = ds.derSeq(t.input, t.n);
        cout << "Test " << testNum++ << ": ";
        if (checkEqual(result, t.expected)) {
            cout << "PASSED\n";
        } else {
            cout << "FAILED\nExpected: ";
            printVector(t.expected);
            cout << " Got: ";
            printVector(result);
            cout << "\n";
        }
    }

    return 0;
}
