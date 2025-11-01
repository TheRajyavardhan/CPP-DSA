#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> &arr, int target, int st, int end)
{
    int mid = st + (end - st) / 2;

    if (st <= end)
    {

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            st = mid + 1;
        else if (arr[mid] > target)
            end = mid - 1;

        return binSearch(arr, target, st, end);
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the nums of element: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    int target;
    cin >> target;
    int st = 0;
    int end = n - 1;
    cout << binSearch(arr, target, st, end) << endl;
    return 0;
}