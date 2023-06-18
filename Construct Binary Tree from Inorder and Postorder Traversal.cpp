/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
 #include <bits/stdc++.h>
TreeNode<int>* solver(vector<int> &inorder, vector<int> &postorder, unordered_map<int, int> &hash, int &index, int start, int end){
    if(start == end){
        TreeNode<int>* root;
        root = new TreeNode<int>(postorder[index]);
        index--;
        return root;
    }
    if(start > end || end < 0) return NULL;
    TreeNode<int>* root;
    root = new TreeNode<int>(postorder[index]);
    int mid = hash[postorder[index]];
    index--;
    root->right = solver(inorder, postorder, hash, index, mid + 1, end);
    root->left = solver(inorder, postorder, hash, index, start, mid-1);
    return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
    int n = postOrder.size();
    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++){
        hash[inOrder[i]] = i;
    }
    int index = n-1;
    return solver(inOrder, postOrder, hash, index, 0, n-1);
}