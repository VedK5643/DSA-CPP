#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newnode= new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            newnode-> next=head;
            head= newnode;
        }
    }

    void printll(){
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
            tail=newnode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"Linked list is already empty\n";
            return;
        }
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"Linked list is already empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    void insert(int pos,int value){
        if(pos<0){
            return;
        }
        if(pos==0){
            push_front(value);
            return;
        }
        Node* newnode=new Node(value);
        Node *temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position";
                return;
            }
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    int search(int value){
        int idx=0;
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==value){
                return idx;
            }
            else{
            temp=temp->next;
            idx++;
            } 
        }
        return -1;
    }
};


int main(){
    List ll;
    ll.pop_front();
    ll.push_back(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.pop_front();
    ll.pop_back();
    ll.push_back(1);
    ll.push_front(4);
    ll.insert(1,33);
    

    ll.printll();
    cout<<"\n";
    cout<<ll.search(1);
    
    return 0;
}