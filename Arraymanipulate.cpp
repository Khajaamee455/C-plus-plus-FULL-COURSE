#include <iostream>
#include <array>
using namespace std ;

int main(){

    array< int , 6 > marks = {92,93,94,95,96,97};
     marks[2] =98 ;          //chenging the value 
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << marks[5] << endl;
   
   
    return 0;
}