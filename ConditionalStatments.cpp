#include <iostream>
using namespace std;

int main(){

    int age ;

    cout << "Enter your age :";
    cin >> age ;
    if(age == 21){
        cout << "Its your third attempt for voting ";

    }
    else if(age >= 18 && age <= 100){
        cout << "You are eligible for voting ";
    }
    else{
        cout << "You are not eligible for voting ";
    }

    return 0;
}