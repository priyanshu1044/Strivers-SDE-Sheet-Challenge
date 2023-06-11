#include <bits/stdc++.h>
void solve(int idx, int sum, int k, vector<int> &num, vector<vector<int>> &ans, vector<int> &v)
{
    if (idx == num.size())
    {
        if (sum == k)
            ans.emplace_back(v);
        return;
    }
    solve(idx + 1, sum, k, num, ans, v);
    v.emplace_back(num[idx]);
    solve(idx + 1, sum + num[idx], k, num, ans, v);
    v.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> v;
    solve(0, 0, k, arr, ans, v);
    return ans;
}