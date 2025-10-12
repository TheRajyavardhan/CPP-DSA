#include <iostream>
#include <vector>
using namespace std;

void RotatedsortedArray(vector<int> &nums , int target){
    int end = nums.size()-1;
    int start = 0;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid]==target){
            cout<<mid<< endl;
            return;
        }
        // find first which is sorted;
        if(nums[start]<=nums[mid]){ // check left part is sorted or not;
            if(nums[start]<=target && target<=nums[mid]){
                end = mid-1;
            }// target is in left part;
            else{
                start = mid+1;
            } // target is in right part;
        }
        else{
            if(nums[mid]<=target && target<=nums[end]){
                start = mid+1; // target is in right part;
            }
            else{
                end = mid-1; // target is in left part;
            }
        }
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    RotatedsortedArray(nums,target);
    return 0;
}