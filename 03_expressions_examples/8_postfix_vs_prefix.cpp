// s. trowbridge 2024
#include <iostream>
using namespace std;

int main() {
     cout << endl;
 
    int x=1, y=1;
    cout << x << " " << y << "\n";
    
    y = ++x;                            // prefix
    //  x = x + 1
    //  y = x
    cout << x << " " << y << "\n";  

    y = x++;                            // posfix  
    // y = x
    // x = x + 1;
    cout << x << " " << y << "\n";      
 
    cout << endl;
    return 0;
}
