#include <bits/stdc++.h>
class Temp {
public:
    int height;
    int leftIndex;
    int rightIndex;
    Temp(int h, int li, int ri) {
        height = h;
        leftIndex = li;
        rightIndex = ri;
    }
};
int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
    int maxHeight = 0;
    queue<Temp> que;
    if(N >= 1) {
        Temp tmp(0, 0, N - 1);
        que.push(tmp);
    }
    unordered_map<int, int> mpp;
    for(int i = 0;i < N; i++) {
        mpp[inorder[i]] = i;
    }
    for(int i = 0;i < N; i++) {
        Temp tmp = que.front();
        que.pop();
        maxHeight = max(tmp.height, maxHeight);
        int li = tmp.leftIndex;
        int ri = tmp.rightIndex;
        int rootIndex;
        rootIndex = mpp[levelOrder[i]];
        if(rootIndex - 1 >= li) {
            Temp leftSubTree(tmp.height + 1, li, rootIndex - 1);
            que.push(leftSubTree);
        }
        if(rootIndex + 1 <= ri) {
            Temp rightSubTree(tmp.height + 1, rootIndex + 1, ri);
            que.push(rightSubTree);
        }
    }
    return maxHeight;
}