#include<iostream>
#include<queue>
#include<vector>
using namespace std;


struct TreeNode {
    int val;    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL)
            return {};

        vector<vector<int>> levelorder;
        vector<int> pusher;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while (q.size() > 0) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr == NULL) {
                if (!q.empty()) {
                    levelorder.push_back(pusher);
                    pusher.clear();
                    q.push(NULL);
                    continue;
                } else {
                    levelorder.push_back(pusher);
                    return levelorder;
                }
            }
            pusher.push_back(curr->val);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        return levelorder;
    }
};