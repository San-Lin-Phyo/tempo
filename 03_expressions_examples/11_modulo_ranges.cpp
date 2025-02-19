// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
 
    int x;
    cout << "Enter an integer: ";   
    cin >> x;                       // run the program repetively with ascending input values from 3 to 10

    cout << ( x % 3 ) << "\n";      // print a value between 0 and 2 inclusive
    cout << ( x % 5 ) << "\n";      // print a value between 0 and 4 inclusive
    cout << ( x % 7 ) << "\n";      // print a value between 0 and 6 inclusive

    cout << endl;
    return 0;
}
