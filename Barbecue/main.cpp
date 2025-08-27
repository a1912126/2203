#include <bits/stdc++.h>
#include "Barbecue.hpp"

using namespace std;

int main() {
    Barbecue bbq;

    {
        int n = 3;
        vector<int> voter = {0,1,2,2};
        vector<int> excluded = {2,2,0,1};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 2)" << endl;
    }
    {
        int n = 3;
        vector<int> voter = {0,2,2};
        vector<int> excluded = {2,0,1};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 2)" << endl;
    }
    {
        int n = 2;
        vector<int> voter = {0,1};
        vector<int> excluded = {1,0};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 0)" << endl;
    }
    {
        int n = 20;
        vector<int> voter = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4,5,
                             6,7,8,9,10,11,12,13,14,15,16,17,18,19,19,19,19};
        vector<int> excluded = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,
                                0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,1,2,3};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 2)" << endl;
    }
    {
        int n = 5;
        vector<int> voter = {4,3,1,0};
        vector<int> excluded = {2,2,3,3};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 3)" << endl;
    }
    {
        int n = 10;
        vector<int> voter = {4,5,6,7,8,9,0,1,2};
        vector<int> excluded = {5,6,7,8,9,0,1,2,3};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 0)" << endl;
    }
    {
        int n = 7;
        vector<int> voter = {1,2,3,4,5,6,0,2,3,4,5,6,0,1,3,4,5,6,0,1,2,
                             4,5,6,0,1,2,3,5,6,0,1,2,3,4,6,0,1,2,3,4,5};
        vector<int> excluded = {0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,
                                3,3,3,4,4,4,4,4,4,5,5,5,5,5,5,6,6,6,6,6,6};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 0)" << endl;
    }
    {
        int n = 5;
        vector<int> voter = {};
        vector<int> excluded = {};
        cout << bbq.eliminate(n, voter, excluded) << " (expected 0)" << endl;
    }

    return 0;
}