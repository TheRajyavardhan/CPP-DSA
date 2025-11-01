#include <iostream>
using namespace std;

int numSum(int n){

    if (n==1){
        return 1;
    }

    return n+numSum(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << numSum(n)<<endl;
    return 0;
}