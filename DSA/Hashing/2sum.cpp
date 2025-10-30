#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void twoSum(vector<int> &m, int target)
{
    unordered_map<int, int> vec; // Here element is key, and index is value;
    for (int i = 0; i < m.size(); i++)
    {
        int first = m[i];
        int sec = target - first;

        if (vec.find(sec) != vec.end())
        { // find give iterator if value is false give end() iterator;
            cout << "index of nums.= " << i << " " << vec[sec] << endl;
            return;
        }
        else
        {
            vec[first] = i;
            cout << first << "-->" << vec[first] << endl;
        }
    }
    cout << "NO pair found" << endl;
    return;
}

int main()
{
    cout << "Num of element: ";
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    int target;
    cout << "Enter the sum: ";
    cin >> target;
    twoSum(m, target);
    return 0;
}