#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reverselinkedlist(ListNode* temp){
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=temp;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    }


    ListNode* getknode(ListNode* temp,int k){
        for(int i=0;i<k-1;i++){
            if(temp==NULL){
                return NULL;
            }
            temp=temp->next;
        }
        return temp;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* knode=getknode(temp,k);
            if(knode==NULL){
                if(prev){
                    prev->next=temp;
                    break;
                }
            }
            ListNode* nextnode=knode->next;
            knode->next=NULL;
            reverselinkedlist(temp);
            if(temp==head){
                head=knode;
            }
            else{
                prev->next=knode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};