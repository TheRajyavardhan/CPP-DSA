#include <iostream>
#include <vector>
using namespace std;

// Optimal approach using two pointers

void mostWater(vector<int> &height)
{
    int maxHold = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right)
    {
        int width = right - left;
        int heightOfWater = min(height[left], height[right]);
        maxHold = max(maxHold, heightOfWater * width);
        
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "Max water that can be held is: " << maxHold << endl;
    return;
}

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    mostWater(height);
    return 0;
}
// Time complexity: O(n)
// Space complexity: O(1)
