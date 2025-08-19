#include <iostream>
#include "FracCount.hpp"
using namespace std;

int main() {
    FracCount f;

    cout << "Position of 1/2: " << f.position(1, 2) << endl;       // 1
    cout << "Position of 5/6: " << f.position(5, 6) << endl;       // 11
    cout << "Position of 999/1000: " << f.position(999, 1000) << endl; // 304191

    return 0;
}