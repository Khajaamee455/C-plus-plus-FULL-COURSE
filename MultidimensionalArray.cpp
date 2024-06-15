
// Basically is 2d array 

#include <iostream>
#include <array>
using namespace std;

int main(){
    
    int x [2][6] ={{1,2,3,4,5,6},{6,5,4,3,2,1}};

    for(int i =0 ; i < 2 ; ++i){
        for(int j = 0 ; j < 6 ; ++j){
            cout << x[i][j]<< " ";
        }
    }
}