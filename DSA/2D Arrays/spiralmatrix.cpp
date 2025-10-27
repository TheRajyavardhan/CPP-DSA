#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>>& m){
    int tr=0; // top row;
    int lc=m[0].size()-1; // left column;
    int br=m.size()-1; // bottom row;
    int rc=0; // right column;

    while(tr<=br && lc>=rc){
       for(int i=rc; i<=lc; i++){
        cout << m[tr][i]<<" ";
       }
       tr++;

       for(int i=tr; i<=br; i++){
        cout << m[i][lc]<<" ";
       }
       lc--;

       for(int i=lc; i>=rc; i--){
        if(tr>br) break;
        cout << m[br][i]<<" ";
       }
       br--;

       for(int i=br; i>=tr; i--){
        if(rc>lc) break;
        cout << m[i][rc]<<" ";
       }
       rc++;
    }
    cout << endl;
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
   spiralMatrix(matrix);
    return 0;
}
