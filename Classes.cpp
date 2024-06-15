// Class and objects in C++

#include <iostream>
using namespace std;


class Human {

    public:
    string name ;
    int age ;
    string colour ;

    void eat(){
        cout << "Humans can eat ..\n";
    }

    void sleep(){
        cout << "Humans can sleep ...\n";
    }
};

int main(){
    Human human1 ;

    human1.name = "khaja";
    human1.age = 24;
    human1.colour = "Brown";

    cout << human1.name << '\n';
    cout << human1.age << '\n';
    cout << human1.colour << '\n';

    human1.eat();
    human1.sleep();
    return 0;
}