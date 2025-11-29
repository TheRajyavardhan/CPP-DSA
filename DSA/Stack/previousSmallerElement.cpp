#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
vector<int> arr = {3,1,0,8,6};
int n = arr.size();
vector<int> ans;
stack<int> s;
for(int i=0; i<n; i++){
while(!s.empty() && s.top()>=arr[i]) s.pop();
if(s.empty()) ans.push_back(-1);
else ans.push_back(s.top());
s.push(arr[i]);
}

for(auto val: ans) cout<< val << " ";
cout << endl;
return 0;
}
