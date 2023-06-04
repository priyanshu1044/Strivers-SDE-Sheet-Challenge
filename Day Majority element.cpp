#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	// int majorityElement(vector<int>& nums) {
		vector<int >nums;
		for(int i=0;i<n;i++){
			nums.emplace_back(arr[i]);
		}
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
                
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){cnt1++;}
            
        }
        if(cnt1>(nums.size()/2)){
            return el;
        }
        return -1;
    // }
}