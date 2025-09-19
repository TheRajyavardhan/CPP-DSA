#include <iostream>
using namespace std;

void chkPrime(int num)
{
    bool flag = true;
    for (int i = 2; i < num; i++)
    {
        int n = num % i;
        if (n == 0)
        {
            cout << num << " is not Prime." << endl;
            return;
        }
        if (flag == true)
            cout << num << " is Prime." << endl;
        return;
    }
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    chkPrime(n);
    return 0;
}