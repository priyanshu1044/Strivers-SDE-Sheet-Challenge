#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

        int mini=prices[0],profit=0,cost;
        for(int i=1;i<prices.size();i++){
            cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return  profit;
}