#include <iostream>
#include <vector>
using namespace std;

// Finding single nums in sorted array where non-single nums appear twice.
void singleNum(vector <int>& nums){
    int start=0, end=nums.size()-1;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        int LR = start - mid;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            cout << mid << endl;
            return ;
        }
        else if(nums[mid]==nums[mid-1]){ // Left side;
            if(LR%2==0){  // Even LR case;
           end = mid - 2; 
            }
            else { // Odd LR case;
                start = mid + 1;
            }
        }
        else {              //  Right side;
            if(LR%2==0){ // Even LR case;
            start = mid + 2;
            }
            else{   // Odd LR case;
                end = mid - 1;
            }
        }
    }
    return ;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    { // Input array should be sorted
        cin >> arr[i];
    }
    singleNum(arr);
    return 0;
}