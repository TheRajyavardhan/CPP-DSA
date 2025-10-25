#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<char> chars ={'a','a','b','b','c','c','c'};
    int n=chars.size();
    
    int idx = 0;
    for(int i=0; i<n; i++){
        int count =0;
        char ch = chars[i];
        while(i<n && ch == chars[i]){
            count ++;
            i++;
        }

        if(count==1) chars[idx++]=ch;
        else {
            chars[idx++]=ch;
            string temp = to_string(count);
            for(char dig: temp){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    for(char c: chars){
        cout << c ;
    }
    cout << endl;
    return 0;
}