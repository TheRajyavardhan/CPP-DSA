#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person (string name, int age){
        this->name = name;
        this->age = age;
    }
    Person (){
        cout << "Person constructor." << endl;
    }
};

class Student : public Person {
public:
     int rollno;

     void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
     }
     
     Student(){
        cout << "Student constructor." << endl;
     }

    Student(string name, int age, int rollno) : Person( name, age){

          this->rollno = rollno;
    }
};
   
class Gradstudent: public Student{
public:
    string researchArea;
    
   Gradstudent(string name, int age, int rollno, string researchArea) : Student(name,age,rollno){
           this->researchArea = researchArea;
   }

   void getInfo(){
       cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
        cout << "Research Area : " << researchArea << endl;
   }

   Gradstudent(){
    cout <<"Gradstudent constructor."<< endl;
   }
};

int  main(){
    Student stud1;
    stud1.name = "Senorita";
    stud1.age = 25;
    stud1.rollno = 256;
    stud1.getInfo();

    Student s("James", 13, 98);
    s.getInfo();

    Gradstudent s1("Varun",25,568,"AI");
    // s1.name = "Harsh";
    // s1.rollno = 193;
    // s1.age = 32;
    // s1.researchArea = "Quantum Mechanics";
    s1.getInfo();
    Gradstudent s2;
  
    return 0;
}
 