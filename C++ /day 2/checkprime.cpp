#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    for (int i = 2; i*i <=num; i++)
    {
        if (num % i == 0)
        {
            cout << "The number is not prime." << endl;
            return 0;
        }
    }
    cout << "The number is prime." << endl;
    return 0;
}