#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int oddSum = 0;
    for (int i=1; i<=num; i++){
        if (i%2!=0){
        oddSum = oddSum + i;
        }
        
    }
    cout << "The sum is: " << oddSum << endl;
    return 0;
}