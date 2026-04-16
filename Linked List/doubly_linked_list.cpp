#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class doublylist{
    Node* head;
    Node* tail;
    public:
    doublylist(){
        head=tail=NULL;
    }

    void push_front(int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode; 
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
        head=tail=newnode; 
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }

    void insert(int pos,int val){
        if(pos<0){
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newnode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position";
                return;
            }
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->next->prev=newnode;
        newnode->prev=temp;
        temp->next=newnode;
        
    }

    void pop_front(){
        if(head==NULL){
            cout<<"Linked list is already empty";
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            if(head!=NULL){
            head->prev=NULL;
            }
            delete temp;
        }
    }

    void pop_back(){
        if(head==NULL){
            cout<<"Linked list is already empty";
        }
        else{
            Node*temp=tail;
            tail=tail->prev;
            if(tail!=NULL){
                tail->next=NULL;
            }
            temp->prev=NULL;
            delete temp;
        }
    }
    

};








int main(){
    doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.insert(2,5);
    dll.pop_back();
    dll.pop_front();

    dll.print();

    return 0;
}