#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int> adj_list[vertex];
    for(int i= 0; i < edges.size(); i++){
        adj_list[edges[i].first].push_back(edges[i].second);
        adj_list[edges[i].second].push_back(edges[i].first);
    }
    for(int i = 0; i < vertex; i++){
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    vector<int> ans;
    vector<int> vis(vertex, 0);
    for(int i = 0; i < vertex ; i++){
        queue<int> que;
        if(vis[i] == 0){
            vis[i] = 1;
            que.push(i);
            while(!que.empty()){
                int top = que.front();
                que.pop();
                ans.push_back(top);
                for(auto it: adj_list[top]){     
                    if(vis[it] == 0){
                        que.push(it);
                        vis[it] = 1;
                    } 
                }
            }
        }
    }
    return ans;
}