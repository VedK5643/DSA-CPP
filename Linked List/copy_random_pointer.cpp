#include<iostream>
#include<unordered_map>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*>m;
        Node* dummyhead=new Node(head->val);
        Node* temp2=dummyhead;
        Node* temp1=head->next;
        m[head]=dummyhead;
        while(temp1!=NULL){
            Node* copy=new Node(temp1->val);
            m[temp1]=copy;
            temp2->next=copy;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1=head;
        temp2=dummyhead;
        while(temp1!=NULL){
            temp2->random=m[temp1->random];
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return dummyhead;
    }
};