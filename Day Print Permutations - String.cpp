#include <bits/stdc++.h> 
void sol(string &s, int idx, vector<string> &ans)
{
    if (idx == s.length())
    {
        ans.emplace_back(s);
        return;
    }
    for (int i = idx; i < s.length(); i++)
    {
        swap(s[i],s[idx]);
        sol(s, idx + 1 , ans);
        swap(s[i],s[idx]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
     vector<string> ans;
    sol(s, 0, ans);
    return ans;
}