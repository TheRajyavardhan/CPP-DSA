#include <iostream>
using namespace std;

int fibonacci(int n){

   if(n==1) return 0;
   else if(n==2) return 1;

   int num=fibonacci(n-1)+fibonacci(n-2);
   return num;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n)<<endl;
    return 0;
}