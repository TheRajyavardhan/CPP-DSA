#include <iostream>
using namespace std;
 
int reverse(int n){
    int sum = 0;
    while (n>0){
        sum=sum*10 + (n%10);
        n=n/10;
    }
    return sum;
}

int main(){
    int n;
    cout << "enter a number: " ;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}