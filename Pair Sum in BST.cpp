#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> nums;
    stack<BinaryTreeNode<int>*> st;
    auto *curr = root;

    while (curr != NULL || !st.empty()){
        while (curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        nums.push_back(curr->data);
        curr = curr->right;
    }

    int lo = 0, hi = nums.size()-1;
    while (lo < hi){
        int sum = nums[lo] + nums[hi];
        if (sum == k) return true;
        else if (sum < k) lo++;
        else hi--;
    }
    
    return false;
}