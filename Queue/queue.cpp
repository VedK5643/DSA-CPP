#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Using linked list
class Node {
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int data){
        Node* newnode=new Node(data);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    void pop(){
        if(head==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    int front(){
        return head->data;
    }

    bool empty(){
        return head==NULL;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()){
        cout<<q.front()<<"\t";
        q.pop();
    }

    return 0;
}

/*Using STL
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()){
        cout<<q.front()<<"\t";
        q.pop();
    }

    return 0;
}
*/