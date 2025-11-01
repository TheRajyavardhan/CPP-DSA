#include <iostream>
#include <vector>
using namespace std;

bool chkSortedarr(vector<int>& nums, int n){

    if(n==1 || n==0) return true;

    // if(nums[n-1]>=nums[n-2]) return chkSortedarr(nums, n-1);
    // else return false;
    return (nums[n-1]>=nums[n-2]) && chkSortedarr(nums, n-1);
}

int main()
{
    int n;
    cout << "Enter the nums of element: ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << chkSortedarr(arr,n)<<endl;
    return 0;
}