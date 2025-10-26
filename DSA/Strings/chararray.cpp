#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    char str[] = "Hello";
    for(auto it: str){
        cout << it << " ";
    }
    cout << endl;
    cout << str[5]<< endl;
    cout << str << endl;
    str[5]='!';// Now array will show underfined behaviour
    // cout << str << endl;
    // for(char it: str){
    //     if(it=='\0'){
    //         cout << "Found terminator" << endl;
    //     } else 
    //     cout << "Not Found terminator" << endl;
    // }

    char str1[] = {'1','2','a', 'b', 'd','f'};
    // cout << str1 << endl;
    char str2[100];
    cin.getline(str2, 100, '$');
    cout << str2 << endl;

    char ch[] = "rajya";
    int i = 0;
    while(ch[i]!='\0'){
        i++;
    }
    int e = i-1;
    i=0;
    while(i<=e){
        swap(ch[i],ch[e]);
        i++,e--;
    }
    cout << ch << endl;
    return 0;
}