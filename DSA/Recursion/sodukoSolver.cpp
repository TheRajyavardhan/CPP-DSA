#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col,int dig){
     for(int i=0; i<9; i++){
        if(board[i][col]==dig)
        return false;
        if(board[row][i]==dig)
        return false;
     }
     
     int sr = (row/3)*3;
     int sc = (col/3)*3;

     for(int i=sr; i<sr+3; i++){
        for(int j=sc; j<sc+3; j++){
            if(board[i][j]==dig) return false;
        }
     }
     return true;
}

bool sodukoSolver(vector<vector<char>>& board, int row, int col){ // next call

    if(col==9) row++,col=0;
    if(row==9) return true; // base case;
    
    if(board[row][col+1]!='.') return sodukoSolver(board,row,col);

    for(char dig='1'; dig<='9';dig++){
        if(isSafe(board,row,col,dig)){
            board[row][col]=dig; // next call 
            if(sodukoSolver(board,row,col+1)) return true; // backtrack;
            board[row][col]='.'; // in false condition
        }
    }
    return false; // no dig fit in spot 
}

int main(){
    // I don't have question; question is available on leetcode;
   
}