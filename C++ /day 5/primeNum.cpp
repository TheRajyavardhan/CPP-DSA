#include <iostream>
using namespace std;

void primeNum(int num)
{  cout << "1 " << endl;
    for (int i = 1; i < num+1; i++)
    {    
      bool flag = true;
        if (i==2) { cout << "2 " ;
            continue;}
        for (int j = 2; j < i; j++)
        {
            int n = i % j;
            if (n == 0) {
                flag= false;
                break;}
        }
         if(flag == true)
            {
                cout << i << " ";
            }
    }
    return;
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    primeNum(n);
    return 0;
}