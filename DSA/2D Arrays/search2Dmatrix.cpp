#include <vector>
#include <iostream>
using namespace std;

void search2D(vector<vector<int>> mat, int m, int n, int target){
    int str = 0;
    int endr = m-1; // rows end
    int fr; // final row
    while(str<=endr){
        int midr = str + (endr - str)/2;
        if(target >= mat[midr][0] && target <= mat[midr][n-1]){
            fr = midr;
            break;
        }
        else if(target < mat[midr][0]) endr=midr-1;
        else if(target > mat[midr][n-1]) str=midr+1;
    }
    cout << fr;
    int stc = 0;
    int endc = n-1;
    int fc;
    while(stc<=endc){
        int midc = stc + (endc-stc)/2;
        if(target == mat[fr][midc]){
             fc=midc;
             break;
        }
        else if(target < mat[fr][midc]) endc=midc-1;
        else if(target > mat[fr][midc]) stc=midc+1;
    }
    cout << fc << endl;
    if(target==mat[fr][fc]) cout << "Found" << endl;
    return ;
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
    search2D(matrix,rows,column,target);
    return 0;
}