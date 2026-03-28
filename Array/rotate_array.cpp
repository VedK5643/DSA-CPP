#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> ans(n);
        k=k%n;
        for(int i=0;i<n;i++){
            ans[(i+k)%n]=nums[i];
        }
        nums=ans;
    }
};

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
*/