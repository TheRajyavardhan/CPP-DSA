#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int romtoint(string s)
    {
        map<char,int> val = {{'M',1000}, {'D',500}, {'C',100}, {'L',50}, {'X',10},
         {'V',5}, {'I',1 }};
         int n=s.size();
         int total=0;
         for(int i=0; i<n; i++){
            if(val[s[i]]<val[s[i+1]]) total-=val[s[i]];
            else total+=val[s[i]];
         }
         return total;
    }
};

int main(){
    Solution s;
    string str;
    cout << "enter the roman no.: ";
    cin >> str;
    cout << s.romtoint(str) << endl;
    return 0;
}