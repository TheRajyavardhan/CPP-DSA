#include <iostream>
#include <vector>
#include<string>
using namespace std;

void getans(vector<vector<int>>& m, int r, int c, vector<string>& ans, string path){
    int n=m.size();
    if(r<0 || r>=n || c<0 || c>=n || m[r][c]==0 || m[r][c]==-1) return ;
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return ;
    }
    
    m[r][c]=-1; // forward

    getans(m,r+1,c,ans,path+'D'); // down

    getans(m,r-1,c,ans,path+'U'); // up

    getans(m,r,c+1,ans,path+'R'); // right

    getans(m,r,c-1,ans,path+'L'); // left

    m[r][c]=1; // backtracking
    return ;
}

    int main(){
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n = m.size();
    vector<string> ans;
    string path = "";
    // vector<vector<bool>> visited(n, vector(n,false));
    getans(m,0,0,ans,path);
    for(auto str: ans){
        cout << str << endl;
    }
    return 0;
}