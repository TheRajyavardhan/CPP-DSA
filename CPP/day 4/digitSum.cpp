#include <iostream>
using namespace std;

int digit(int x){
    int sum = 0;
    int n;
    while (x!= 0){
        n = x%10;
        x = x/10;
        sum+=n;
    }
    return sum;
}
int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: " << digit(num) << endl;
    return 0;
}
