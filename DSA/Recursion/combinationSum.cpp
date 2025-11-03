#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void CombSum(vector<int>& arr, int tar, int i, vector<int>& comb, vector<vector<int>>& ans,set<vector<int>>& s ){
    
    if(i==arr.size() || tar<0) return;
    if(tar==0){
        if(s.find(comb)==s.end()){
        ans.push_back(comb);
        s.insert(comb);
        }
        return ;
    }

    comb.push_back(arr[i]);
    CombSum(arr,tar-arr[i],i,comb,ans,s);
    comb.pop_back();
    CombSum(arr,tar,i+1,comb,ans,s); 
    
    return ;
}

int main(){
    vector<int> arr = {2,3,5};
    int tar = 8;
    vector<vector<int>> ans;
    vector<int> comb;
    set<vector<int>> s;

    CombSum(arr,tar,0,comb,ans,s);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}