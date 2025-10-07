#include <iostream>
using namespace std;

int fact(int n){
    int prod = 1;
    if (n==0) prod = 1;
    else {
        for (int i=1; i<n+1; i++){
            prod = prod*i;
        }
    }
    return prod;
}

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
     cout << "factorial of "<< n << " is: " << fact(n) << endl;
}