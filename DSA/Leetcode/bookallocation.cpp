#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &nums, int st, int mid)
{
    int m = 1;
    int pages = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>mid) return false;
        if (nums[i] + pages <= mid)
        {
            pages += nums[i];
        }
        else
        {
            m++;
            pages = nums[i];
        }
    }
    return m > st ? false : true;
}


void bookAllocation(vector<int> &nums, int st)
{
    int start = 1;
    int sum = 0;
    int ans, mid;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int end = sum;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (isvalid(nums, st, mid) == true)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
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
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the no. of student: ";
    cin >> m;
    if (m > n)
        return -1;
    bookAllocation(arr, m);
    return 0;
}