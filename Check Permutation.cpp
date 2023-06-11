#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    if(str1.length()!=str2.length()) return false;
    unordered_map<char, int> mpp;
    for(char c:str1) mpp[c]++;
    for(char c:str2){
        mpp[c]--;
        if(mpp[c]<0) return false;
    } 
    return true;
}