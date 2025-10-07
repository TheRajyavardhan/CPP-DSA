#include <iostream>
using namespace std;

int main(){
    // 0 -- false & 1 -- true.
    int a , b;
    cout << "Enter two numbers : " ;
    cin >> a >> b ;

    cout << "a & b -- " << (a & b) << endl;

    cout << "a | b -- " << (a | b) << endl;

    cout << "a ^ b -- " << (a^b) << endl;
    
    cout << (a << b ) << endl;

    cout << (a >> b) << endl;
}