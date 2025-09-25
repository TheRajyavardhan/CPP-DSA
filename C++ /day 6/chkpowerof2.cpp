#include <iostream>
using namespace std;

int bit (int n){
    int bit = 0;
    int e = 1;;
    while (n>0){
        int rem = n%2 ;
        bit += rem * e;
        e*=10;
        n=n/2;
    }
    return bit;
}
void bitChk(int n){
    if (n%2!=0) {
        cout << "No it is not a power of 2" << endl;
        return ;
    }
    int Lsp = n<<1;
    // cout << "Left Shifted Value : " << Lsp << endl;
    int Rsp = n>>1;
    // cout << "Right Shifted Value : " << Rsp << endl;
    int bitAdd = bit(Lsp) + bit(Rsp);
    cout << bitAdd << endl;
    int ans = bitAdd / 101;
    cout << ans << endl;
    if ( ans == 1 || ans % 10 == 0){
        cout << "Yes it is a power of 2" << endl;
    }
    else{
        cout << "No it is not a power of 2" << endl;
    }
    return ;
}

int main(){
     int n;
    cout << "enter a number: " ;
    cin >> n;
    cout << "Binary Value of "<< n << ": " <<  bit(n) << endl;
    bitChk(n);
    return 0;
}