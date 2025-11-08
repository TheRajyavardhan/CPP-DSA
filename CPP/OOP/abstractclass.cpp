#include <iostream>
#include <vector>
#include <string>
using namespace std;

class shape{ // abstract class
    public:
    virtual void draw()=0; // pure virtual function
};

class circle : public shape{
    public:
    void draw(){
        cout << "Drawing Circle" << endl;
    }
};

int main(){
    circle c1;
    c1.draw();
    return 0;
}