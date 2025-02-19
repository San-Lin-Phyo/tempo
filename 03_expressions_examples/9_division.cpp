// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
 
    int x=10,y=3;
    cout << ( x / y ) << "\n";      // integer division         ( both operands must be integers )

    float f=10.0, d=3.0;
    cout << ( f / d ) << "\n\n";    // floating point division ( one or both operands must be floating point )

    cout << ( x / d ) << "\n";      // floating point division ( one or both operands must be floating point )
    cout << ( f / y ) << "\n";      // floating point division ( one or both operands must be floating point )    
 
    cout << endl;
    return 0;
}
