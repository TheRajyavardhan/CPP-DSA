#include <iostream>
using namespace std;

void fibon(int num){
    if(num == 1) cout<< "0 ";
    else if(num == 2) cout<< "0 1 ";
    else{
        num -= 2;
        int a=0 , b=1;
        cout << "0 1 ";
        for(int i=0; i<num ; i++){
            int sum = a+b;
            cout << sum << " ";
            a=b;
            b=sum;
        }
   }
return ;
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    fibon(n);
    return 0;
}