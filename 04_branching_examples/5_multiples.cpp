// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;

    cout << ( x % 5 == 0 ) << "\n"; // an expression to test if x is a multiple of 5

    cout << ( x % 6 != 0 ) << "\n"; // an expression to test if x is not a multiple of 6

    cout << endl;
    return 0;
}
