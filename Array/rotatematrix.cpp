// #include <bits/stdc++.h>
#include"code.cpp"

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int i, j, l, r, top, bottom, k, temp;

    l = 0;
    top = 0;
    r = m - 1;
    bottom = n - 1;

    while (top < bottom && l < r)
    {

        temp = mat[top][l];

        for (i = l + 1; i <= r; i++)

        {

            k = mat[top][i];

            mat[top][i] = temp;

            temp = k;
        }

        top++;

        for (i = top; i <= bottom; i++)

        {

            k = mat[i][r];

            mat[i][r] = temp;

            temp = k;
        }

        r--;

        for (i = r; i >= l; i--)

        {

            k = mat[bottom][i];

            mat[bottom][i] = temp;

            temp = k;
        }

        bottom--;

        for (i = bottom; i >= top; i--)

        {

            k = mat[i][l];

            mat[i][l] = temp;

            temp = k;
        }

        l++;

        mat[top - 1][l - 1] = temp;
    }
}