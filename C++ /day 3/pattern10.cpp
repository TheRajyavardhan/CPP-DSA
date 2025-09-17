#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;

    for (int i = n - 1; i > -1; i--)
    {
        for (int j = 0; j < i;j++)
        {
            cout << "  ";
        }
        cout<< "* " ;
        for (int k=0; k<n+1-2*i; k++)
        {
            cout << "  ";
        }
        if(i<n-1) cout << "* ";
        cout << endl;
    }
    for (int i = 0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout << "  ";
        }
        cout << "* ";
        for(int k=n-2-2*i; k>-1; k--){
            cout << "  ";
        }
        if(i<n-2) cout << "* ";
        cout << endl;
    }

    return 0;
}