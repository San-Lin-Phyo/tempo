// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;

    if(x > 0) {                             // if condition is true, run the first code block, then exit
        cout << x << " is positive.\n";
    } else {                                // otherwise, run the second code block, then exit
        cout << x << " is not positive.\n";     
    }

    cout << endl;
    return 0;
}
