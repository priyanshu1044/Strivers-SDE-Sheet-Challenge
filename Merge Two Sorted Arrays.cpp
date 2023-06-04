#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int j=0;
        for (int i = 0; i < m; i++)
        {
            if(arr1[i]>=arr2[j]){
                arr1[i]=arr1[i];
            
            }
            else
            {
                arr1[i+j]=arr2[j];
                j++;
            }
        }
		return arr1;

}

