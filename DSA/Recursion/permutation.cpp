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

void getPerms(vector<int>& arr, int idx){

    if(idx==arr.size()){
         displayArray(arr);
         return;
    }
    for(int i=idx; i<arr.size(); i++){
       swap(arr[idx],arr[i]);
       getPerms(arr,idx+1);
       swap(arr[idx],arr[i]);
    }

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
    getPerms(arr,0);
    return 0;
}

// time complexity = 2^n * O(1);