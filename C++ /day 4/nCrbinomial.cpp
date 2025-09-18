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
int nCr(int n, int r){
    long long fact_n = fact(n);
    long long fact_r = fact(r);
    long long fact_n_minus_r = fact(n-r);
     if (fact_r == 0 || fact_n_minus_r == 0) {
        // This case should not happen with valid r and n, but it's good practice
        // to avoid division by zero.
        return 0; 
    }

    int ans = fact_n / (fact_r * fact_n_minus_r);
    return ans;
}
int main (){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
     int r;
    cout << "Enter value of r: ";
    cin >> r;

    cout << "Ans: " << nCr(n,r) << endl;
    return 0;
}
