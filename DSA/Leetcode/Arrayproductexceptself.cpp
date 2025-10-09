#include <iostream>
#include <vector>
using namespace std;

void productarray(vector <int> &arr){
    int n = arr.size();
    int suffix = 1;
    vector <int> ans(n,1);
    for(int i=1; i<n; i++){
        ans[i]= ans[i-1]*arr[i-1];
    }
    for(int j=n-2; j>-1; j--){
        suffix*=arr[j+1];
        ans[j]*=suffix;
    }
    for(int val: ans){
        cout<<val<<" ";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    productarray(arr);
    return 0;
}