// #include <bits/stdc++.h> 
// vector<int> countDistinctElements(vector<int> &arr, int k) 
// {
//     // Write your code here
// 	unordered_set<int>s;
//     vector<int>ans;
//     if(k>arr.size())
//     {
//         return ans;
//     }
//     for(int i=0;i<=arr.size()-k;i++)
//     {
//         for(int j=i;j<i+k;j++)
//         {
//             s.insert(arr[j]);
//         }
//         ans.push_back(s.size());
//         s.erase(arr[i]);
//     }
//     return ans;
// }
#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
   unordered_map<int,int>  mp;
   int i = 0 , n = arr.size();
   vector<int> ans;
   for(int j=0;i<=n-k;j++){
        mp[arr[j]]++;
        if (j >= k - 1) {
          ans.push_back(mp.size());
          mp[arr[i]]--;
          if (mp[arr[i]] == 0)
            mp.erase(arr[i]);
          i++;
        }
   }
   return ans;
}