#include <iostream>
using namespace std;

int main()
{
    // starting C++ ...
    // cout << "Rajya Vardhan\n from India" << endl;
    // cout << "I love C++ ." << endl;
    // cout << "Rajya" << endl
    //      << "vardhan" << endl;

    // int age = 35;
    // cout << sizeof(age) << endl;
    // char grade = 'A';
    // cout << grade << endl;
    // float marks = 95.5;
    // cout << marks << endl;
    // double num = 6.88;
    // cout << num << endl;
    // bool flag = false;
    // cout << flag << endl; // true -> 1 and false -> 0;

    // int value = grade;
    // cout << value << endl; // implicit type conversion

    // float val = 90.3;
    // cout << (int)val << endl; // type casting

    // int Class; // takeing input by cin function.
    // cout << "Enter the class you are in: " << endl;
    // cin >> Class;
    // cout << "you Enter Class = " << Class << endl;

    // int a = 11, b = 5; // Arithmatic operator;

    // cout << "Sum = " << (a + b) << endl;
    // cout << "diff = " << (a - b) << endl;
    // cout << "product = " << (a * b) << endl;
    // cout << "div = " << (a / b) << endl;
    // cout << "mod = " << (a % b) << endl;

    // // Relational operator: ==, <=, >=, !=, <, >.
    // cout << (a == b) << endl;
    // cout << (a < b) << endl;
    // cout << (a > b) << endl;
    // // true -> 1 and false -> 0; Relational op give boolean value.
    // cout << (3 != 3) << endl;

    cout << !(3 > 5) << endl; // && - AND , || - OR , ! - NOT.

    // Unary operator: ++, --
    int a = 1;
    int b = a++; // post increment op // ++a pre increment op.
    int c = ++a;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "a = " << a << endl;
    return 0;
}