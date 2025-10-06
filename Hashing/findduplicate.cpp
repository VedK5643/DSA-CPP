#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

//Linear space complexity
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                ans=i;
                break;
            }
            s.insert(nums[i]);
        }
        return nums[ans];        
    }
};

//constant space(slow-fast pointers)
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow=arr[0];
        int fast=arr[0];
        do{
            slow=arr[slow];
            fast=arr[arr[fast]];
        }while(slow!=fast);
        slow=arr[0];
        while(slow!=fast){
            slow=arr[slow];
            fast=arr[fast];
        }
        return slow;
    }
};