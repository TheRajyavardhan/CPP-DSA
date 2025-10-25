#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;
    cout << "Enter Your Word: " ;
    getline(cin,str);
    int st = 0;
    int end = str.length();
    while(st<end){
        if(!isalnum(str[st])){
             st++;
             continue;
        }
        if(!isalnum(str[end])){
             end--;
             continue;
        }
        if(tolower(str[st])!=tolower(str[end])){ 
            cout << "Word is not Plindrome"<< endl;
            return 0;
        }
        st++, end--;
    }
    cout << "Word is palindrome" << endl;
    return 0;
}

