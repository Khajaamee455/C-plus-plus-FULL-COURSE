#include <iostream>
#include <array>
using namespace std;

int main(){

    char me[5] = {'k', 'h','a','j','a'};

    // for(const int &i :me){
    //     cout << string(1,i);
    // }

    // treditinal way 
    for(int i = 0 ; i <sizeof(me); ++i){
        cout << me[i];
    }
}