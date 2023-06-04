#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
        vector<int>nums;
		for(int i=0;i<n;i++){
			nums.emplace_back(arr[i]);
		}
        
//     //Brute Force O(n^2)
//     int maxSubArray(vector<int>& nums) {
        // long long maxi=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     long long sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         maxi=max(maxi,sum);
        //     }
            
        // }
        // return maxi;
//     }
    
    
    // // Optimal approach O(n)
    // // int maxSubArray(vector<int>& nums) {
        long long maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(sum>maxi){
                maxi=sum;
            }
            
            
            if(sum<0){
                sum=0;
            }
        }
        if(maxi>=0){
            return maxi;

        }else{
            return 0;
        }

    // }


   
}

