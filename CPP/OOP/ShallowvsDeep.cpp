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

    Student (Student& s){
        this->name = s.name;
        *this->cgpaPtr = *s.cgpaPtr; // After using * on both side we have created deep copy.
    }

    void showInfo(){
        cout << name << endl << *(cgpaPtr) << endl;
    }
};

int main(){

    Student s1("Rahul",56.25);
    s1.showInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 78.77; // value of s1 for *cgpaPtr is get changed --> shallow copy

    s1.showInfo();

    return 0;
}