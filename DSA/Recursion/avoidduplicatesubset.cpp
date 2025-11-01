#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArray(vector<int>& arr){
    cout << "[";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout<< "]" << endl;
    return ;
}

void printSubset(vector<int>& arr, vector<int>& ans, int i){

    if(i==arr.size()){
         displayArray(ans);
         return;
    }

    
    ans.push_back(arr[i]);
    printSubset(arr,ans,i+1);

    ans.pop_back();
    int idx = i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]) idx++;
    printSubset(arr,ans,idx);

    return ;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    // int i = 0;
    sort(arr.begin(), arr.end());
    printSubset(arr,ans,0);
    return 0;
}

// time complexity = 2^n * O(1);