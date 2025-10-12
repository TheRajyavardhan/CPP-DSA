#include <iostream>
#include <vector>
using namespace std;

void mountainArray(vector<int> &nums){
    int start = 1;
    int end = nums.size()-2;
    int mid;
    while(start<=end){
        mid = start + (end - start)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            cout<<mid<< endl;
            return;
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ;
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
    mountainArray(nums);
    return 0;
}
