#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return {};
    vector<int> v;
    queue<pair<BinaryTreeNode<int> *, int>> que;
    map<int, int> mpp;
    que.push({root, 0});
    mpp[0] = root->data;
    while (!que.empty())
    {
        auto it = que.front();
        que.pop();
        BinaryTreeNode<int> *temp = it.first;
        int distance = it.second;
        if (temp->left)
        {
            que.push({temp->left, distance - 1});
            mpp[distance - 1] = temp->left->data;
        }
        if (temp->right)
        {
            que.push({temp->right, distance + 1});
            mpp[distance + 1] = temp->right->data;
        }
    }
    for (auto it : mpp)
    {
        v.emplace_back(it.second);
    }
    return v;
}
