#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int>adj[n+1];
    int indegree[n+1]={0};
    for(auto p:edges){
        adj[p.first].push_back(p.second);
        indegree[p.second]++;
    }
    queue<int>que;
    for(int i=1;i<=n;i++) {
        if(indegree[i]==0) que.push(i);
    }
    int cnt=0;
    while(!que.empty()){
      auto it=que.front();
      que.pop();
      cnt++;
      for(auto v : adj[it]){
        indegree[v]--;
        if(indegree[v]==0) que.push(v);
      }
    }
    if(cnt==n) return false;
    return true;
}