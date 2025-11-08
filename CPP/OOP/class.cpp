#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
        return;
    }
    
    // Setter
    void setSalary(double s){
        salary = s;
        return ;
    }

    // Getter
    double getSalary(){
        return salary;
    }

    // non-parameterized constructor;
    Teacher(){  
        this->dept = "Computer Science";
    }

    // parameterized constructor;
    Teacher(string n, string d, string s, double sal){
        this->name = n;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
    }

    void getInfo(){
        cout << (*this).name << endl;
        cout << dept << endl;
        cout << this->subject << endl;
        return;
    }

    //copy constructor
    Teacher(Teacher& obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
    }
};

// class Account {
// private:
//    string password;
//    double balance;  // data hiding;


// public:
//    string accountID;
//    string username;
// };

int main()
{
    Teacher t1("Maitri","Science Dept","Economics",25000.00);
    // t1.name = "Maitri";
    // // t1.dept = "Arts Dept";
    // t1.subject = "Economics";
    // // t1.salary = 200000.00;
    // t1.setSalary(27000.00);

    // t1.changeDept("Science Dept");

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    // cout << t1.salary << endl; // salary is private now
    cout << t1.getSalary() << endl;

    Teacher t2(t1); // copy constructor(default)
    t2.getInfo();
    

    return 0;
}
