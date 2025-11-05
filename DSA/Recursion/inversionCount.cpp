#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& arr, int st, int end){
    int mid = st+(end-st)/2;
    int i=st, j=mid+1, invCount=0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
        else{
            temp.push_back(arr[j++]);
            invCount+=mid-i+1;
        }
    }
        while(i<=mid) temp.push_back(arr[i++]);
        while(j<=end) temp.push_back(arr[j++]);

        for(int k=0; k<temp.size(); k++) arr[st+k]=temp[k];
    
    return invCount;
}

int inversionCount(vector<int>& arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;
        
        int left=inversionCount(arr,st,mid);
        int right=inversionCount(arr,mid+1,end);

        return left+right+merge(arr,st,end);
    }
    return 0;
}

int main(){
    vector<int> arr={6,3,5,2,7};
    cout << inversionCount(arr,0,arr.size()-1) << endl;
    return 0;
}