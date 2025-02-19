// s. trowbridge 2024
#include <iostream>
#include <time.h>                           // required for time function
using namespace std;

int main() {
    cout << endl;
 
    srand( time(NULL) );                    // time based seed

                                            // use modulo to specify the range of psuedorandom values
    cout << ( rand() % 10 ) << "\n";        // generate a random value between 0 and 9 inclusive  
    cout << ( rand() % 100 ) << "\n";       // generate a random value between 0 and 99 inclusive       
    cout << ( rand() % 1000 ) << "\n";      // generate a random value between 0 and 999 inclusive                 
                      
    cout << endl;
    return 0;
}
