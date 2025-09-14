#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int sum = 0;
    for (int i=1; i<=num; i++){
        sum = sum + i;
        
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}