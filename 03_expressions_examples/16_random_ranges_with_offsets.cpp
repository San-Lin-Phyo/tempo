// s. trowbridge 2024
#include <iostream>
#include <time.h> 
using namespace std;

int main() {
    cout << endl;
 
    srand(time(NULL));  
                                            // rand % n + x 
                                            // n == the number of consecutive values
                                            // n == max - min + 1 (to define an inclusive range of values)
                                            // x == the minimum value

    cout << ( rand() % 5 + 10 ) << "\n";    // range of 0 1 2 3 4, offset by 10, becomes 10 11 12 13 14

    cout << ( rand() % 3 + 4 ) << "\n";     // range of 0 1 2, offset by 4, becomes 4 5 6

    cout << ( rand() % 4 + -2 ) << "\n";    // range of 0 1 2 3, offset by -2, becomes -2 -1 0 1 
                                   
    cout << endl;
    return 0;
}
