#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// divide and conquer algorithm

void merge(vector<int>& arr,int st,int end){ // O(n);
    int mid = st+(end-st)/2;
    int i = st;
    int j = mid + 1;

    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while(i<=mid ) temp.push_back(arr[i++]);
    while(j<=end ) temp.push_back(arr[j++]);
    
    for(int k=0; k<temp.size(); k++){
        arr[k+st]=temp[k];
    }
    return ;
}

void mergeSort(vector<int>& arr,int st,int end){ // (logn)
    if(st<end){

    int mid = st + (end-st)/2;
    mergeSort(arr,st,mid); // Left
    mergeSort(arr,mid+1,end); // Right

    merge(arr,st,end);
    }
    return ;
}

int main(){
    int n;
    cout << "No. of elments: "; 
    cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
       cin >> arr[i];
    }
    mergeSort(arr, 0 , n-1);
    for(int i=0; i<n; i++){
       cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// TC = O(nlogn)
// SC = O(n);
