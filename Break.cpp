#include <iostream>
using namespace std ;

int main(){

    for ( int i = 0 ; i <= 10 ;i++){
        if (i == 5){
            break;
        }
        cout << i;
    }
}

// break statment is use to terminate the loop if specific condition get satisfy ..

// if i values is equal to 5 it will terminate the loop exicution and print the values 

// output : 0 , 1,2,3,4