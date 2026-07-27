#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int a1=nums[n-1]*nums[n-2]*nums[n-3];
        int a2=nums[0]*nums[1]*nums[n-1];
        int ans=max(a1,a2);
        return ans;
    }
};