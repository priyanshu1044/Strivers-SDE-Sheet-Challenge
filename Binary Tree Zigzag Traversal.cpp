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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;
    if (root == NULL)
        return ans;
    deque<BinaryTreeNode<int> *> dque;
    dque.push_front(root);
    bool flag = true;
    while (!dque.empty())
    {
        int n = dque.size();
        for (int i = 0; i < n; i++)
        {
            BinaryTreeNode<int> *curr;
            if (flag)
            {
                curr = dque.front();
                dque.pop_front();
            }
            else
            {
                curr = dque.back();
                dque.pop_back();
            }
            ans.emplace_back(curr->data);
            if (flag)
            {
                if (curr->left != NULL)
                    dque.push_back(curr->left);
                if (curr->right != NULL)
                    dque.push_back(curr->right);
            }
            else
            {
                if (curr->right != NULL)
                    dque.push_front(curr->right);
                if (curr->left != NULL)
                    dque.push_front(curr->left);
            }
        }
        flag = !flag;
    }
    return ans;
}
