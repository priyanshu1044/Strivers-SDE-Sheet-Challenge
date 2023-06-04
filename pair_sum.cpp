#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>

vvi pairSum(vi &arr, int s)
{
    // Write your code here.
    int cnt = 0;

    vvi ans;

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {

        if (mp[s - arr[i]])
        {

            int val = mp[s - arr[i]];

            vi output;

            while (val--)
            {

                output.emplace_back(min(arr[i], s - arr[i]));

                output.emplace_back(max(arr[i], s - arr[i]));

                ans.emplace_back(output);
            }
        }

        mp[arr[i]]++;
    }

    sort(ans.begin(), ans.end());

    return ans;
}
