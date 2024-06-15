#include <iostream>
using namespace std ;

class Gs{

    private :
    int password ;

    public :                       
    void setpassword(int password){           //Setter 
        this->password = password;
    }

    int getpassword(){                      //Getter
        return password;
    }


};

int main(){

    Gs mygs ;
    mygs.setpassword(4549);

    cout << mygs.getpassword() << endl;
}