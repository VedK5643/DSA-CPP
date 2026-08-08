#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int bin=0;
        int power=0;
        for(int i=arr.size()-1;i>=0;i--){
            bin+=arr[i]* pow(2,power);
            power++;
        }
    return bin;

    }
};