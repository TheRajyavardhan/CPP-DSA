#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// void findDuplicate(vector<int>& arr){
//     int ans;
//     int n = arr.size();
//     unordered_set<int> s;
//     for(int i=0; i<n; i++){
//         if(s.find(arr[i])!=s.end()){
//             ans = arr[i];
//         }
//         s.insert(arr[i]);
//     }
//     cout << ans << endl;
//     return ;
// }

void findDuplicate(vector<int>& arr){
    int slow = arr[0];
    int fast = arr[0];
    
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    slow=arr[0];

    while (slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    cout << slow << endl;
    return ;
}

int main(){
    cout << "Num of element: ";
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    findDuplicate(m);
    return 0;
}