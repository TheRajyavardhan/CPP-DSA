#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    int num = 1;
    for (int i = n - 1; i > -1; i--)
    {
         for (int k = 0; k <(n-1)-i; k++)
            {
                cout << "  ";
            }
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    return 0;
}