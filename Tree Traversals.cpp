#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here.
    stack<pair<BinaryTreeNode<int> *, int>> st;
    vector<vector<int>> ans;
    st.push({root, 1});
    vector<int> pre, inn, post;
    if (root == NULL)
        return ans;
    while (!st.empty())
    {
        auto it = st.top();
        st.pop();
        if (it.second == 1)
        {
            pre.emplace_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
                st.push({it.first->left, 1});
        }
        else if (it.second == 2)
        {
            inn.emplace_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right != NULL)
                st.push({it.first->right, 1});
        }
        else
            post.emplace_back(it.first->data);
    }
    ans.emplace_back(inn);
    ans.emplace_back(pre);
    ans.emplace_back(post);
    return ans;
}