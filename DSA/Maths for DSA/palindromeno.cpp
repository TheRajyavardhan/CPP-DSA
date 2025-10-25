#include <iostream>
using namespace std;

int main(){
    int num = 545;
    if(num<0){ cout << "Error"<< endl;
    return 0;
    }
    int temp = num;
    int revNum = 0;
    while(temp!=0){
        revNum = revNum*10 + temp%10;
        temp/=10;
    }
    if(num==revNum) cout << "Palindrome No."<< endl;
    else cout << "Not Palindrome NO."<< endl;
 return 0;
}