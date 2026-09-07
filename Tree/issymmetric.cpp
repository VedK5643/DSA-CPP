#include<iostream>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    bool ismirror(TreeNode* t1, TreeNode* t2){
        if(t1==NULL || t2==NULL){
            return t1==t2;
        }
        if(t1->val != t2->val){
        return false;
     }
     return ismirror(t1->left,t2->right) && ismirror(t2->left,t1->right);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return ismirror(root->left,root->right);
    }
};