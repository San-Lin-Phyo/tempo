// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;

    if( x > 0 ) {
        if( x < 10 ) { // runs if x is positive
            cout << x << " is a single digit postive number.\n"; 
        } else {
            cout << x << " great than or equal to 10\n";
        }
    } else {
        if( x == 0 ) {  // runs if x is not positive
            cout << x << " is zero\n";
        } else {
            cout << x << " is negative\n";
        }
    }

    cout << endl;
    return 0;
}
