#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent class show function called" << endl;
    }

    virtual  void hello(){ // Virtual function for runtime polymorphism
        cout << "Hello from Parent class" << endl; 
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class show function called" << endl;
    }

    void hello() {
        cout << "Hello from Child class" << endl;
    }
};

int main()
{
    Parent p;
    p.show();
    p.hello();
    Child c;
    c.show(); // function overriding
    c.hello();
    return 0;
}