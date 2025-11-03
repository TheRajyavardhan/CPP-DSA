#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(string s){
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s2 == s;
}

void palindPart(string s, vector<string>& part, vector<vector<string>>& ans){
    if(s.size()==0){
        ans.push_back(part);
        return ;
    }

    for(int i=0; i<s.size(); i++){
        if(palindrome(s.substr(0,i+1))){
            part.push_back(s.substr(0,i+1));
            palindPart(s.substr(i+1),part,ans);
            part.pop_back();
        }
    }
    return ;
}

int main(){
    string s = "aabb";
    vector<string> part;
    vector<vector<string>> ans;
    palindPart(s,part,ans);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
}