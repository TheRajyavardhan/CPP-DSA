#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    char letter = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << letter << " ";
        }
        letter++;
        cout << endl;
    }
    return 0;
}