
#include <iostream>
using namespace std;

class Access {

    public :        // public access specfier 
    int x ;

    private:           // private access specifier 
    int y ;

    protected :    // protected access specifier
    int z ;
};

int main(){
    Access access ;

    access.x = 24 ;   // its public its allows to assign value
    access.y =70;    // it does not allow to assign value  , giving compilation error 
    access.z = 100 ; // Not allows to assign value to it , compilation error 
}