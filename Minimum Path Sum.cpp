#include <bits/stdc++.h>

int sol(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
        return grid[0][0];
    if (i < 0 || j < 0)
        return 1e9;

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = grid[i][j] + sol(i - 1, j, grid, dp);
    int left = grid[i][j] + sol(i, j - 1, grid, dp);

    return dp[i][j] = min(up, left);
}

int minSumPath(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    if (n == 1 && m == 1)
        return grid[n][m];
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return sol(n - 1, m - 1, grid, dp);
}