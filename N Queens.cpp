#include <bits/stdc++.h>
void sol(int row, int n, vector<vector<int>> &mtx, vector<vector<int>> &ans)
{
    if (row == n)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(mtx[i][j]);
            }
        }
        ans.push_back(temp);
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (satisfy(row, col, mtx, n))
        {
            mtx[row][col] = 1;
            sol(row + 1, n, mtx, ans);
            mtx[row][col] = 0;
        }
    }
}
bool satisfy(int row, int col, vector<vector<int>> &mtx, int n)
{
    for (int r = 0; r < row; r++)
    {
        if (mtx[r][col] == 1)
            return false;
    }
    int c = col;
    int r = row;
    while (c >= 0 && r >= 0)
    {
        if (mtx[r][c] == 1)
            return false;
        c--;
        r--;
    }
    r = row;
    c = col;
    while (r >= 0 && c < n)
    {
        if (mtx[r][c] == 1)
            return false;
        r--;
        c++;
    }
    return true;
}
vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> mtx(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    sol(0, n, mtx, ans);
    return ans;
    // Write your code here.
}