 #include <bits/stdc++.h>
// int zAlgorithm(string s, string p, int n, int m)
// {
//     // Write your code here
//     int cnt = 0;
//     for(int i=0;i<n;i++){
//         if(s[i]==p[0]){
//             if(s.substr(i,m)==p){
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

int zAlgorithm(string s, string p, int n, int m)
{
    int cnt=0;
    int idx=0;
    while(1){
        idx=s.find(p);
                if (idx >= 0 && idx <= s.length() - 1) {
                  cnt++;
                  s[idx] = '1';
                }
                else{
                    break;
                }
        }
    return cnt;
}