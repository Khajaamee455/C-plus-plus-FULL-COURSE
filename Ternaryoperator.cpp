
// Ternary operators in c++ 

// Result = condition ? if : else ;
// condition is true : then do this 
// condition is false : do this 

#include <iostream>
using namespace std;

int main(){

    int x = 3 , y = 5 , max ;
    max = (x > y) ? x : y ; // condition false then it will print y // output :5

    cout << max << endl;
}