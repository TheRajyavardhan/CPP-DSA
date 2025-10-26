#include <iostream>
#include <string>
using namespace std;

void palindrome(char ch[], int n){
   int i =0 , e = n-1;
   while(i<=e){
    if(ch[i]==ch[e]) i++,e--;
    else{
        cout << "Word is not palindrome"<< endl;
        return ;
    }
   }
   cout << "Word is palindrome"<< endl;
   return ;
}

int main(){
    cout << "Enter Your Word: ";
    char str[100];
    cin.getline(str,100);
    int n=0 ;
    while(str[n]!='\0'){
        n++;
    }
    palindrome(str, n);
    return 0;
}