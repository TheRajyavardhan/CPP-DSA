#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void  maxRowSum(vector<vector<int>> &m,int rows, int column){
      int maxSum = INT_MIN;
      
    for(int i=0; i<rows; i++){ // rows
        int rowSum = 0;
        for(int j=0; j<column; j++){ // column
            rowSum+=m[i][j];
        }
        maxSum = max(rowSum, maxSum);
    }
    cout << maxSum << endl;
    return;
}

int main(){
    int rows = 3;
    int column = 3;
    vector<vector<int>> matrix(rows, vector<int>(column));
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cin >> matrix[i][j] ;
        }
    }

     maxRowSum(matrix,rows,column);
    return 0;
}