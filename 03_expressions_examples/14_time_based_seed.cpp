// s. trowbridge 2024
#include <iostream>
#include <time.h>               // required for a time based seed
using namespace std;

int main() {
    cout << endl;
                         
    srand( time(NULL) );        // seed value based off of the the number of seconds since 00:00 hours 01/01/1970        
        
    cout << rand() << "\n";     // generate a seemingly random pseudorandom sequence (values are based upon the time function)
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";               
                      
    cout << endl;
    return 0;
}
