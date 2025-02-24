// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int w=1, x=2, y=3, z=4;

    cout << ( ( w < x ) && ( y > z ) ) << "\n";     // F - Does (y > z) need to be evaluated to determine the result?
    cout << ( ( w < x ) || ( y > z ) ) << "\n";     // T - Does (y > z) need to be evaluated to determine the result?

    cout << endl;
    return 0;
}
