#include <iostream>
#include <vector>
#include <set>
using namespace std;
#include <algorithm>

void displayVector(vector<int> &vec)
{
    for (auto it : vec)
    {
        cout << it;
    }
    cout << endl;
    return;
}

void threeSum(vector<int> &nums)
{
    set<vector<int>> uniqueTriplet;
    vector<vector<int>> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int target = -nums[i]; // b+c=-a = target
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int third = target - nums[j];
            if (s.find(third) != s.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                if (uniqueTriplet.find(temp) == uniqueTriplet.end())
                {
                    uniqueTriplet.insert(temp);
                    ans.push_back(temp);
                    displayVector(temp);
                }
            }
            s.insert(nums[j]);
        }
    }
    return;
}

int main()
{
    int n;
    cout << "No. of element: ";
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    threeSum(m);
    return 0;
}