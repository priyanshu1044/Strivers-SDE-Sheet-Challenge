#include <bits/stdc++.h>

 

string fourSum(vector<int> arr, int target, int n) {

    // Write your code here.

    int cnt=0;

    string   Yes;

    string  No;

   

    sort(arr.begin(),arr.end());

   

    for(int i=0;i<n-3;i++)

    {

        for(int j=i+1;j<n-2;j++)

        {

            int  l=j+1;

            int r=n-1;

            while(l<r)

            {

                if(arr[i]+arr[j]+arr[l]+arr[r]==target)

                {

                    cnt++;

                    l++;

                    r--;

                }

                else if(arr[i]+arr[j]+arr[l]+arr[r]>target)

                {

                    r--;

                }

                else if(arr[i]+arr[j]+arr[l]+arr[r] < target)

                {

                     l++;

                }

 

            }

 

        }

    }

    if(cnt==0)

    {

        return "No";

    }

    if(cnt>=1)

    {

        return "Yes";

    }

}