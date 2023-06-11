#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    vector<pair<int,int>> v;
    for(int j=0;j<n;++j){
        v.emplace_back(make_pair(end[j],start[j]));
    }
    sort(v.begin(),v.end());
    int e = -1;
    int ans = 0;
    for(auto x : v){
        if(x.second>e-1){
            ans++;
            e = x.first;
        }
    }
    return ans;
}