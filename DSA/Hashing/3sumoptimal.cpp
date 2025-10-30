#include <iostream>
#include <vector>
#include <set>
using namespace std;
#include <algorithm>

void displayVector(vector<vector<int>> &vec)
{
    for(int i=0; i<vec.size();i++){
        for(int j=0; j<vec[i].size(); j++){
            cout << vec[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==nums[i-1]) continue;
        int j=i+1, k=n-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum>0) k--;
            if(sum<0) j++;

            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++,k--;
            }
            while(j<k && j>i+1 && nums[j]==nums[j-1]) j++;
        }
    }
    displayVector(ans);
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