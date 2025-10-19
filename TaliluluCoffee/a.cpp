#include <iostream>
#include <vector>
#include "TaliluluCoffee.hpp"

void testMaxTip() {
    TaliluluCoffee coffeeShop;

    // Test case 0
    std::vector<int> tips0 = {3, 3, 3, 3};
    std::cout << "Test case 0 result: " << coffeeShop.maxTip(tips0) << std::endl; // Expected output: 6

    // Test case 1
    std::vector<int> tips1 = {3, 2, 3};
    std::cout << "Test case 1 result: " << coffeeShop.maxTip(tips1) << std::endl; // Expected output: 5

    // Test case 2
    std::vector<int> tips2 = {7, 8, 6, 9, 10};
    std::cout << "Test case 2 result: " << coffeeShop.maxTip(tips2) << std::endl; // Expected output: 30

    // Test case 3
    std::vector<int> tips3 = {1, 1, 1, 1, 2};
    std::cout << "Test case 3 result: " << coffeeShop.maxTip(tips3) << std::endl; // Expected output: 2

    // Test case 4
    std::vector<int> tips4 = {1, 2, 3};
    std::cout << "Test case 4 result: " << coffeeShop.maxTip(tips4) << std::endl; // Expected output: 4
}

int main() {
    testMaxTip();
    return 0;
}
