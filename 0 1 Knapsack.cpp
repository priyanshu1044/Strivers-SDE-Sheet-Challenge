int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int> (w + 1, 0));

	for(int i = weights[0]; i <= w; i++)
		dp[0][i] = values[0];

	for(int i = 1; i < n; i++) {
		for(int j = 0; j <= w; j++) {
			int notTake = dp[i - 1][j];
			int take = -1e9;
			if(weights[i] <= j)
				take = values[i] + dp[i - 1][j - weights[i]];

			dp[i][j] = max(take, notTake);
		}
	}

	return dp[n - 1][w];

}