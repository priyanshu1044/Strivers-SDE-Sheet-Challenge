#include <bits/stdc++.h> 
void sol(int idx , vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
    ans.emplace_back(ds);
    for (int i = idx ; i < arr.size() ; i++){
        if (i != idx and arr[i] == arr[i - 1]) {
          continue;
        }
        ds.emplace_back(arr[i]);
        sol(i+1, arr, ds, ans);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int> ds;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    sol(0, arr, ds , ans);
    return ans;
}