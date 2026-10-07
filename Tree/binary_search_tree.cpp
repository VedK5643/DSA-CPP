#include<iostream>
#include<vector>
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

Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

Node* buildBST(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root,val);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

bool search(Node* root, int target){            //TC- O(height of tree)
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }

    if(target<root->data){
        return search(root->left,target);
    }
    else{
        return search(root->right,target);
    }
}

Node* getinordersuccess(Node* root){
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}



Node* delnode(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=delnode(root->left,key);
    }
    else if(key>root->data){
        root->right=delnode(root->right,key);
    }
    else{
        //key== root
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp= root->left;
            delete root;
            return temp;
        }
        else{
            Node* INS=getinordersuccess(root->right);
            root->data=INS->data;
            root->right=delnode(root->right,INS->data);
        }
    }
    return root;
}

int main(){
    vector<int> arr= {3,2,1,5,6,4};
    Node* root= buildBST(arr);
    inorder(root);                  //prints in sorted order
    cout<<endl;
    
    delnode(root,3);
    inorder(root);
    cout<<endl;

    cout<<search(root,5);           //True


    return 0;
}