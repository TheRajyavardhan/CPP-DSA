// We also called HCF as GCD #Greatest Common Divisor;
#include <iostream>
using namespace std;

void HCF (int a, int b){
    if(a==0){
        cout << b << endl;
        return ;
    } 
    if(b==0) {
        cout << a << endl;
        return ;
    }
    if(a==b){
        cout << a << endl;
        return ;
    }
    
    int size = min(a,b);
    int ans = 0;
    for(int i=2; i<=size; i++){
        if(a%i==0 && b%i==0) {
            ans = max(ans, i);
        }
    } 
    cout << "HCF of " << a << " and " << b << " : " << ans << endl;
    return ;
}

int main(){
    int a , b;
    cout << "Enter the Numbers: " ;
    cin >> a >> b;
    
    HCF(a,b);
    return 0;

}