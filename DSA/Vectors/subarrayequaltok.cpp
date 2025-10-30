#include <iostream>
#include <vector>
using namespace std;

// We have to tell how many subarray are there that equal to target;

void subarraySum(vector<int>& nums, int target){
    int count=0;
    int n=nums.size();
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            if(sum==target){
               count++;
            }
        }
    }
    cout << count << endl;
    return; 
}

int main(){
    int n;
    cout << "No. of element: ";
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    int target;
    cout << "Enter target sum: ";
    cin >> target;
    subarraySum(m,target);
    return 0;
}