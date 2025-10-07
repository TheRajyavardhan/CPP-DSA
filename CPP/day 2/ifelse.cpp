#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Eligible to vote" << endl;
    }
    else
    {
        cout << "Not eligible to vote" << endl;
    }
    return 0;
}