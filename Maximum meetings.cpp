#include <bits/stdc++.h> 
bool cmp(const pair<int, pair<int,int>>& a, const pair<int, pair<int,int>>& b) {
    if(a.first<b.first) return true;
    else if(a.first>b.first) return false;
    else if(a.second.second<b.second.second) return true;
    else return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int, pair<int,int> >> meett;
    int sSize=start.size();
    int eSize=end.size();

    for(int i=0;i<sSize;i++){
        meett.push_back( {end[i], {start[i],i+1} } );
    }
    sort(meett.begin(),meett.end(),cmp);
    int t=-1;
    vector<int> ans;
    for(int i=0;i<sSize;i++){
        if(meett[i].second.first>t  ){
            ans.push_back( meett[i].second.second );
            t=meett[i].first;
        }
    }
    return ans;
}