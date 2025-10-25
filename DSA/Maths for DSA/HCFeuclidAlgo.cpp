#include <iostream>
#include <vector>
using namespace std;

void HCF(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        else {
            b%=a;
        }
    }
    if(a==0) cout << b << endl;
    else cout << a << endl;
}
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,b%a);
}

int main(){
    HCF(6,12);
    cout << gcd(30,15) << endl;
    return 0;
}