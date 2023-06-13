#include <bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    queue<pair<int, int>> que;
    int tot = 0;
    int days = 0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 0)
            {
                tot++;
            }
            if (grid[i][j] == 2)
            {
                que.push({i, j});
            }
        }
    }
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    while (!que.empty())
    {
        int k = que.size();
        count += k;
        while (k--)
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != 1)
                    continue;
                grid[nx][ny] = 2;
                que.push({nx, ny});
            }
        }
        if (!que.empty())
            days++;
    }
   if(count!=tot) return -1;
   return days;
}