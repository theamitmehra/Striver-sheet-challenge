#include "code.cpp"

bool searchMatrix(vector<vector<int>>& mat, int target) {

    int n = mat.size();
    int m = mat[0].size();

    int i = n-1;
    int j = 0;

    while(i >= 0 && j < m)
    {
        if(mat[i][j] == target)
            return true;

        if(mat[i][j] > target){
            i--;
        }
        else{
            j++;
        }
    }

    return false;

}