#include <iostream>
#include <string>
#include "RunLengthEncoding.hpp"

void compareAndPrintResult(const std::string& input, const std::string& expected, RunLengthEncoding& rle) {
    std::string result = rle.decode(input);
    if (result == expected) {
        std::cout << "Test passed for input: " << input << "\n";
    } else {
        std::cout << "Test failed for input: " << input << "\n";
        std::cout << "Expected: " << expected << "\n";
        std::cout << "Got: " << result << "\n";
    }
}

int main() {
    RunLengthEncoding rle;

    // Test case 1
    std::string input1 = "4A3BC2DE";
    std::string expected1 = "AAAABBBCDDE";
    compareAndPrintResult(input1, expected1, rle);

    // Test case 2
    std::string input2 = "1A1B1C1D1E";
    std::string expected2 = "ABCDE";
    compareAndPrintResult(input2, expected2, rle);

    // Test case 3
    std::string input3 = "1A3A5A4BCCCC";
    std::string expected3 = "AAAAAAAAABBBBCCCC";
    compareAndPrintResult(input3, expected3, rle);

    // Test case 4
    std::string input4 = "50A";
    std::string expected4 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    compareAndPrintResult(input4, expected4, rle);

    // Test case 5
    std::string input5 = "21Z13S9A8M";
    std::string expected5 = "TOO LONG";
    compareAndPrintResult(input5, expected5, rle);

    // Test case 6
    std::string input6 = "123456789012345678901234567890B";
    std::string expected6 = "TOO LONG";
    compareAndPrintResult(input6, expected6, rle);

    return 0;
}
