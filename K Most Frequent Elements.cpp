#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    vector<int>ans;
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto i:mpp)
    {
        pq.push({i.second,i.first});
    }
    for(int i=1;i<=k;i++)
    {
        ans.emplace_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}