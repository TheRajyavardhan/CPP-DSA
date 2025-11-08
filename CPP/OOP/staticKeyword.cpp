#include <iostream>
#include <vector>
#include <string>
using namespace std;

void fun(){
    static int x = 0; // value of x will in whole life of program
    cout << x << endl;
    x++;
    return ;
}

class abc{
    public:
    static int count; // declaration of static data member
    void show(){
        cout << count << endl;
    }
};
int abc::count = 0;

class ABC{
    public:
    ABC(){
        cout << "Constructor called" << endl;
    }

    ~ABC(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    // fun();
    // fun();
    // fun();

    // abc obj1;
    // obj1.count = 100;
    // abc obj2;
    // obj2.count =  200;
    // obj1.show(); // will print 200

    if(true){
       static ABC obj; 
    }
    cout << "END" << endl;
    return 0;
}