
#include <iostream>
using namespace std;

int main(){
    int i = 1 ;

    int & ri = i;       // This means ri is a reference for i 

    // if you remore (&) the ri value is still 1

    ri = 2 ;      // Now i is 2 
    cout << i << "\n";

    i = 3 ;     // now i value is 3 
    cout << "ri=" << ri ;

    // ri and i refer to same memory location 

}