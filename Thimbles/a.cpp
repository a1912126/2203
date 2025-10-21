#include <iostream>
#include <vector>
#include <string>
#include "Thimbles.hpp"  // Include your implementation header

using namespace std;

// Helper to run a test case
void runTest(const vector<string>& swaps, int expected, int testNum) {
    Thimbles t;
    int result = t.thimbleWithBall(swaps);
    cout << "Test Case " << testNum << ": ";
    if (result == expected) {
        cout << "PASSED ✅ (Result: " << result << ")" << endl;
    } else {
        cout << "FAILED ❌ (Expected: " << expected << ", Got: " << result << ")" << endl;
    }
}

int main() {
    runTest({"1-2", "3-1"}, 2, 0);
    runTest({"3-1", "2-3", "3-1", "3-2"}, 3, 1);
    runTest({"2-3", "1-3", "2-3", "2-1", "3-1"}, 3, 2);
    runTest({"1-2", "3-2", "1-2", "2-1", "2-1", "3-2", "1-3", "3-1", "1-2"}, 1, 3);


    return 0;
}
