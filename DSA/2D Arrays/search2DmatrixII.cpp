#include <vector>
#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix[0].size();
    int m = matrix.size();
    int r = 0, c = n - 1;

    while (r < m && c >= 0)
    {
        if (target == matrix[r][c])
            return true;
        else if (target > matrix[r][c])
            r++;
        else if (target < matrix[r][c])
            c--;
    }
    return false;
}

int main(){
    int rows;
    cout << "No. of rows: ";
    cin >> rows;
    int column;
    cout << "No of column: ";
    cin >> column;
    vector<vector<int>> matrix(rows, vector<int>(column));
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cin >> matrix[i][j] ;
        }
    }
    int target;
    cout << "Enter the target: ";
    cin >> target ;
    cout << searchMatrix(matrix,target) << endl;
    return 0;
}
