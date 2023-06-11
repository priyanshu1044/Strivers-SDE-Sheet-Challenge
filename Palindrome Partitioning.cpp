#include <bits/stdc++.h>
bool isPal(string &s,int start,int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void sol(int idx , string &s,vector<vector<string>>&ans,vector<string>&path)
{
    if(idx==s.size()){
        ans.emplace_back(path);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(isPal(s,idx,i)){
            path.emplace_back(s.substr(idx,i-idx+1));
            sol(i+1,s,ans,path);
            path.pop_back();
        }
    }
    
}

vector<vector<string>> partition(string &s) 
{
    vector<vector<string>>ans;
    vector<string>path;
    sol(0,s,ans,path);
    return ans;
}