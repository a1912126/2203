#include <iostream>
#include "MonsterValley2.hpp"
using namespace std;

int main() {
    MonstersValley2 solver;

    {
        vector<int> dread = {8, 5, 10};
        vector<int> price = {1, 1, 2};
        cout << "Test 0: " << solver.minimumPrice(dread, price) << " (Expected: 2)" << endl;
    }

    {
        vector<int> dread = {1, 2, 4, 1000000000};
        vector<int> price = {1, 1, 1, 2};
        cout << "Test 1: " << solver.minimumPrice(dread, price) << " (Expected: 5)" << endl;
    }

    {
        vector<int> dread = {200, 107, 105, 206, 307, 400};
        vector<int> price = {1, 2, 1, 1, 1, 2};
        cout << "Test 2: " << solver.minimumPrice(dread, price) << " (Expected: 2)" << endl;
    }

    {
        vector<int> dread = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
        vector<int> price = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
        cout << "Test 3: " << solver.minimumPrice(dread, price) << " (Expected: 5)" << endl;
    }

    return 0;
}
