#include <bits/stdc++.h> 

int sol(vector<int>&arr,int start,int end,vector<vector<int>>&t) {
    if(start==end-1) {
        return t[start][end]=0;
    }
    if(t[start][end]!=-1) {
        return t[start][end];
    }
    int ans=INT_MAX;
    for(int i=start+1;i<end;i++) {
        if(t[start][i]==-1) {
            t[start][i]=sol(arr,start,i,t);
        }
        if(t[i][end]==-1) {
            t[i][end]=sol(arr,i,end,t);
        }
        ans=min(ans,t[start][i]+t[i][end]+(arr[start]*arr[i]*arr[end]));
    }
    return t[start][end]=ans;
}

int matrixMultiplication(vector<int> &arr, int N) {
    vector<vector<int>>t(N+1,vector<int>(N+1,-1));
    return sol(arr,0,N-1,t);
}