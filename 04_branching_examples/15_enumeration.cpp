// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    enum drinks {WATER=1,COKE=2,NONE=3};                // syntactic sugar

    int option = 0;

    cout << "Drinks\n";
    cout << "1. Water\n";
    cout << "2. Coke\n";
    cout << "3. None\n";
    cout << "Select one: ";
    cin >> option;
    cout << "\n";

    switch( option ) {                                  
        case WATER:                                     // option is 1
            cout << "You purchased a Water.\n";
            break;                                     
        case COKE:                                      // option is 2
            cout << "You purchased a Coke.\n";
            break;                                      
        case NONE:                                      // option is 3
            cout << "You did not purchase anything.\n";
            break;                                      
        default:                                        // option is not 1, 2 or 3
            cout << "Invalid option.\n";
    }

    cout << endl;
    return 0;
}
