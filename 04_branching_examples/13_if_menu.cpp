// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int option=0;

    cout << "Drinks\n";
    cout << "1. Water\n";
    cout << "2. Coke\n";
    cout << "3. None\n";
    cout << "Select one: ";
    cin >> option;
    cout << "\n";

    if( option == 1 ) {
        cout << "You purchased a Water.\n";
    } else if( option == 2 ) {
        cout << "You purchased a Coke.\n";
    } else if( option == 3 ) {
        cout << "You did not purchase anything.\n";
    } else {
        cout << "You did not select an available option.\n";
    }

    cout << endl;
    return 0;
}
