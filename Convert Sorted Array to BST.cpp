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
TreeNode<int>* sol(vector<int> &arr, int e, int s){
    // Write your code here.
    if(s>e)
        return NULL;
    
    int mid = (s+e)/2;
    TreeNode<int>* temp = new TreeNode<int>(arr[mid]);
    temp->left = sol(arr, mid-1, s);
    temp->right = sol(arr, e, mid+1);
    return temp;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return sol(arr, n-1, 0);

}