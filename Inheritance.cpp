// Inheritance in C++ 
// Inheritance is nothing but whenever we constuct a new class from an existing calss that new class 
// can access the properies and behaviours of existing class is called inheritance

#include <iostream>
using namespace std;

class Vehicle {                         // Super class (parent class or existing class)

    public:
    string brand = "ford mastang";

    void engine(){
        cout << "Its beast ..."<<endl;
    }
};

class Car : public Vehicle {               // subclass (child class or new class)

    public:
    string model = "2024 model"; 

};

int main(){

    Car cars ;

    cout << cars.brand <<endl;
    cout << cars.model << endl;
    cars.engine();

    return 0;

}