#include<iostream>
#include<algorithm>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class info{
    public:
        int min,max,sz;
        info(int mi, int mx, int s){
            min=mi;
            max=mx;
            sz=s;
        }
};

info helper(TreeNode* root){
    if(root==NULL){
        return info(INT_MAX,INT_MIN,0);
    }

    info left=helper(root->left);
    info right= helper(root->right);

    if(root->val>left.max && root->val<right.min){
        int currmin=min(root->val , left.min);
        int currmax=max(root->val,right.max);
        int cursize=left.sz+right.sz+1;

        return info(currmin,currmax,cursize);
    }
    return info(INT_MIN,INT_MAX, max(left.sz,right.sz));
}

int largestbstinBT(TreeNode* root){
    info inf=helper(root);
    return inf.sz;          //final max BST size
}