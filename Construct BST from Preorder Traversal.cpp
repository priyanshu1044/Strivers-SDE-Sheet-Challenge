#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int> *sol(vector<int> &pre, int ps, int pe) {
  if (ps > pe)
    return NULL;

  TreeNode<int> *temp = new TreeNode<int>(pre[ps]);
  int i = ps + 1;
  for (; i <= pe; i++)
    if (pre[ps] < pre[i])
      break;

  temp->left = sol(pre, ps + 1, i - 1);
  temp->right = sol(pre, i, pe);

  return temp;
}

TreeNode<int> *preOrderTree(vector<int> &preOrder) {
  return sol(preOrder, 0, preOrder.size() - 1);
}