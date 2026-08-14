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

    

    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }


    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;

    for (int i = 0; i < left - 1; i++) {
        prev = prev->next;
    }

    ListNode* leftNode = prev->next;
    ListNode* rightNode = leftNode;
    for (int i = 0; i < right - left; i++) {
        rightNode = rightNode->next;
    }

    ListNode* afterRight = rightNode->next;
    rightNode->next = NULL;  

    prev->next = reverseList(leftNode); 
    leftNode->next = afterRight;       

    return dummy->next;

    }
};