// Destructors in c++ (its not in java ...)

#include <iostream>
using namespace std ;
class Java {

    public :
    int version ;
    string name ;

    Java(){                            // constuctor 
        version = 17 ;
        name = "java programming language";
    }
 
    ~Java(){                              // ~ this is destructor 
        cout << "object destroyed" << endl;
    }
};

int main(){

    Java myjava ;

    cout << myjava.name << "\n";
    cout << myjava.version << "\n";
    return 0;
}