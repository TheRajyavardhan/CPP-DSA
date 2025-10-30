#include <iostream>
#include <vector>
#include <set>
using namespace std;
#include <algorithm>

void displayVector(vector<int>& vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i];
    }
    cout << endl;
    return ;
}

void threeSum(vector<int> &nums)
{
    set<vector<int>> s;
    vector<vector<int>> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(),temp.end());

                    if (s.find(temp)==s.end()){
                        s.insert(temp);
                        ans.push_back(temp);
                        displayVector(temp);
                    }
                }
            }
        }
    }
    return ;
}

int main(){
    int n;
    cout << "No. of element: ";
    cin >> n;
    vector<int> m(n);
    for(int i=0; i<n; i++){
        cin >> m[i];
    }
    threeSum(m);
    return 0;
}