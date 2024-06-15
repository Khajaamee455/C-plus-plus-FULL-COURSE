
// overloded functions is nothing but more than one fuction having same name but differrnt paraeter is called 
// overloded functions 

#include <iostream>
using namespace std ;

// function to add 2 numbers 

int add(int a , int b){
    return a + b ;
}

// function to add 2 strings 
string add(string a , string b){
    return a + ""+ b ;
}

// function to add 2 doubles values 

double add(double a , double b){
    return a + b ;
}

int main(){

    int Intresult = add(2 , 9);

    string strresult = add("khaja" , "ameen");

    double doubleresult = add(9.9090 , 8.999);

    cout << Intresult << endl;                   // endl = end line 
    cout << strresult << endl ;
    cout << doubleresult << endl;

    return 0 ;

}