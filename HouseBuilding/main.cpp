#include <iostream>
#include <vector>
#include <string>
#include "HouseBuilding.hpp"

using namespace std;

int main() {
    HouseBuilding solver;

    {
        vector<string> area = {"10", "31"};
        cout << solver.getMinimum(area) << " (Expected: 2)" << endl;
    }
    {
        vector<string> area = {"54454", "61551"};
        cout << solver.getMinimum(area) << " (Expected: 7)" << endl;
    }
    {
        vector<string> area = {"989"};
        cout << solver.getMinimum(area) << " (Expected: 0)" << endl;
    }
    {
        vector<string> area = {"90"};
        cout << solver.getMinimum(area) << " (Expected: 8)" << endl;
    }
    {
        vector<string> area = {"5781252", "2471255", "0000291", "1212489"};
        cout << solver.getMinimum(area) << " (Expected: 53)" << endl;
    }

    return 0;
}
