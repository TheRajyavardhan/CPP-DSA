#include <iostream>
using namespace std;

void printNum(int n)
{

    if (n == 0)
    {
        cout << n << " ";
        return;
    }
    printNum(n - 1);
    cout << n << " ";
    return;
}

int main()
{
    int n;
    cin >> n;
    printNum(n);
    return 0;
}