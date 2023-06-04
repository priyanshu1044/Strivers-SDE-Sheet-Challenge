#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
        int left = m-1;
        int right = n-1;
        int k = m+n-1;
        while(left>=0 && right>=0){
            if(arr1[left] > arr2[right]){
                arr1[k] = arr1[left];
                left--; k--;
            }
            else{
                arr1[k] = arr2[right];
                right--; k--;
            }
        }
        while(right>=0){
            arr1[k] = arr2[right];
            right--; k--;
        }
    return arr1;

}

