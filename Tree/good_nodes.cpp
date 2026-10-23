#include<iostream>
#include<vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
};

class Solution {
public:
    int helper(TreeNode* root, int mx) {
        if (root == NULL) {
            return 0;
        }
        int good = root->val >= mx ? 1 : 0;
        mx = max(mx, root->val);
        return good + helper(root->left, mx) + helper(root->right, mx);
    }

    int goodNodes(TreeNode* root) { return helper(root, INT_MIN); }
};