#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {    
        
         for (int k = n-i-1; k>0; k--)
            {
                cout << "  ";
            }
        for (int j = 0; j < i + 1; j++)
        {
            cout << (j+1) << " ";
        }
        for (int l = 0; l<i; l++){
            cout << (l+1) << " ";
        }
        cout << endl;
    }
    return 0;
}