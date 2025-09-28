#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Kadane's Algorithm //

void MaxSubArray(vector<int> &vec)
{
    int currSum = 0, maxSum = INT_MIN;
    for (int val : vec)
    {
        currSum += val;
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum Subarray Sum is: " << maxSum << endl;
    return;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    MaxSubArray(vec);
    return 0;
}