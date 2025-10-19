#include <iostream>
#include <vector>
#include <string>
#include "PrefixFreeSets.hpp"

void testPrefixFreeSets() {
    PrefixFreeSets pfs;

    // Test case 0
    std::vector<std::string> words0 = {"hello", "hi", "h", "run", "rerun", "running"};
    std::cout << "Test case 0 result: " << pfs.maxElements(words0) << std::endl; // Expected output: 4

    // Test case 1
    std::vector<std::string> words1 = {"a", "b", "cba", "cbc", "cbb", "ccc"};
    std::cout << "Test case 1 result: " << pfs.maxElements(words1) << std::endl; // Expected output: 6

    // Test case 2
    std::vector<std::string> words2 = {"a", "ab", "abc", "abcd", "abcde", "abcdef"};
    std::cout << "Test case 2 result: " << pfs.maxElements(words2) << std::endl; // Expected output: 1

    // Test case 3
    std::vector<std::string> words3 = {"topcoder", "topcoder", "topcoding"};
    std::cout << "Test case 3 result: " << pfs.maxElements(words3) << std::endl; // Expected output: 2
}

int main() {
    testPrefixFreeSets();
    return 0;
}
