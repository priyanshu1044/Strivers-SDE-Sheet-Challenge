#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getLevelOrder(TreeNode<int> *root)
{
    // vector<int>ans;
    int ans = 0;
    if(root==NULL){
        return ans;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans = max(ans , n);
        for(int i = 0; i<n ; i++){
        TreeNode<int>* temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if (temp->right) {
          q.push(temp->right);
        }
        // ans.push_back(temp->val);
        }
    }
    return ans;
}
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    return getLevelOrder(root);
}