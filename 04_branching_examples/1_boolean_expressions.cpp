// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int w=1, x=2, y=3, z=4;

    cout << ( w < x ) << "\n";                      // T
    cout << ( y > z ) << "\n";                      // F

    cout << ( ( w < x ) && ( y > z ) ) << "\n";     // F
    cout << ( ( w < x ) || ( y > z ) ) << "\n";     // T

    cout << endl;
    return 0;
}
