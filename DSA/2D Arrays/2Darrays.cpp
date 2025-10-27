#include <iostream>
#include <vector>
using namespace std;

pair<int,int> linearSearch(vector<vector<int>> &m,int rows, int column, int target){
      

    for(int i=0; i<rows; i++){ // rows
        for(int j=0; j<column; j++){ // column
            if(target==m[i][j]) return pair(i,j);
        }
        cout << endl;
    }
    cout << "No Pair." << endl;
    return pair(-1,-1);
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

    int target;
    cin >> target;
    cout << linearSearch(matrix,rows,column,target).first << " " << linearSearch(matrix,rows,column,target).second;
    return 0;
}