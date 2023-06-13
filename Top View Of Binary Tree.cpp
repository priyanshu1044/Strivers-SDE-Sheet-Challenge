#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root)
{

    vector<int> ans;
    if (!root)
        return ans;
    map<int, int> mpp;

    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();
        TreeNode<int> *N = temp.first;
        int hd = temp.second;
        if (mpp.find(hd) == mpp.end())
        {
            mpp[hd] = N->val;
        }
        if (N->left)
        {
            q.push({N->left, hd - 1});
        }
        if (N->right)
        {
            q.push({N->right, hd + 1});
        }
    }
    for (auto i : mpp)
        ans.push_back(i.second);
    return ans;
}