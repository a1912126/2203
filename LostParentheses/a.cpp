#include <iostream>
#include <string>
#include "LostParentheses.hpp"  // Include the header file for the LostParentheses class

int main() {
    LostParentheses lp;

    // Test Case 1
    std::string expr1 = "55-50+40";
    std::cout << "Test Case 1: " << expr1 << " -> Expected: -35, Result: " << lp.minResult(expr1) << std::endl;

    // Test Case 2
    std::string expr2 = "10+20+30+40";
    std::cout << "Test Case 2: " << expr2 << " -> Expected: 100, Result: " << lp.minResult(expr2) << std::endl;

    // Test Case 3
    std::string expr3 = "00009-00009";
    std::cout << "Test Case 3: " << expr3 << " -> Expected: 0, Result: " << lp.minResult(expr3) << std::endl;

    // Test Case 4
    std::string expr4 = "50+50-50-50";
    std::cout << "Test Case 4: " << expr4 << " -> Expected: 0, Result: " << lp.minResult(expr4) << std::endl;

    // Test Case 5
    std::string expr5 = "5+10-2-3+15";
    std::cout << "Test Case 5: " << expr5 << " -> Expected: 25, Result: " << lp.minResult(expr5) << std::endl;

    // Test Case 6
    std::string expr6 = "1+2-3+4-5";
    std::cout << "Test Case 6: " << expr6 << " -> Expected: -1, Result: " << lp.minResult(expr6) << std::endl;

    // Test Case 7
    std::string expr7 = "100-50+25-75+50";
    std::cout << "Test Case 7: " << expr7 << " -> Expected: -50, Result: " << lp.minResult(expr7) << std::endl;

    return 0;
}
