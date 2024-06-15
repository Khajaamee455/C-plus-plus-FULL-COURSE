//Switch statment in c++

// its a multiple choice decision making selection statment we have to select single case out of multiple cases..

#include <iostream>
using namespace std;

int main(){

    int num = 3 ;

    switch (num)
    {
    case 0:
       cout << "Zero ";
        break;

    case 1 :
        cout << "One";
        break;
    case 2 : 
       cout << "Two";
       break;
    case 3 :
       cout << "condition match it will print me ";
       break;
    
    default: cout << "No match cases ....";
    }
}