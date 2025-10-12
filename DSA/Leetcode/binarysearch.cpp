#include <iostream>
#include <vector>
using namespace std;

void binarySearch(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;

    int index = 0;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (arr[mid]!= target)
    {
        cout << "Target not found" << endl;
        return;
    }
    cout << index << endl;
    return;
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
    binarySearch(arr, target);
    return 0;
}
// Binary Search Algorithm
// Time Complexity: O(log n)
// Space Complexity: O(1)