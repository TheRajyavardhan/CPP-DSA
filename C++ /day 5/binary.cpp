#include <iostream>
using namespace std;

// int reverse(int num, int count){
//     int rev =0;
//     while(count >0){
//        rev = rev*10 + num%10;
//        num=num/10; 
//        count --;
//     }
//     return rev;
// }
void bin(int n){  
    int ans = 0;
    int pow = 1;
    // int count = 0;
    while(n > 0){
      int rem = n%2;
      n = n/2;
      ans += (rem*pow);
    //   ans = ans*10 + rem;
    //   count++;
    pow *= 10;
    }
    // cout << reverse(ans, count) << endl;
    cout << ans << endl;
    return ;
}


int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
     bin(n);
    return 0;
}