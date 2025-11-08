#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Print {
    public:
    string name;
    string color;

    // opertor overloading 
    string y ="abc";
    string x = y;

    // Contructor overloading --> example of compile time polymorphism
    Print (){
        cout << "Constructor called" << endl;
    }

    Print (string name, string color){
        this->name = name;
        this->color = color;
    }

    // Funtion overloading --> example of compile time polymorphism
    void show(int x){
        cout << x << endl;
    }
    void show(string str){
        cout << str << endl;
    }

};

int main(){
    Print p1;
    p1.show(100);
    p1.show("Hello World");
    return 0;
}