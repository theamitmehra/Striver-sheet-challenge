#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>&board,int row,int col) {
    int i=row,j=col;
    while(i>=0) {
        if(board[i][col]==1) {
            return false;
        }
        i--;
    }
    i=row;
    while(i>=0 && j>=0) {
        if(board[i][j]==1) {
            return false;
        }
        i--;
        j--;
    }
    i=row;
    j=col;
    while(i>=0 && j<board[0].size()) {
        if(board[i][j]==1) {
            return false;
        }
        i--;
        j++;
    }
    return true;
}

void helper(vector<vector<int>>&board,vector<vector<int>>&ans,int row) {
    if(row==board.size()) {
        vector<int>tmp;
        for(auto it:board) {
            for(auto d:it) {
                tmp.push_back(d);
            }
        }
        ans.push_back(tmp);
        return;
    }
    for(int j=0;j<board[0].size();j++) {
        if(isValid(board,row,j)) {
            board[row][j]=1;
            helper(board,ans,row+1);
            board[row][j]=0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>board(n,vector<int>(n,0)),ans;
    helper(board,ans,0);
    return ans;
}