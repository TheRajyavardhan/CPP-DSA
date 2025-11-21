#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convert (string s, int numRows){
    vector<string> arr(numRows);
    string ans;
    int n = s.size();
    if(numRows == 1 || n<=numRows) return s;
    int row = 0;
    bool down = false;
    for(int i=0; i<n; i++){
        if(row==0 || row==(numRows-1)) down=!down;
        if(down) arr[row++].push_back(s[i]);
        else arr[row--].push_back(s[i]);
    }
    for(string c: arr){
        ans+=c;
    }
    return ans;
}

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s,numRows) << endl;
}