#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool sol(TreeNode<int> *root, stack<TreeNode<int> *> &pt,
                 TreeNode<int> *leaf)
{
    pt.push(root);

    if (!root->left and !root->right)
    {
        if (root->data == leaf->data)
            return true;
        else
            pt.pop();
        return false;
    }

    if (root->left)
    {
        if (sol(root->left, pt, leaf))
            return true;
    }

    if (root->right)
    {
        if (sol(root->right, pt, leaf))
            return true;
    }

    pt.pop();
    return false;
}

TreeNode<int> *invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
    if (!root)
        return NULL;

    stack<TreeNode<int> *> pt;
    sol(root, pt, leaf);

    TreeNode<int> *head = pt.top();
    pt.pop();

    TreeNode<int> *par = head;
    while (!pt.empty())
    {
        auto p = pt.top();
        pt.pop();

        if (p->right == head)
        {
            p->right = p->left;
            p->left = NULL;
        }
        else
        {
            p->left = NULL;
        }

        head->left = p;
        head = p;
    }

    return par;
}