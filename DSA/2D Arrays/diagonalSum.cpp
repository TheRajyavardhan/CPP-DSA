#include <iostream>
#include <vector>
using namespace std;


void  diagonalSum(vector<vector<int>> &m,int rows, int column){
      int totalSum = 0;
    // Time complexity O(n^2) 
    // for(int i=0; i<rows; i++){ // rows
    //     for(int j=0; j<column; j++){ // column
    //         if(i==j) totalSum+=m[i][j];
    //         else if(j==column-1-i){
    //             totalSum+=m[i][j];
    //         }
    //     }
    // }

    // Time complexity O(n)
    if( rows!=column){ 
        cerr<< "NO Diagonal Sum" << endl;
    return;
    }
    
    for(int i=0; i<rows; i++){
        totalSum += m[i][i];
        if(i != rows-1-i) totalSum+=m[i][rows-i-1];
    }

    cout << totalSum << endl;
}

int main(){
    int rows = 3;
    int column = 3;
    vector<vector<int>> matrix(rows, vector<int>(column));
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cin >> matrix[i][j] ;
        }
    }

     diagonalSum(matrix,rows,column);
    return 0;
}