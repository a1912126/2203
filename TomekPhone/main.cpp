#include <iostream>
#include <vector>
#include "TomekPhone.hpp"

using namespace std;

int main() {
    TomekPhone solver;

    {
        vector<int> freq = {7,3,4,1};
        vector<int> keys = {2,2};
        cout << solver.minKeystrokes(freq, keys) << " (Expected: 19)" << endl;
    }
    {
        vector<int> freq = {13,7,4,20};
        vector<int> keys = {2,1};
        cout << solver.minKeystrokes(freq, keys) << " (Expected: -1)" << endl;
    }
    {
        vector<int> freq = {11,23,4,50,1000,7,18};
        vector<int> keys = {3,1,4};
        cout << solver.minKeystrokes(freq, keys) << " (Expected: 1164)" << endl;
    }
    {
        vector<int> freq = {100,1000,1,10};
        vector<int> keys = {50};
        cout << solver.minKeystrokes(freq, keys) << " (Expected: 1234)" << endl;
    }
    {
        vector<int> freq;
        for (int i = 1; i <= 50; i++) freq.push_back(i);
        vector<int> keys = {10,10,10,10,10,10,10,10};
        cout << solver.minKeystrokes(freq, keys) << " (Expected: 3353)" << endl;
    }

    return 0;
}
