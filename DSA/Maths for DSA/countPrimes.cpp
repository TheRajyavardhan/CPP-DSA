#include <iostream>
#include <vector>
using namespace std;

//Sieve of Eratosthenes

void primeCount(int n){
    vector<bool> isPrime(n+1, true);
    int ans = 0;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            ans++;
            for(int j=i*2; j<n; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    cout << ans << endl;
    return ;
}


int main(){
    int n = 50;
    primeCount(n);
    return 0;
}