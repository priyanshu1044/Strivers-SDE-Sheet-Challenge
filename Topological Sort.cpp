#include <bits/stdc++.h>
//bfs approach (kahns algorithm)
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
    vector<int>adj[v];
    for(auto it:edges)
    {
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
    }
    vector<int>degree(v+1,0);
    for(auto i:adj)
    {
        for(auto it:i)
        {
            degree[it]++;
        }
    }
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(degree[i]==0)
        {
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        ans.push_back(p);
        for(auto it:adj[p])
        {
            degree[it]--;
            if(degree[it]==0)
            {
                q.push(it);
            }
        }
    }
    return ans;
}