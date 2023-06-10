#include <bits/stdc++.h>

vector<long long int> generateRow(int row){
  long long int ans=1;
  vector<long long int> ansRow;
  ansRow.emplace_back(ans);
  for(int i=1;i<row;i++){
    ans=ans*(row-i);
    ans=ans/(i);
    ansRow.emplace_back(ans);
  }
  return ansRow;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>anss;
  for(int i=1;i<=n;i++){
    vector<long long int>op=generateRow(i);
    anss.emplace_back(op);

  }
  return anss;
  
}
