#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int a;          // Repeated Value
    int b;          // Missing value
    int actSum = 0; // actual sum of matrix
    int n = grid.size();
    unordered_set<int> s;

    // Repeated Values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                cout << a << endl;
            }
            s.insert(grid[i][j]);
        }
    }
    int expSum = (n * n * (n * n + 1)) / 2;
    b = expSum + a - actSum;
    cout << b << endl;

    return;
}

int main()
{
    int rows;
    cout << "No. of rows: ";
    cin >> rows;
    int column;
    cout << "No of column: ";
    cin >> column;
    vector<vector<int>> matrix(rows, vector<int>(column));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }
    findMissingAndRepeatedValues(matrix);
    return 0;
}