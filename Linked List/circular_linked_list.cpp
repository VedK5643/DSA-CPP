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

class circularlist{
    Node* head;
    Node* tail;
    public:
    circularlist(){
        head=tail=NULL;
    }

    void insertathead(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        else{
            newnode->next=head;                 //newnode->next=tail->next
            head=newnode;                       //tail->next=newnode
            tail->next=head;                    
        }
    }

    void printll(){
        if(head==NULL){
            return;
        }
        cout<<head->data<<"->";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<head->data<<endl;
    }

    void insertattail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }
        else{
            tail->next=newnode;
            newnode->next=head;
            tail=newnode;
        }
    }

    void deleteathead(){
        if(head==NULL){
            cout<<"Linked list is already empty";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }

    void deleteattail(){
        if(head==NULL){
            cout<<"Linked list is already empty";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=head;
            delete tail;
            tail=temp;
        }
    }

};


int main(){
    circularlist cll;
    cll.insertathead(1);
    cll.insertathead(2);
    cll.insertattail(5);
    cll.insertathead(3);
    cll.deleteathead();
    cll.deleteattail();
    

    cll.printll();
    return 0;
}