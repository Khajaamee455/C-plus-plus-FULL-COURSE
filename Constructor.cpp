// Constuctor in c++ 
// constructos is a special type of method that have same name of class name 

#include <iostream>
using namespace std;
class Java{                 // this is class 
    public :
    double version ;
    string type ; 

    Java(){                  // This is a constructor 
        version = 17.0 ;
        type = "Statically typed";
    }
};

int main(){

    Java myjava ;                 // Object of the class 
    cout << myjava.type << endl;   // printing the values using object reference 
    cout << myjava.version << endl;
}