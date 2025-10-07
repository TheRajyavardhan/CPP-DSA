#include <iostream>
#include <vector>
using namespace std;

// Brute force approach

void mostWater(vector<int> &height)
{
    int maxHold = 0;
    for (int i = 0; i < height.size(); i++)
    {
        int width = 1;
        for (int j = i + 1; j < height.size(); j++)
        {
            int heightOfWater = min(height[i], height[j]);
            maxHold = max(maxHold, heightOfWater * width);
            width++;
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
// Time complexity: O(n^2)
// Space complexity: O(1)
