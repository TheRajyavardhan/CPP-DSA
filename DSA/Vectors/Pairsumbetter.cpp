#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> &nums, int target)
{
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        int ps = nums[i] + nums[j];
        if (ps == target)
        {
            cout << "[" << i << ", " << j << "]" << endl;
            return;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

int main(){
    vector<int> nums = {2,7,11,15}; // It is sorted array given in the question; 
    int target = 26;
    pairSum(nums, target);
    return 0;
}
// Optimal Approach - Using 2 pointer technique //