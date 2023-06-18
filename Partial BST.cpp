#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool sol(BinaryTreeNode<int> *temp, long long minVal, long long maxVal) {
    if(!temp)
        return true;

    if(temp->data < minVal or temp->data > maxVal)
        return false;
    
    return sol(temp->left, minVal, temp->data) and sol(temp->right, temp->data, maxVal);
}

bool validateBST(BinaryTreeNode<int> *root) {
    return sol(root, LONG_MIN, LONG_MAX);
}