#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int fact = 1;
    if ( num <=0) {
        cout << "The factorial is: 1" << endl;
        return 0;
    }
    for (int i=1; i<=num; i++){
       fact = fact * i;
    }
    cout << "The factorial is: " << fact << endl;
    return 0;
}