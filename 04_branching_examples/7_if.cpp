// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;
   
    if(x > 0) {                         // if condition is true, run the code block, otherwise skip
        cout << x << " is positive.\n";
    }

    if(x < 0) {                         // if condition is true, run the code block, otherwise skip
        cout << x << " is negative.\n";
    }    

    cout << endl;
    return 0;
}
