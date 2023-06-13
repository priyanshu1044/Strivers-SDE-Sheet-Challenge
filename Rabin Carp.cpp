vector<int> stringMatch(string &str, string &pat) {
    // Write your code here
    vector<int>res;
    int n = str.size(), m = pat.size();
    for(int i=0;i<n;i++){
        if(str[i]==pat[0]){
            if(str.substr(i,m)==pat){
                res.push_back(i);
            }
        }
    }
    return res;
}