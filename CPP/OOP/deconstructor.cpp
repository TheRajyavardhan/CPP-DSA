// Shallow copy constructor vs Deep copy Constructor;
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {

public:
    string name;
    double* cgpaPtr; // pointer

    Student(string name, double cgpa){ // Parameterized constructor
        this->name = name;
        this->cgpaPtr = new double;
        *(cgpaPtr) = cgpa;
    }
    // Deconstructor
    ~Student(){
        cout<< "Everything has delete."<< endl;
    }
    void showInfo(){
        cout << name << endl << *(cgpaPtr) << endl;
        delete cgpaPtr;
    }
};

int main(){
    Student s("Mohit",56.74);
    s.showInfo();

    return 0;
}