// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;
 
    int x;
    cout << "Enter a postive integer: ";
    cin >> x;
         
    srand(x);                               // the seed value changes the psuedorandom sequence                   
                           
    cout << rand() << "\n";                 // generate a controllable pseudorandom sequence (based upon the seed value)
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";               
                      
    cout << endl;
    return 0;
}
