// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter x: ";
    cin >> x;

    if(x > 10) {                    // what is the problem with this structure?                               
        cout << x << " > 10\n";
    } else if(x > 100) {       
        cout << x << " > 100\n";
    } else {                                
        cout << x << " <=10\n";     
    }

    cout << endl;
    return 0;
}
