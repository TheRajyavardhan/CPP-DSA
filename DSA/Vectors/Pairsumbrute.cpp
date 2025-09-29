#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach //

void pairSum(vector<int> &nums, int target)
{
    vector<int> indices(2);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                if (nums[i] + nums[j] == target)
                {
                    indices[0] = i;
                    indices[1] = j;
                    cout << "[" << indices[0] << ", " << indices[1] << "]" << endl;
                    return;
                }
            }
        }
    }

    return;
}

int main(){
    vector<int> nums = {2,7,11,15}; // It is sorted array given in the question; 
    int target = 9;
    pairSum(nums, target);
    return 0;
}
