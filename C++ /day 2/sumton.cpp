#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int sum = 0;
    int i = 1;
    while(i<num+1){
        sum = sum + i;
        i++;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}