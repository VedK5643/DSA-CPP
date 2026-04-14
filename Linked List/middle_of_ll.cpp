#include<iostream>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int size=1;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        ListNode* temp2=head;
        
            for(int i=0;i<size/2;i++){
                temp2=temp2->next;
            }
        
        return temp2;
    }
};
*/

//Using slow fast pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};