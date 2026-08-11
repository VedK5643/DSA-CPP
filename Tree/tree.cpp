#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
Node* buildtree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }

    Node* root= new Node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}

void pretraversal(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    pretraversal(root->left);
    pretraversal(root->right);
}

void intraversal(Node* root){
    if(root == NULL){
        return;
    }

    intraversal(root->left);
    cout<<root->data<<" ";
    intraversal(root->right);
}

void posttraversal(Node* root){
    if(root==NULL){
        return;
    }

    posttraversal(root->left);
    posttraversal(root->right);
    cout<<root->data<<" ";
}

void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(q.size()>0){
        Node* curr=q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;

}

int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(preorder);
    pretraversal(root);
    cout<<endl;
    intraversal(root);
    cout<<endl;
    posttraversal(root);
    cout<<endl;
    levelorder(root);


    return 0;
}