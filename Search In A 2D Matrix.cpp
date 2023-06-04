#include <bits/stdc++.h>

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    for (int i = 0; i < mat.size(); i++)
    {
            if (binary_search(mat[i].begin(), mat[i].end(), target)){
            return true;
            }
    }
    return false;
}