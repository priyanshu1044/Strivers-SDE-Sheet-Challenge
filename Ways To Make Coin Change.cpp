#include <bits/stdc++.h>
long change(int sum, vector<int>& coins) {
        int n=coins.size();
        long t[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0){
                    t[i][j]=0;
                    
                }
                if(j==0){
                    t[i][j]=1;
                }
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(coins[i-1]<=j){
                    t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
        
        
    }
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.emplace_back(denominations[i]);
    }
    return change(value,ans);


}