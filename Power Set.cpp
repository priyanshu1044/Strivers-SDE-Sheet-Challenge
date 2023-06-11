#include <bits/stdc++.h> 
vector<vector<int>> helper(vector<int>&v,int i)
{
    if(i>=v.size())  return {{}};
    vector<vector<int>> partialans= helper(v,i+1);
    vector<vector<int>> ans;
    for(vector<int> x:partialans) 
    {
        ans.emplace_back(x);
    }
     for(vector<int> x:partialans) 
    {
        vector<int> temp;    
        temp.emplace_back(v[i]); 
       for(int y:x)
       {
           temp.emplace_back(y);
       }
       ans.emplace_back(temp);
    }
    return ans;
}
vector<vector<int>> pwset(vector<int>v)
{
    return helper(v,0);
}