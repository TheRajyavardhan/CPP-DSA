#include <iostream>
using namespace std;


int sum(int a){
  return a*(a+1)/2 ; 
}

int main() {
    cout << "write num: "<< endl;
    int n;
    cin >> n;
    cout << "sum is: "<< sum(n) << endl;
    return 0;

}