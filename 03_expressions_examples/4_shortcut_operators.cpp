// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
 
    int x = 10;
                                    // shortcut operators
    cout << ( x += 6 ) << "\n";     // addition
    cout << ( x -= 6 ) << "\n";     // subtraction
    cout << ( x *= 6 ) << "\n";     // multiplication
    cout << ( x /= 6 ) << "\n";     // division
    cout << ( x %= 6 ) << "\n";     // modulo division  
 
    cout << endl;
    return 0;
}
