#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int st=0;
    for(int end=0;end<nums.size();end++){
        if(nums[end]!=0 ){
            swap(nums[st],nums[end]);
            st++;
        }
    }
    }
};