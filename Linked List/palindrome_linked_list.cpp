#include<iostream>
#include<vector>
#include<algorithm>
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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> check;
        while(temp!=NULL){
            check.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> ans;
        ans=check;
        reverse(check.begin(),check.end());
        if(ans==check){
            return true;
        }
        else{
            return false;
        }
    }
};