#include<iostream>
#include<algorithm>
#include<vector>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1!=NULL){
            arr.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            arr.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* temp=new ListNode(0);
        ListNode* curr=temp;
        for(int x:arr){
            curr->next=new ListNode(x);
            curr=curr->next;
        }
        return temp->next;
    }
};
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(t1!=NULL && t2!=NULL){
            if(t1->val < t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1){
            temp->next=t1;
        }
        else{
            temp->next=t2;
        }
        return dummy->next;
    }
};