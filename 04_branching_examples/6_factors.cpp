// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;

    cout << ( 10 % x == 0 ) << "\n"; // an expression to test if x is a factor of 10

    cout << ( 25 % x != 0 ) << "\n"; // an expression to test if x is not a factor of 10

    cout << endl;
    return 0;
}
