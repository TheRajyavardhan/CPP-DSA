#include <iostream>
#include <vector>
using namespace std;

void isArmstrongNum(int n){
    int sum = 0;
    int num = n;
    while (n!=0){
        int i = n%10;
        sum += i*i*i;
        n /= 10;
    }
    if(sum == num) cout << "Yes It is a Armstrong Num." << endl;
    else cout << "No It isn't a Armstrong Num." << endl;
    return ;
}

int main(){
    int n1 = 153;
    int n2 = 111;

    isArmstrongNum(n1);
    isArmstrongNum(n2);
    return 0;
}