// Loops in c++ 
// Loops is nothing but whenver we want to repeate certain statement several times then we should write 
// those statments within loop body ...

// Lets take examples

// For loop ;

#include <iostream>
using namespace std;

int main(){

    int number; 

    cout << "Enter your number ";
    cin >> number;

    for (int i = 1 ; i <= 10 ; i++){
        cout << number * i << "\n";

    }
    return 0;
}