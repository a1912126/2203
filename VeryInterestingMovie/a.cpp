#include <iostream>
#include <vector>
#include <string>
#include "VeryInterestingMovie.hpp"

using namespace std;

int main() {
    // Test Case 1
    vector<string> seats1 = {"YY", "YY", "YY"};
    VeryInterestingMovie movie1;
    cout << "Test Case 1: " << movie1.maximumPupils(seats1) << endl; // Expected output: 3

    // Test Case 2
    vector<string> seats2 = {"NNNNN", "NNNNN", "NNNNN", "NNNNN", "NNNNN"};
    VeryInterestingMovie movie2;
    cout << "Test Case 2: " << movie2.maximumPupils(seats2) << endl; // Expected output: 0

    // Test Case 3
    vector<string> seats3 = {"YYYYYYN", "YYYYNYY", "NYYYNYY", "NYYYYYN", "YYYYYYN", "NYYNYNY", "YYYYYYY"};
    VeryInterestingMovie movie3;
    cout << "Test Case 3: " << movie3.maximumPupils(seats3) << endl; // Expected output: 22

    return 0;
}
