#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
public:
   string name;
   int rollno;
    
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name= "Manoj";
    t1.rollno = 56;
    t1.subject = "English";
    t1.salary = 58000 ;

    cout << t1.name << endl;
    cout << t1.subject << endl;
}