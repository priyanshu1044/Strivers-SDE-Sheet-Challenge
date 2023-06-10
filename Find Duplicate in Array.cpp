#include <bits/stdc++.h>

// int findDuplicate(vector<int> &arr, int n){
// 	// Write your code here.
	
// }


// class Solution {
// public:
    int findDuplicate(vector<int>& nums,int n) {
        int i=0;
        while(i<nums.size()){
            if (nums[i]!=i+1) {
                int correct =nums[i]-1;
                if(nums[i]!=nums[correct]){
                    swap(nums[i],nums[correct]);
                }else{
                    return nums[i];
                }
            }else{
                i++;
            }
        }
        return -1;
    }
// };