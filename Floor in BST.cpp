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
void sol(TreeNode<int> *root, int& ans, int x){
    if(!root) return;
    if(root->val>x) return sol(root->left, ans, x);
    else{ans = root->val; return sol(root->right, ans, x);}
}

int floorInBST(TreeNode<int> * root, int x)
{
    int ans=-1;
    sol(root, ans, x);
    return ans;

}