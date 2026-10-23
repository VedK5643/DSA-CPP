#include<iostream>
#include<queue>
using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {

        if(root==NULL || root->left == NULL){
            return root;
        }

        queue< Node*> q;
        q.push(root);
        q.push(NULL);

        Node* prev=NULL;
        while(q.size() >0 ){
            Node* curr = q.front();
            q.pop();
            if(curr==NULL){
                if(q.size()==0){
                    break;
                }
                else{
                    q.push(NULL);
                }
            }

            else{
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(prev!=NULL){
                    prev->next=curr;
                }
            }
            prev=curr;
        }
        return root;
    }
};