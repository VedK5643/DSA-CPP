#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i =0;i<nums.size();i++){
            nums[i] += (nums[nums[i]]%n)*n;
        }

        for(int i=0;i<n;i++){
            nums[i]/=n;
        }
        return nums;
    }
};