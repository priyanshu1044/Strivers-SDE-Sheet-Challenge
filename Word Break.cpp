#include <bits/stdc++.h> 
bool wordBreak(vector < string > & arr, int n, string & s) {
    // Write your code here.
    set<string> st;
        for(int i=0;i<arr.size();i++) st.insert(arr[i]);
        int i=0;
        string tmp;
        int ind =-1;
        while(i<s.size()){
            tmp+=s[i];
            if(st.find(tmp)!=st.end()){
                ind = i;
                tmp="";
            }
            i++;
        }
        if(ind==s.size()-1) return 1;
        return 0;
}