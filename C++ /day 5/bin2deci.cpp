#include <iostream>
using namespace std;

int binToDec(long long bin){
     int num =0;
     int pow = 1;
     while (bin>0)
     {
        /* code */
        long long rem = bin%10;
        bin /= 10;
        num = num + (rem*pow);
        pow*=2;
     }
     
return num;
}
int main()
{
    long long n;
    cout << "enter a number: ";
    cin >> n;
     cout << binToDec(n) << endl;
    return 0;
}