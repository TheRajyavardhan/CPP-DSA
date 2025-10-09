#include <iostream>
#include <vector>
using namespace std;

// recursive function for binary search
int binarySearch(vector<int> &arr, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, target, start, mid - 1);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    { // Input array should be sorted
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int result = binarySearch(arr, target, 0, n - 1);
    cout << result << endl;
    return 0;
}
// Binary Search Algorithm (Recursive)
// Time Complexity: O(log n)
// Space Complexity: O(log n) due to recursive stack space