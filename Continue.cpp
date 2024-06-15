#include <iostream>
using namespace std;

int main(){

    for( int i = 0 ; i < 10 ; i ++){
        if(i == 6){
            continue;
        }
        cout << i ;
    }
}

// continue statment is skip the condition values like i values is equal to 6 it will skip the 6 and continue the loop ..

// output : 0 ,1,2,3,4,5,7,8,9        // 6 is missing 