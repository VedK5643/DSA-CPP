#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    
   bool issafe(vector<vector<char>>&board,int row,int col,int n){
    for(int j=0;j<9;j++){
        if(board[row][j]==n){
            return false;
        }
    }

    for(int i=0;i<9;i++){
        if(board[i][col]==n){
            return false;
        }
    }
    int srow=(row/3)*3;
    int scol=(col/3)*3;
    for(int i=srow;i<=srow+2;i++){
        for(int j=scol;j<=scol+2;j++){
            if(board[i][j]==n){
                return false;
            }
        }
    }
    return true;
   }
   
   
   
   bool Sudoku(vector<vector<char>> &board, int row, int col){
    
    if(row==9){
        return true;
    }
    
    
    int nextrow=row,nextcol=col+1;
    if(nextcol==9){
        nextrow=row+1;
        nextcol=0;
    }
    if(board[row][col]!='.'){
        return Sudoku(board,nextrow,nextcol);
    }   

    for(char i='1';i<='9';i++){
        if(issafe(board,row,col,i)){
            board[row][col]=i;
            if(Sudoku(board,nextrow,nextcol)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;
   } 
    
    
    void solveSudoku(vector<vector<char>>& board) {
        
        Sudoku(board,0,0);
        
    }
};