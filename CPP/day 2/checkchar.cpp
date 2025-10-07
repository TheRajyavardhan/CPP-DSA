#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<< "Enter a Character: ";
    cin>> ch;

    if(ch >= 'A' && ch <= 'Z')
       cout<< ch << " is an uppercase letter."<< endl;

    else if(ch >= 'a' && ch <= 'z')
        cout<< ch << " is a lowercase letter."<< endl;

    else 
        cout<< ch << " is not an alpabet."<< endl;

    return 0;
}