#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;

    return gcd(b%a,a); 
}

int lcm(int a, int b){
    int hcf = gcd(a,b);
    
    return (a*b)/hcf;
}

int main(){
    cout << lcm(20,25) << endl;
}