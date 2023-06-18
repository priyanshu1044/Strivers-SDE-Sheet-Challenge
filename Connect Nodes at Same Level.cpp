#include <bits/stdc++.h>
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public :
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode<int> *root)
{
    if (!root)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> que;
    que.push(root);
    while (!que.empty())
    {
        int n = que.size();
        BinaryTreeNode<int> *prev = NULL;
        while (n)
        {
            auto node = que.front();
            que.pop();
            if (prev)
            {
                prev->next = node;
            }
            prev = node;
            if (node->left)
            {
                que.push(node->left);
            }
            if (node->right)
            {
                que.push(node->right);
            }
            n--;
        }
    }
}